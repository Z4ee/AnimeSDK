#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools { class AppDevicePerformanceBehavior; }
namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF75F0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__0_OFFSET UNITYSDK_OFFSET(0x8DF8D70)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__1_OFFSET UNITYSDK_OFFSET(0x8DF8DC0)

namespace RPGTools
{
	inline static constexpr unsigned int AppDevicePerformanceBehavior___c__DisplayClass40_0_TypeDefinitionIndex = 40982;

	class AppDevicePerformanceBehavior___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::InputField* memUpdateInput; // 0x10
		::UnityEngine::UI::InputField* fpsUpdateInput; // 0x18
		::RPGTools::AppDevicePerformanceBehavior* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupUI_b__0(::System::String* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__0_OFFSET))(this, _p0_);
		}

		::System::Void _SetupUI_b__1(::System::String* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__1_OFFSET))(this, _p0_);
		}
	};
}
