#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class Class_0_16E4307DCC419505_280;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x17388FB0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17388F70)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_METHOD_8_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x17388FF0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x173890C0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x17389170)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_CameraZoom_TypeDefinitionIndex = 44930;

	class NapPointMetaPlugin_CameraZoom : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		::System::String* Key; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM_METHOD_8_58E4F6A5F8FAF17F_OFFSET))(this, a1);
		}

		::System::Void __base_OnTrigger(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_CAMERAZOOM___BASE_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
