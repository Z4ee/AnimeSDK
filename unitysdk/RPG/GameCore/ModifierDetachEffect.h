#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERDETACHEFFECT_METHOD_3_AA31FFD7C02F8334_OFFSET UNITYSDK_OFFSET(0x1AF717B0)
#define RPG_GAMECORE_MODIFIERDETACHEFFECT_METHOD_3_F10DA050C5AE6E99_OFFSET UNITYSDK_OFFSET(0x1AF71800)
#define RPG_GAMECORE_MODIFIERDETACHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF717F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDetachEffect_TypeDefinitionIndex = 22625;

	class ModifierDetachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Boolean IsNeedFadeOut; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDETACHEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA31FFD7C02F8334(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierDetachEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierDetachEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDETACHEFFECT_METHOD_3_AA31FFD7C02F8334_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F10DA050C5AE6E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierDetachEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierDetachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDETACHEFFECT_METHOD_3_F10DA050C5AE6E99_OFFSET))(a1, a2);
		}
	};
}
