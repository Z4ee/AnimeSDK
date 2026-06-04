#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_TRAVELSHIPMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAD7210)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_BELONGTRAVELSHIPMAPPINGINFOIDSET_OFFSET UNITYSDK_OFFSET(0xCAD7E30)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_DOCKSTATIONPROPIDSET_OFFSET UNITYSDK_OFFSET(0xCAD7990)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_HIDEDOCKLANDINGPROPIDSET_OFFSET UNITYSDK_OFFSET(0xCAD78B0)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_HIDEDOCKPROPIDSET_OFFSET UNITYSDK_OFFSET(0xCAD7DC0)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAD7D00)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xCAD7FA0)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISREVERSEVERTICALAXIS_OFFSET UNITYSDK_OFFSET(0xCAD7EB0)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISSELECTINGDOCK_OFFSET UNITYSDK_OFFSET(0xCAD7D20)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_TARGETSHIPDOCKMAPINFODATA_OFFSET UNITYSDK_OFFSET(0xCAD7D40)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_TRAVELSHIPMAPICONTYPENUM_OFFSET UNITYSDK_OFFSET(0xCAD7D60)
#define RPG_CLIENT_TRAVELSHIPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCAD6EC0)
#define RPG_CLIENT_TRAVELSHIPMODULE_ISCONTROLLERNAVIGATING_OFFSET UNITYSDK_OFFSET(0xCAD7790)
#define RPG_CLIENT_TRAVELSHIPMODULE_ISPROPLANDINGHIDE_OFFSET UNITYSDK_OFFSET(0xCAD77F0)
#define RPG_CLIENT_TRAVELSHIPMODULE_ISTRAVELSHIPDOCKPROP_OFFSET UNITYSDK_OFFSET(0xCAD7920)
#define RPG_CLIENT_TRAVELSHIPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCAD7120)
#define RPG_CLIENT_TRAVELSHIPMODULE_SETLOCKCONTROL_OFFSET UNITYSDK_OFFSET(0xCAD7450)
#define RPG_CLIENT_TRAVELSHIPMODULE_SETTARGETDOCK_OFFSET UNITYSDK_OFFSET(0xCAD7520)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAD7D10)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xCAD7FB0)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISREVERSEVERTICALAXIS_OFFSET UNITYSDK_OFFSET(0xCAD7F10)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISSELECTINGDOCK_OFFSET UNITYSDK_OFFSET(0xCAD7D30)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_TARGETSHIPDOCKMAPINFODATA_OFFSET UNITYSDK_OFFSET(0xCAD7D50)
#define RPG_CLIENT_TRAVELSHIPMODULE_TRYTRACKCURDOCKMAPINFO_OFFSET UNITYSDK_OFFSET(0xCAD7570)
#define RPG_CLIENT_TRAVELSHIPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCAD6F40)
#define RPG_CLIENT_TRAVELSHIPMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAD7FC0)
#define RPG_CLIENT_TRAVELSHIPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD6EA0)
#define RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPHIDE_OFFSET UNITYSDK_OFFSET(0xCAD7A80)
#define RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPSHOW_OFFSET UNITYSDK_OFFSET(0xCAD7A30)
#define RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLETRAVELSHIPSETDESTINATION_OFFSET UNITYSDK_OFFSET(0xCAD7CB0)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCAD8110)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xCAD7FD0)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xCAD80B0)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCAD8050)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipModule_TypeDefinitionIndex = 63799;

	class TravelShipModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__TravelShipMapIconTypeNum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TravelShipModule_TypeDefinitionIndex)->GetStaticField(0x11B20);
		}
		::RPG::Client::MapMappingInfoData* _TargetShipDockMapInfoData_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideDockLandingPropIDSet; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideDockPropIDSet; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DockStationPropIDSet; // 0x28
		::System::String* _LastLockReason; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _BelongTravelShipMappingInfoIDSet; // 0x38
		::System::Boolean _IsLock_k__BackingField; // 0x40
		::System::Boolean _IsInProgress_k__BackingField; // 0x41
		::System::Boolean _IsSelectingDock_k__BackingField; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void SetTargetDock(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SETTARGETDOCK_OFFSET))(this, a1);
		}

		::System::Void TryTrackCurDockMapInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_TRYTRACKCURDOCKMAPINFO_OFFSET))(this);
		}

		::System::Void SetLockControl(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SETLOCKCONTROL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsControllerNavigating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ISCONTROLLERNAVIGATING_OFFSET))(this);
		}

		::System::Boolean IsPropLandingHide(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ISPROPLANDINGHIDE_OFFSET))(this, a1);
		}

		::System::Boolean IsTravelShipDockProp(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ISTRAVELSHIPDOCKPROP_OFFSET))(this, a1);
		}

		::System::Void _OnPuzzleHudTravelShipShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPSHOW_OFFSET))(this, a1);
		}

		::System::Void _OnPuzzleHudTravelShipHide(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPHIDE_OFFSET))(this, a1);
		}

		::System::Void _OnPuzzleTravelShipSetDestination(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLETRAVELSHIPSETDESTINATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void set_IsInProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISINPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelectingDock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISSELECTINGDOCK_OFFSET))(this);
		}

		::System::Void set_IsSelectingDock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISSELECTINGDOCK_OFFSET))(this, a1);
		}

		::RPG::Client::MapMappingInfoData* get_TargetShipDockMapInfoData()
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_TARGETSHIPDOCKMAPINFODATA_OFFSET))(this);
		}

		::System::Void set_TargetShipDockMapInfoData(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_TARGETSHIPDOCKMAPINFODATA_OFFSET))(this, a1);
		}

		static ::System::UInt32 get_TravelShipMapIconTypeNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_TRAVELSHIPMAPICONTYPENUM_OFFSET))();
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_HideDockPropIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_HIDEDOCKPROPIDSET_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_HideDockLandingPropIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_HIDEDOCKLANDINGPROPIDSET_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_DockStationPropIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_DOCKSTATIONPROPIDSET_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_BelongTravelShipMappingInfoIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_BELONGTRAVELSHIPMAPPINGINFOIDSET_OFFSET))(this);
		}

		::System::Boolean get_IsReverseVerticalAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISREVERSEVERTICALAXIS_OFFSET))(this);
		}

		::System::Void set_IsReverseVerticalAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISREVERSEVERTICALAXIS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void set_IsLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISLOCK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
