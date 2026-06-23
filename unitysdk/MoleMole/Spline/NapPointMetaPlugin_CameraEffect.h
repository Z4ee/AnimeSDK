#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class Class_0_16E4307DCC419505_280;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x12BE0F90)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x12BE0F50)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_METHOD_8_65A78C555487D0E9_OFFSET UNITYSDK_OFFSET(0x12BE0FD0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE1070)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x12BE1120)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CameraEffect_TypeDefinitionIndex = 63686;

	class NapPointMetaPlugin_CameraEffect : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::MoleMole::Config::ScreenEffectType ScreenEffectType; // 0x58
		::System::String* Key; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_65A78C555487D0E9(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT_METHOD_8_65A78C555487D0E9_OFFSET))(this, a1);
		}

		::System::Void __base_OnTrigger(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAEFFECT___BASE_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
