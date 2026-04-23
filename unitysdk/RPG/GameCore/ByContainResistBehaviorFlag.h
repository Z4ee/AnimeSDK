#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_739EC0FBEE81E649_OFFSET UNITYSDK_OFFSET(0x187422D0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_76E43ACA1CD6F195_OFFSET UNITYSDK_OFFSET(0x18742200)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18742280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainResistBehaviorFlag_TypeDefinitionIndex = 22633;

	class ByContainResistBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag ResistFlag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_76E43ACA1CD6F195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_76E43ACA1CD6F195_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_739EC0FBEE81E649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_739EC0FBEE81E649_OFFSET))(a1, a2);
		}
	};
}
