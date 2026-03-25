#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffectList.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_48FA53C77A63BD51_OFFSET UNITYSDK_OFFSET(0x178C60E0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_C96983DA1F5F1F8D_OFFSET UNITYSDK_OFFSET(0x178C5F60)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x178C5F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectListForUI_TypeDefinitionIndex = 21090;

	class TriggerEffectListForUI : public ::RPG::GameCore::TriggerEffectList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_48FA53C77A63BD51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_48FA53C77A63BD51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C96983DA1F5F1F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_C96983DA1F5F1F8D_OFFSET))(a1, a2);
		}
	};
}
