#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_4C8D32059C9B7C27_OFFSET UNITYSDK_OFFSET(0x18741690)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_5F448CBA177F31DA_OFFSET UNITYSDK_OFFSET(0x187415B0)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18741630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainBehaviorFlag_TypeDefinitionIndex = 21935;

	class ByContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x28
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Flags; // 0x30
		::RPG::GameCore::LogicOperation ContainType; // 0x38
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x40
		::System::Boolean AddedOrAlive; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5F448CBA177F31DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_5F448CBA177F31DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C8D32059C9B7C27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_4C8D32059C9B7C27_OFFSET))(a1, a2);
		}
	};
}
