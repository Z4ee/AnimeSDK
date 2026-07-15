#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMAZEMAPUI_METHOD_3_7C4EBFFC8011BE2B_OFFSET UNITYSDK_OFFSET(0x1B058200)
#define RPG_GAMECORE_TRIGGERMAZEMAPUI_METHOD_3_8AD7E358FC0F78AE_OFFSET UNITYSDK_OFFSET(0x1B0582D0)
#define RPG_GAMECORE_TRIGGERMAZEMAPUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0582C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeMapUI_TypeDefinitionIndex = 21270;

	class TriggerMazeMapUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMAPUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C4EBFFC8011BE2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeMapUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeMapUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMAPUI_METHOD_3_7C4EBFFC8011BE2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AD7E358FC0F78AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeMapUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeMapUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMAPUI_METHOD_3_8AD7E358FC0F78AE_OFFSET))(a1, a2);
		}
	};
}
