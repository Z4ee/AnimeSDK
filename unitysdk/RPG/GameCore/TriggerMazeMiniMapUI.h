#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_METHOD_3_A9F1C8E8A4AF1357_OFFSET UNITYSDK_OFFSET(0x178C9D70)
#define RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_METHOD_3_AB067C7BFC61E143_OFFSET UNITYSDK_OFFSET(0x178C9C60)
#define RPG_GAMECORE_TRIGGERMAZEMINIMAPUI__CTOR_OFFSET UNITYSDK_OFFSET(0x178C9D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeMiniMapUI_TypeDefinitionIndex = 20261;

	class TriggerMazeMiniMapUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMINIMAPUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB067C7BFC61E143(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeMiniMapUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeMiniMapUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_METHOD_3_AB067C7BFC61E143_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A9F1C8E8A4AF1357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeMiniMapUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeMiniMapUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEMINIMAPUI_METHOD_3_A9F1C8E8A4AF1357_OFFSET))(a1, a2);
		}
	};
}
