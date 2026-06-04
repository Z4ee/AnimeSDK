#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAbilityTag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityModifierParam; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERAABILITYMODIFIER_METHOD_2_94595847773890A9_OFFSET UNITYSDK_OFFSET(0x19633630)
#define RPG_GAMECORE_CHIMERAABILITYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19633810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityModifier_TypeDefinitionIndex = 15069;

	class ChimeraAbilityModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::RPG::GameCore::ChimeraBattleAbilityTag Tag; // 0x20
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityModifierParam*>* Params; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_94595847773890A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYMODIFIER_METHOD_2_94595847773890A9_OFFSET))(a1, a2);
		}
	};
}
