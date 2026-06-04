#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_14CE081FBFBEC731;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWITCHMASCOTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC98EEF0)
#define RPG_CLIENT_SWITCHMASCOTMODULE_FIRESHOWCHESTEVENT_OFFSET UNITYSDK_OFFSET(0xC98F4B0)
#define RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xC98F120)
#define RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0xC98F420)
#define RPG_CLIENT_SWITCHMASCOTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC98EAF0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC98EF90)
#define RPG_CLIENT_SWITCHMASCOTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC990290)
#define RPG_CLIENT_SWITCHMASCOTMODULE__FIRESHOWCHESTEVENT_OFFSET UNITYSDK_OFFSET(0xC98F560)
#define RPG_CLIENT_SWITCHMASCOTMODULE__GETSWITCHMASCOTPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0xC98F1E0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__INITSWITCHMASCOTPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0xC98EC20)
#define RPG_CLIENT_SWITCHMASCOTMODULE__NOTIFYTOAST_OFFSET UNITYSDK_OFFSET(0xC990100)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ONGETSWITCHMASCOTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC98F8E0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ONSWITCHMASCOTUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC98FC30)
#define RPG_CLIENT_SWITCHMASCOTMODULE__SENDGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC98F7D0)
#define RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC990380)
#define RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC990300)
#define RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC990390)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchMascotModule_TypeDefinitionIndex = 63633;

	class SwitchMascotModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_14CE081FBFBEC731*>* SwitchMascotPuzzleDataDict; // 0x10
		::RPG::Client::TextID _GET_COIN_TEXT_ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLETOTALCOINCNT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FireShowChestEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_FIRESHOWCHESTEVENT_OFFSET))(this, a1);
		}

		::Class_1_14CE081FBFBEC731* _GetSwitchMascotPuzzleData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::Class_1_14CE081FBFBEC731*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__GETSWITCHMASCOTPUZZLEDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _FireShowChestEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__FIRESHOWCHESTEVENT_OFFSET))(this, a1);
		}

		::System::Void _SendGetDataScRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__SENDGETDATASCRSP_OFFSET))(this);
		}

		::System::Void _OnGetSwitchMascotDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ONGETSWITCHMASCOTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSwitchMascotUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ONSWITCHMASCOTUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitSwitchMascotPuzzleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__INITSWITCHMASCOTPUZZLEDATA_OFFSET))(this);
		}

		::System::Void _NotifyToast(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__NOTIFYTOAST_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
