#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_14CE081FBFBEC731;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWITCHMASCOTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB242B10)
#define RPG_CLIENT_SWITCHMASCOTMODULE_FIRESHOWCHESTEVENT_OFFSET UNITYSDK_OFFSET(0xB242FA0)
#define RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLECOLLECTCOINCNT_OFFSET UNITYSDK_OFFSET(0xB242C70)
#define RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLETOTALCOINCNT_OFFSET UNITYSDK_OFFSET(0xB242F10)
#define RPG_CLIENT_SWITCHMASCOTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB242790)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB242BC0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB243EC0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__FIRESHOWCHESTEVENT_OFFSET UNITYSDK_OFFSET(0xB243080)
#define RPG_CLIENT_SWITCHMASCOTMODULE__GETSWITCHMASCOTPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0xB242D30)
#define RPG_CLIENT_SWITCHMASCOTMODULE__INITSWITCHMASCOTPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0xB242890)
#define RPG_CLIENT_SWITCHMASCOTMODULE__NOTIFYTOAST_OFFSET UNITYSDK_OFFSET(0xB243CE0)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ONGETSWITCHMASCOTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB243440)
#define RPG_CLIENT_SWITCHMASCOTMODULE__ONSWITCHMASCOTUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB243800)
#define RPG_CLIENT_SWITCHMASCOTMODULE__SENDGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB243330)
#define RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB243FC0)
#define RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB243F30)
#define RPG_CLIENT_SWITCHMASCOTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB243FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchMascotModule_TypeDefinitionIndex = 62700;

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

		::System::UInt32 GetPuzzleCollectCoinCnt(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoInstanceID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLECOLLECTCOINCNT_OFFSET))(this, mappingInfoGroupID, mappingInfoInstanceID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::UInt32 GetPuzzleTotalCoinCnt(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoInstanceID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_GETPUZZLETOTALCOINCNT_OFFSET))(this, mappingInfoGroupID, mappingInfoInstanceID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::Void FireShowChestEvent(::System::UInt32 switchID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE_FIRESHOWCHESTEVENT_OFFSET))(this, switchID);
		}

		::Class_1_14CE081FBFBEC731* _GetSwitchMascotPuzzleData(::System::UInt32 mappingInfoGroupID, ::System::UInt32 mappingInfoInstanceID, ::System::UInt32 mappingInfoFloorID, ::System::UInt32 mappingInfoPlaneID)
		{
			return ((::Class_1_14CE081FBFBEC731*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__GETSWITCHMASCOTPUZZLEDATA_OFFSET))(this, mappingInfoGroupID, mappingInfoInstanceID, mappingInfoFloorID, mappingInfoPlaneID);
		}

		::System::Void _FireShowChestEvent(::System::UInt32 switchID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__FIRESHOWCHESTEVENT_OFFSET))(this, switchID);
		}

		::System::Void _SendGetDataScRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__SENDGETDATASCRSP_OFFSET))(this);
		}

		::System::Void _OnGetSwitchMascotDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ONGETSWITCHMASCOTDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnSwitchMascotUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__ONSWITCHMASCOTUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _InitSwitchMascotPuzzleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__INITSWITCHMASCOTPUZZLEDATA_OFFSET))(this);
		}

		::System::Void _NotifyToast(::System::UInt32 currentCnt, ::System::UInt32 totalCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHMASCOTMODULE__NOTIFYTOAST_OFFSET))(this, currentCnt, totalCnt);
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
