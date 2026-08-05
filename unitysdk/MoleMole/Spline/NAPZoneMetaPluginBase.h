#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FE72B9AC849E8D70.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Zone.h"

class Class_0_16E4307DCC419505_176;
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point_Empty; }
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x129DA860)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_ENTER_OFFSET UNITYSDK_OFFSET(0x129DA8B0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EXIT_OFFSET UNITYSDK_OFFSET(0x129DA960)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x129DA690)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET UNITYSDK_OFFSET(0x129DA4A0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x129DA460)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_POINTOWNER_OFFSET UNITYSDK_OFFSET(0x129DA4B0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x129DA4C0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x129DA9C0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x129DA910)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x129DAA10)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x129DAA60)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x129DAA70)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x129DAA80)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMetaPluginBase_TypeDefinitionIndex = 54981;

	class NAPZoneMetaPluginBase : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone
	{
	public:
		::System::Boolean _hasSerialized; // 0x40
		::Enum_3_FE72B9AC849E8D70 Direction; // 0x44
		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* Field_7_6; // 0x48
		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* Field_7_5; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_InspectorDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET))(this);
		}

		::System::Boolean get_PointOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_POINTOWNER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* get_StartPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_STARTPOINT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* get_EndPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_ENDPOINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Enter(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Method_7_C50B93169B85DAEA(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Void Exit(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EXIT_OFFSET))(this, a1);
		}

		::System::Void Method_7_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_1_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_AWAKE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* __base_get_EndPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_GET_ENDPOINT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* __base_get_StartPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_GET_STARTPOINT_OFFSET))(this);
		}
	};
}
