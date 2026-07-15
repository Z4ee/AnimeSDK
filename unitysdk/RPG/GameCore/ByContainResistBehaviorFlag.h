#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_0FC91D9075C28F94_OFFSET UNITYSDK_OFFSET(0x1A8B6480)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_739EC0FBEE81E649_OFFSET UNITYSDK_OFFSET(0x1A8B64C0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_7AC0990C466B02CF_OFFSET UNITYSDK_OFFSET(0x1A8B66C0)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_EB20EC421B56BE49_OFFSET UNITYSDK_OFFSET(0x1A8B6690)
#define RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B64B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainResistBehaviorFlag_TypeDefinitionIndex = 22799;

	class ByContainResistBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ModifierBehaviorFlag ResistFlag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0FC91D9075C28F94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_0FC91D9075C28F94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_739EC0FBEE81E649(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_739EC0FBEE81E649_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EB20EC421B56BE49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_EB20EC421B56BE49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7AC0990C466B02CF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINRESISTBEHAVIORFLAG_METHOD_4_7AC0990C466B02CF_OFFSET))(a1, a2);
		}
	};
}
