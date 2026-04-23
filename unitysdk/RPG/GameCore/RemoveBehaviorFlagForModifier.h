#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_B0D519095451861E_OFFSET UNITYSDK_OFFSET(0x18CA2C10)
#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_D8203BD38BDA8361_OFFSET UNITYSDK_OFFSET(0x18CA2B90)
#define RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA2BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveBehaviorFlagForModifier_TypeDefinitionIndex = 22062;

	class RemoveBehaviorFlagForModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* RemoveBehaviorFlags; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8203BD38BDA8361(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_D8203BD38BDA8361_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0D519095451861E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveBehaviorFlagForModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveBehaviorFlagForModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBEHAVIORFLAGFORMODIFIER_METHOD_3_B0D519095451861E_OFFSET))(a1, a2);
		}
	};
}
