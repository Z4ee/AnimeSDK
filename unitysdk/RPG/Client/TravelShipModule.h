#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_TRAVELSHIPMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB37B060)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_BELONGTRAVELSHIPMAPPINGINFOIDSET_OFFSET UNITYSDK_OFFSET(0xB37BB90)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_DOCKSTATIONPROPIDSET_OFFSET UNITYSDK_OFFSET(0xB37B770)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_HIDEDOCKLANDINGPROPIDSET_OFFSET UNITYSDK_OFFSET(0xB37B690)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_HIDEDOCKPROPIDSET_OFFSET UNITYSDK_OFFSET(0xB37BB20)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xB37BA90)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xB37BD00)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISREVERSEVERTICALAXIS_OFFSET UNITYSDK_OFFSET(0xB37BC10)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_ISSELECTINGDOCK_OFFSET UNITYSDK_OFFSET(0xB37BAB0)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_TARGETSHIPDOCKMAPINFODATA_OFFSET UNITYSDK_OFFSET(0xB37BAD0)
#define RPG_CLIENT_TRAVELSHIPMODULE_GET_TRAVELSHIPMAPICONTYPENUM_OFFSET UNITYSDK_OFFSET(0xB37BAF0)
#define RPG_CLIENT_TRAVELSHIPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB37AD60)
#define RPG_CLIENT_TRAVELSHIPMODULE_ISCONTROLLERNAVIGATING_OFFSET UNITYSDK_OFFSET(0xB37B540)
#define RPG_CLIENT_TRAVELSHIPMODULE_ISPROPLANDINGHIDE_OFFSET UNITYSDK_OFFSET(0xB37B5D0)
#define RPG_CLIENT_TRAVELSHIPMODULE_ISTRAVELSHIPDOCKPROP_OFFSET UNITYSDK_OFFSET(0xB37B700)
#define RPG_CLIENT_TRAVELSHIPMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB37AF80)
#define RPG_CLIENT_TRAVELSHIPMODULE_SETLOCKCONTROL_OFFSET UNITYSDK_OFFSET(0xB37B280)
#define RPG_CLIENT_TRAVELSHIPMODULE_SETTARGETDOCK_OFFSET UNITYSDK_OFFSET(0xB37B350)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xB37BAA0)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISLOCK_OFFSET UNITYSDK_OFFSET(0xB37BD10)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISREVERSEVERTICALAXIS_OFFSET UNITYSDK_OFFSET(0xB37BC70)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_ISSELECTINGDOCK_OFFSET UNITYSDK_OFFSET(0xB37BAC0)
#define RPG_CLIENT_TRAVELSHIPMODULE_SET_TARGETSHIPDOCKMAPINFODATA_OFFSET UNITYSDK_OFFSET(0xB37BAE0)
#define RPG_CLIENT_TRAVELSHIPMODULE_TRYTRACKCURDOCKMAPINFO_OFFSET UNITYSDK_OFFSET(0xB37B3A0)
#define RPG_CLIENT_TRAVELSHIPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB37ADE0)
#define RPG_CLIENT_TRAVELSHIPMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB37BD20)
#define RPG_CLIENT_TRAVELSHIPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB37AD40)
#define RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPHIDE_OFFSET UNITYSDK_OFFSET(0xB37B860)
#define RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPSHOW_OFFSET UNITYSDK_OFFSET(0xB37B810)
#define RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLETRAVELSHIPSETDESTINATION_OFFSET UNITYSDK_OFFSET(0xB37BA40)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB37BE80)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB37BD30)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB37BE20)
#define RPG_CLIENT_TRAVELSHIPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB37BDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipModule_TypeDefinitionIndex = 62864;

	class TravelShipModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__TravelShipMapIconTypeNum()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TravelShipModule_TypeDefinitionIndex)->GetStaticField(0x6160);
		}
		::RPG::Client::MapMappingInfoData* _TargetShipDockMapInfoData_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideDockPropIDSet; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _BelongTravelShipMappingInfoIDSet; // 0x20
		::System::String* _LastLockReason; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DockStationPropIDSet; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HideDockLandingPropIDSet; // 0x38
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

		::System::Void SetTargetDock(::RPG::Client::MapMappingInfoData* targetMapInfoData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SETTARGETDOCK_OFFSET))(this, targetMapInfoData);
		}

		::System::Void TryTrackCurDockMapInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_TRYTRACKCURDOCKMAPINFO_OFFSET))(this);
		}

		::System::Void SetLockControl(::System::Boolean isLock, ::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SETLOCKCONTROL_OFFSET))(this, isLock, reason);
		}

		::System::Boolean IsControllerNavigating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ISCONTROLLERNAVIGATING_OFFSET))(this);
		}

		::System::Boolean IsPropLandingHide(::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ISPROPLANDINGHIDE_OFFSET))(this, propID);
		}

		::System::Boolean IsTravelShipDockProp(::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_ISTRAVELSHIPDOCKPROP_OFFSET))(this, propID);
		}

		::System::Void _OnPuzzleHudTravelShipShow(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPSHOW_OFFSET))(this, arg);
		}

		::System::Void _OnPuzzleHudTravelShipHide(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLEHUDTRAVELSHIPHIDE_OFFSET))(this, arg);
		}

		::System::Void _OnPuzzleTravelShipSetDestination(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE__ONPUZZLETRAVELSHIPSETDESTINATION_OFFSET))(this, arg);
		}

		::System::Boolean get_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISINPROGRESS_OFFSET))(this);
		}

		::System::Void set_IsInProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISINPROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsSelectingDock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISSELECTINGDOCK_OFFSET))(this);
		}

		::System::Void set_IsSelectingDock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISSELECTINGDOCK_OFFSET))(this, value);
		}

		::RPG::Client::MapMappingInfoData* get_TargetShipDockMapInfoData()
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_TARGETSHIPDOCKMAPINFODATA_OFFSET))(this);
		}

		::System::Void set_TargetShipDockMapInfoData(::RPG::Client::MapMappingInfoData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_TARGETSHIPDOCKMAPINFODATA_OFFSET))(this, value);
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

		::System::Void set_IsReverseVerticalAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISREVERSEVERTICALAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_IsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_GET_ISLOCK_OFFSET))(this);
		}

		::System::Void set_IsLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPMODULE_SET_ISLOCK_OFFSET))(this, value);
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
