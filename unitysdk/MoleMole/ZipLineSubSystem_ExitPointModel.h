#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Struct_2_6E2EEE08157EEF79.h"
#include "unitysdk/Struct_2_6E2EEE08157EEF79_1.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ZipLineSubSystem; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_EXITSPLINE_OFFSET UNITYSDK_OFFSET(0x162F6010)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_OFFSET UNITYSDK_OFFSET(0x162F6030)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_PRESELECT_OFFSET UNITYSDK_OFFSET(0x162F6050)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x162F6070)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x162F6090)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_EXITSPLINE_OFFSET UNITYSDK_OFFSET(0x162F6020)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_OFFSET UNITYSDK_OFFSET(0x162F6040)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_PRESELECT_OFFSET UNITYSDK_OFFSET(0x162F6060)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x162F6080)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x162F5F20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__ONCREATEPROPERTY_B__19_0_OFFSET UNITYSDK_OFFSET(0x162F6230)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_ExitPointModel_TypeDefinitionIndex = 63901;

	class ZipLineSubSystem_ExitPointModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* _EndPoint_ExitSpline_k__BackingField; // 0x80
		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1>>* _EndPoint_k__BackingField; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>* _EndPoint_Navmesh_k__BackingField; // 0x90
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0x98
		::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>* _EndPoint_Navmesh_PreSelect_k__BackingField; // 0xA0
		::System::Single Navmesh_Iterate_T; // 0xA8

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__CTOR_OFFSET))(this, ownerSubSystem);
		}

		::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* get_EndPoint_ExitSpline()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_EXITSPLINE_OFFSET))(this);
		}

		::System::Void set_EndPoint_ExitSpline(::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_CECEDD33F79E5905>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_EXITSPLINE_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>* get_EndPoint_Navmesh()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_OFFSET))(this);
		}

		::System::Void set_EndPoint_Navmesh(::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>* get_EndPoint_Navmesh_PreSelect()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_NAVMESH_PRESELECT_OFFSET))(this);
		}

		::System::Void set_EndPoint_Navmesh_PreSelect(::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_NAVMESH_PRESELECT_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1>>* get_EndPoint()
		{
			return ((::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_GET_ENDPOINT_OFFSET))(this);
		}

		::System::Void set_EndPoint(::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_164<::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_SET_ENDPOINT_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1> _OnCreateProperty_b__19_0()
		{
			return ((::System::Nullable_1<::Struct_2_6E2EEE08157EEF79_1>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_EXITPOINTMODEL__ONCREATEPROPERTY_B__19_0_OFFSET))(this);
		}
	};
}
