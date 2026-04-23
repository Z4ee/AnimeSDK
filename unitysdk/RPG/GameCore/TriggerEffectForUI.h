#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_444477965FA88C33_OFFSET UNITYSDK_OFFSET(0x190C4280)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_47BA0C7E37299F55_OFFSET UNITYSDK_OFFSET(0x190C1D50)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x190C1CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectForUI_TypeDefinitionIndex = 19088;

	class TriggerEffectForUI : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_444477965FA88C33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_444477965FA88C33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47BA0C7E37299F55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_47BA0C7E37299F55_OFFSET))(a1, a2);
		}
	};
}
