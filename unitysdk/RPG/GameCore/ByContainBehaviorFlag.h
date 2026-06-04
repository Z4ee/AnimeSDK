#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_27B570AAB7F88477_OFFSET UNITYSDK_OFFSET(0x1953F000)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_2B7B8F183CB8BE29_OFFSET UNITYSDK_OFFSET(0x1953ED00)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_5F448CBA177F31DA_OFFSET UNITYSDK_OFFSET(0x1953EC20)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_6F443C4C044D95CC_OFFSET UNITYSDK_OFFSET(0x1953F080)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1953ECA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainBehaviorFlag_TypeDefinitionIndex = 21758;

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

		static ::System::Void Method_4_2B7B8F183CB8BE29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_2B7B8F183CB8BE29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_27B570AAB7F88477(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_27B570AAB7F88477_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F443C4C044D95CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_6F443C4C044D95CC_OFFSET))(a1, a2);
		}
	};
}
