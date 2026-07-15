#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_01FA7088C4BF624E_OFFSET UNITYSDK_OFFSET(0x1A8B4200)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_2B7B8F183CB8BE29_OFFSET UNITYSDK_OFFSET(0x1A8B4250)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_3935B9D02214F283_OFFSET UNITYSDK_OFFSET(0x1A8B4590)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_5A303CC1C961CEF5_OFFSET UNITYSDK_OFFSET(0x1A8B4550)
#define RPG_GAMECORE_BYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B4240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainBehaviorFlag_TypeDefinitionIndex = 22184;

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

		static ::System::Void Method_4_01FA7088C4BF624E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_01FA7088C4BF624E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B7B8F183CB8BE29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_2B7B8F183CB8BE29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A303CC1C961CEF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_5A303CC1C961CEF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3935B9D02214F283(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINBEHAVIORFLAG_METHOD_4_3935B9D02214F283_OFFSET))(a1, a2);
		}
	};
}
