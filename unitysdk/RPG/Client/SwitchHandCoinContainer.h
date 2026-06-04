#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_E9F8FB76DA71A219;
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwitchHandMazePuzzleDataManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC948010)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_FIRECOLLECTCOINFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xC9857C0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xC9481D0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0xC948260)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETSWITCHHANDCOINDATALIST_OFFSET UNITYSDK_OFFSET(0xC948190)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0xC947ED0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_ISCOLLECTALLCOIN_OFFSET UNITYSDK_OFFSET(0xC948370)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_SYNCCOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xC9482F0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_TRYUPDATESERVERCOIN_OFFSET UNITYSDK_OFFSET(0xC985BA0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC947F30)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xC986820)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITCOINDATA_OFFSET UNITYSDK_OFFSET(0xC985D40)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITPUZZLECOINCNT_OFFSET UNITYSDK_OFFSET(0xC9862B0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__NOTIFYTOAST_OFFSET UNITYSDK_OFFSET(0xC986680)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xC985200)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDHIDE_OFFSET UNITYSDK_OFFSET(0xC984F00)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDSHOW_OFFSET UNITYSDK_OFFSET(0xC948470)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xC9850D0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC9480B0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xC984FA0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATEPUZZLECOINCNT_OFFSET UNITYSDK_OFFSET(0xC985370)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATESERVERCOIN_OFFSET UNITYSDK_OFFSET(0xC985C90)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandCoinContainer_TypeDefinitionIndex = 63620;

	class SwitchHandCoinContainer : public ::System::Object
	{
	public:
		::RPG::Client::SwitchHandMazePuzzleDataManager* _Owner; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>* _CoinDataList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PuzzleTotalCoinCnt; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PuzzleCollectCoinCnt; // 0x28
		::RPG::Client::TextID _GET_COIN_TEXT_ID; // 0x30
		::RPG::Client::TextID _GET_ALL_COIN_TEXT_ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::SwitchHandMazePuzzleDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandMazePuzzleDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>* GetSwitchHandCoinDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETSWITCHHANDCOINDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLETOTALCOINCNT_OFFSET))(this, a1);
		}

		::System::Void SyncCollectCoinCnt(::Class_1_E9F8FB76DA71A219* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9F8FB76DA71A219*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_SYNCCOLLECTCOINCNT_OFFSET))(this, a1);
		}

		::System::Boolean IsCollectAllCoin(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_ISCOLLECTALLCOIN_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ADDNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__REMOVENOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _OnSwitchHandShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDSHOW_OFFSET))(this, a1);
		}

		::System::Void _OnSwitchHandHide(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDHIDE_OFFSET))(this, a1);
		}

		::System::Void _RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__REGISTEREVENT_OFFSET))(this);
		}

		::System::Void _UnRegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UNREGISTEREVENT_OFFSET))(this);
		}

		::System::Void _OnPropStateChange(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONPROPSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void FireCollectCoinFinishEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_FIRECOLLECTCOINFINISHEVENT_OFFSET))(this, a1);
		}

		::System::Void TryUpdateServerCoin(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_TRYUPDATESERVERCOIN_OFFSET))(this, a1, a2);
		}

		::System::Void _InitCoinData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITCOINDATA_OFFSET))(this);
		}

		::System::Void _InitPuzzleCoinCnt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITPUZZLECOINCNT_OFFSET))(this);
		}

		::System::Void _UpdatePuzzleCoinCnt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATEPUZZLECOINCNT_OFFSET))(this);
		}

		::System::Void _NotifyToast(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__NOTIFYTOAST_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateServerCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATESERVERCOIN_OFFSET))(this, a1);
		}
	};
}
