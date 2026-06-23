#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPSplineMetaPluginBase.h"

class Class_3_EE08C76A2B86637F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x1A1A9FD0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x1A1A9F90)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A1A9F50)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_POPBACKSTAGECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A1AA0A0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_PUSHBACKSTAGECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A1A9FF0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1AA130)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMetaPlugin_ZipLine_TypeDefinitionIndex = 73833;

	class NAPSplineMetaPlugin_ZipLine : public ::MoleMole::Spline::NAPSplineMetaPluginBase
	{
	public:
		::System::String* patternKey; // 0x30
		::System::Boolean MuteSwitch; // 0x38
		::System::Boolean MuteTurnBack; // 0x39
		::System::Boolean MuteExit; // 0x3A
		::System::Boolean BlockGroupStreaming; // 0x3B
		::System::Collections::Generic::List_1<::Class_3_EE08C76A2B86637F*>* Field_8_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_NAME_1_OFFSET))(this);
		}

		::System::Boolean get_InValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_GET_INVALID_OFFSET))(this);
		}

		::System::Void PushBackStageComponent(::Class_3_EE08C76A2B86637F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EE08C76A2B86637F*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_PUSHBACKSTAGECOMPONENT_OFFSET))(this, a1);
		}

		::System::Void PopBackStageComponent(::Class_3_EE08C76A2B86637F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EE08C76A2B86637F*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_ZIPLINE_POPBACKSTAGECOMPONENT_OFFSET))(this, a1);
		}
	};
}
