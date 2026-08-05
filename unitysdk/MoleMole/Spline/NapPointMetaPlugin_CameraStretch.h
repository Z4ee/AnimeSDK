#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class Class_0_16E4307DCC419505_176;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x1190EF80)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1190EF40)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_METHOD_8_34950EE2B8F16EB1_OFFSET UNITYSDK_OFFSET(0x1190EFC0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1190F080)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1190F0E0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CameraStretch_TypeDefinitionIndex = 85089;

	class NapPointMetaPlugin_CameraStretch : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::System::String* Key; // 0x58
		::System::Boolean OverrideBlendSetting; // 0x60
		::System::Single OverrideBlendDuration; // 0x64
		::System::String* OverrideBlendCurveKey; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_34950EE2B8F16EB1(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH_METHOD_8_34950EE2B8F16EB1_OFFSET))(this, a1);
		}

		::System::Void __base_OnTrigger(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERASTRETCH___BASE_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
