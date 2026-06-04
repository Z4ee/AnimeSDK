#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_48D0A4EF99555FD2_OFFSET UNITYSDK_OFFSET(0x19540AE0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_739EC0FBEE81E649_OFFSET UNITYSDK_OFFSET(0x19540890)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_76E43ACA1CD6F195_OFFSET UNITYSDK_OFFSET(0x195407C0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_A567E380460033C5_OFFSET UNITYSDK_OFFSET(0x19540A60)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19540840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainResistBehaviorFlag_TypeDefinitionIndex = 22357;

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

		static ::System::Void Method_4_A567E380460033C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_A567E380460033C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_48D0A4EF99555FD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_48D0A4EF99555FD2_OFFSET))(a1, a2);
		}
	};
}
