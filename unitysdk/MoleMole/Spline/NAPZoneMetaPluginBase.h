#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FE72B9AC849E8D70.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Zone.h"

class Class_0_16E4307DCC419505_280;
namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point_Empty; }
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x173FDAC0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_ENTER_OFFSET UNITYSDK_OFFSET(0x173FDB10)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EXIT_OFFSET UNITYSDK_OFFSET(0x173FDBC0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x173FD8F0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET UNITYSDK_OFFSET(0x173FD700)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x173FD6C0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_POINTOWNER_OFFSET UNITYSDK_OFFSET(0x173FD710)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x173FD720)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x173FDC20)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x173FDB70)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173FDC70)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x173FDCC0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x173FDCD0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE___BASE_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x173FDCE0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMetaPluginBase_TypeDefinitionIndex = 84747;

	class NAPZoneMetaPluginBase : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone
	{
	public:
		::System::Boolean _hasSerialized; // 0x40
		::Enum_3_FE72B9AC849E8D70 Direction; // 0x44
		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* Field_7_2; // 0x48
		::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* Field_7_3; // 0x50

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

		::System::Void Enter(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Method_7_C50B93169B85DAEA(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Void Exit(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_EXIT_OFFSET))(this, a1);
		}

		::System::Void Method_7_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_1_OFFSET))(this, a1);
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
