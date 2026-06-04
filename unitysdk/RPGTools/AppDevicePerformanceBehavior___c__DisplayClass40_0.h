#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools { class AppDevicePerformanceBehavior; }
namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA243E70)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__0_OFFSET UNITYSDK_OFFSET(0xA2454A0)
#define RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__1_OFFSET UNITYSDK_OFFSET(0xA2454F0)

namespace RPGTools
{
	inline static constexpr unsigned int AppDevicePerformanceBehavior___c__DisplayClass40_0_TypeDefinitionIndex = 44280;

	class AppDevicePerformanceBehavior___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::RPGTools::AppDevicePerformanceBehavior* __4__this; // 0x10
		::UnityEngine::UI::InputField* memUpdateInput; // 0x18
		::UnityEngine::UI::InputField* fpsUpdateInput; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupUI_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__0_OFFSET))(this, a1);
		}

		::System::Void _SetupUI_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_APPDEVICEPERFORMANCEBEHAVIOR___C__DISPLAYCLASS40_0__SETUPUI_B__1_OFFSET))(this, a1);
		}
	};
}
