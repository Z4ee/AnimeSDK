#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPZoneMetaPluginBase.h"

class Class_0_16E4307DCC419505_176;
namespace MoleMole::Config::ZipLine { class OptionalMoveDirectionType; }
namespace MoleMole::DataStructures::Common { class OptionalFloat; }
namespace MoleMole::DataStructures::Common { class OptionalVector2; }
namespace System { class String; }

#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x190B6580)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x190B6540)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_METHOD_8_CAFC3B5E63D0496F_1_OFFSET UNITYSDK_OFFSET(0x190B66F0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_METHOD_8_CAFC3B5E63D0496F_OFFSET UNITYSDK_OFFSET(0x190B65C0)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x190B6810)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE___BASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x190B6920)
#define MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE___BASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x190B69B0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMetaPlugin_ZipLine_TypeDefinitionIndex = 44369;

	class NAPZoneMetaPlugin_ZipLine : public ::MoleMole::Spline::NAPZoneMetaPluginBase
	{
	public:
		::System::Boolean InValid; // 0x58
		::MoleMole::Config::ZipLine::OptionalMoveDirectionType* MoveDirection; // 0x60
		::MoleMole::DataStructures::Common::OptionalVector2* SpeedRange; // 0x68
		::MoleMole::DataStructures::Common::OptionalFloat* BaseSpeed; // 0x70
		::System::Boolean MuteEnter; // 0x78
		::System::Boolean MuteSwitch; // 0x79
		::System::Boolean MuteTurnBack; // 0x7A
		::System::Boolean MuteExit; // 0x7B
		::System::Boolean ResumeGroupStreaming; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_GET_NAME_1_OFFSET))(this);
		}

		::System::Void Method_8_CAFC3B5E63D0496F(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_METHOD_8_CAFC3B5E63D0496F_OFFSET))(this, a1);
		}

		::System::Void Method_8_CAFC3B5E63D0496F_1(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE_METHOD_8_CAFC3B5E63D0496F_1_OFFSET))(this, a1);
		}

		::System::Void __base_OnEnter(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE___BASE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void __base_OnExit(::Class_0_16E4307DCC419505_176* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETAPLUGIN_ZIPLINE___BASE_ONEXIT_OFFSET))(this, a1);
		}
	};
}
