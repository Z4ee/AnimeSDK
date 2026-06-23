#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPPointMetaPluginBase.h"

class Class_0_16E4307DCC419505_280;
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x1839A0A0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1839A060)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_METHOD_8_5079926AF5084948_OFFSET UNITYSDK_OFFSET(0x1839A0E0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1839A1D0)
#define MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1839A280)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NapPointMetaPlugin_TimeLine_TypeDefinitionIndex = 58882;

	class NapPointMetaPlugin_TimeLine : public ::MoleMole::Spline::NAPPointMetaPluginBase
	{
	public:
		// static const ::System::String* Field_8_5; // 0x0
		// static const ::System::String* Field_8_6; // 0x0
		::System::String* Key; // 0x58
		::System::String* CustomTag; // 0x60
		::System::Boolean MuteInLevelInput; // 0x68
		::System::Boolean HideInLevelUIAndMuteInput; // 0x69
		::System::Boolean IsTimelineSyncLoad; // 0x6A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_5079926AF5084948(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE_METHOD_8_5079926AF5084948_OFFSET))(this, a1);
		}

		::System::Void __base_OnTrigger(::Class_0_16E4307DCC419505_280* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_280*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETAPLUGIN_TIMELINE___BASE_ONTRIGGER_OFFSET))(this, a1);
		}
	};
}
