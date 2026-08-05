#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_539A5A7FAC22747B.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_IGNOREWHENMOVE_OFFSET UNITYSDK_OFFSET(0x173A7A60)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x173A7A20)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x173A79E0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_REVERTORIENTATIONAXIS_OFFSET UNITYSDK_OFFSET(0x173A7A70)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x173A7CB0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173A7AD0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A7E80)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x173A7ED0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173A7EE0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CurveMove_TypeDefinitionIndex = 83385;

	class NapPointMetaPlugin_CurveMove : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::System::Boolean _ignoreWhenMove; // 0x58
		::Enum_3_539A5A7FAC22747B _connectionOrientationMode; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_NAME_1_OFFSET))(this);
		}

		::System::Boolean get_IgnoreWhenMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_IGNOREWHENMOVE_OFFSET))(this);
		}

		::System::Boolean get_RevertOrientationAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_GET_REVERTORIENTATIONAXIS_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CURVEMOVE___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
