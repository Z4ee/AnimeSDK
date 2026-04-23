#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_1_015A32DE380F4196;
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwitchHandMazePuzzleDataManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1EE480)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_FIRECOLLECTCOINFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xB1EF3A0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xB1EE6E0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0xB1EE770)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETSWITCHHANDCOINDATALIST_OFFSET UNITYSDK_OFFSET(0xB1EE6A0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0xB1EE060)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_ISCOLLECTALLCOIN_OFFSET UNITYSDK_OFFSET(0xB1EE880)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_SYNCCOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xB1EE800)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER_TRYUPDATESERVERCOIN_OFFSET UNITYSDK_OFFSET(0xB1EF780)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xB1EE0C0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1EFC60)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITCOINDATA_OFFSET UNITYSDK_OFFSET(0xB1EE960)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__INITPUZZLECOINCNT_OFFSET UNITYSDK_OFFSET(0xB1EE160)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__NOTIFYTOAST_OFFSET UNITYSDK_OFFSET(0xB1EFA80)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB1EEEE0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDHIDE_OFFSET UNITYSDK_OFFSET(0xB1EEE60)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDSHOW_OFFSET UNITYSDK_OFFSET(0xB1EE900)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xB1EED60)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xB1EE500)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xB1EE5A0)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATEPUZZLECOINCNT_OFFSET UNITYSDK_OFFSET(0xB1EF040)
#define RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATESERVERCOIN_OFFSET UNITYSDK_OFFSET(0xB1EF820)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandCoinContainer_TypeDefinitionIndex = 62687;

	class SwitchHandCoinContainer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PuzzleCollectCoinCnt; // 0x10
		::RPG::Client::SwitchHandMazePuzzleDataManager* _Owner; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>* _CoinDataList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _PuzzleTotalCoinCnt; // 0x28
		::RPG::Client::TextID _GET_COIN_TEXT_ID; // 0x30
		::RPG::Client::TextID _GET_ALL_COIN_TEXT_ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::SwitchHandMazePuzzleDataManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandMazePuzzleDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_INIT_OFFSET))(this, manager);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>* GetSwitchHandCoinDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwitchHandCoinData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETSWITCHHANDCOINDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 switchID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, switchID);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 switchID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_GETPUZZLETOTALCOINCNT_OFFSET))(this, switchID);
		}

		::System::Void SyncCollectCoinCnt(::Class_1_015A32DE380F4196* handData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_015A32DE380F4196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_SYNCCOLLECTCOINCNT_OFFSET))(this, handData);
		}

		::System::Boolean IsCollectAllCoin(::System::UInt32 puzzleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_ISCOLLECTALLCOIN_OFFSET))(this, puzzleID);
		}

		::System::Void _AddNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ADDNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__REMOVENOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _OnSwitchHandShow(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDSHOW_OFFSET))(this, o);
		}

		::System::Void _OnSwitchHandHide(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONSWITCHHANDHIDE_OFFSET))(this, o);
		}

		::System::Void _RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__REGISTEREVENT_OFFSET))(this);
		}

		::System::Void _UnRegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UNREGISTEREVENT_OFFSET))(this);
		}

		::System::Void _OnPropStateChange(::Class_0_16E4307DCC419505_382* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__ONPROPSTATECHANGE_OFFSET))(this, e);
		}

		::System::Void FireCollectCoinFinishEvent(::System::UInt32 puzzleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_FIRECOLLECTCOINFINISHEVENT_OFFSET))(this, puzzleID);
		}

		::System::Void TryUpdateServerCoin(::System::UInt32 puzzleID, ::System::UInt32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER_TRYUPDATESERVERCOIN_OFFSET))(this, puzzleID, cnt);
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

		::System::Void _NotifyToast(::System::UInt32 currentCnt, ::System::UInt32 totalCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__NOTIFYTOAST_OFFSET))(this, currentCnt, totalCnt);
		}

		::System::Void _UpdateServerCoin(::System::UInt32 cnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINCONTAINER__UPDATESERVERCOIN_OFFSET))(this, cnt);
		}
	};
}
