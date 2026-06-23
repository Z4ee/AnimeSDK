#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FE72B9AC849E8D70.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Point.h"

class Class_0_16E4307DCC419505_280;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x13049210)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET UNITYSDK_OFFSET(0x13049200)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x130491C0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x130492C0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x13049260)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13049310)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x130493B0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPPointMetaPluginBase_TypeDefinitionIndex = 52016;

	class NAPPointMetaPluginBase : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Point
	{
	public:
		::System::Boolean _hasSerialized; // 0x50
		::Enum_3_FE72B9AC849E8D70 Direction; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_InspectorDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_GET_INSPECTORDEBUG_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_AWAKE_OFFSET))(this);
		}

		::System::Void Trigger(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_TRIGGER_OFFSET))(this, a1);
		}

		::System::Void Method_7_C50B93169B85DAEA(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE_METHOD_7_C50B93169B85DAEA_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGINBASE___BASE_AWAKE_OFFSET))(this);
		}
	};
}
