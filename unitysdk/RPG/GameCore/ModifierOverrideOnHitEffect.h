#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_METHOD_3_49568A65CE336EB9_OFFSET UNITYSDK_OFFSET(0x17428240)
#define RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_METHOD_3_6134091955B181F7_OFFSET UNITYSDK_OFFSET(0x174282E0)
#define RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x174282A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierOverrideOnHitEffect_TypeDefinitionIndex = 21699;

	class ModifierOverrideOnHitEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* SheildBreakEffectPath; // 0x20
		::System::String* ModifierOverrideOnHitEffectPriority; // 0x28
		::RPG::GameCore::ModifierHitEffectStacking HitEffectStacking; // 0x30
		::System::Boolean OverrideOffset; // 0x34
		::RPG::MVector3 Offset; // 0x38
		::System::Boolean KeepHitEffect; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49568A65CE336EB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierOverrideOnHitEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierOverrideOnHitEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_METHOD_3_49568A65CE336EB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6134091955B181F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierOverrideOnHitEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierOverrideOnHitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIEROVERRIDEONHITEFFECT_METHOD_3_6134091955B181F7_OFFSET))(a1, a2);
		}
	};
}
