#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMODIFIER_METHOD_3_4365CF768E4736F1_OFFSET UNITYSDK_OFFSET(0x19AC6A30)
#define RPG_GAMECORE_REMODIFIER_METHOD_3_9D73D38676E15B6F_OFFSET UNITYSDK_OFFSET(0x19AC6B50)
#define RPG_GAMECORE_REMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC6AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Remodifier_TypeDefinitionIndex = 22338;

	class Remodifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IncludeLimbo; // 0x20
		::RPG::GameCore::PredicateConfig* PredicateFilter; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagFilter; // 0x38
		::RPG::GameCore::EnumStatusTypeMask StatusTypeMask; // 0x40
		::System::String* ModifierName; // 0x48
		::System::Boolean ByRandom; // 0x50
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4365CF768E4736F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Remodifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Remodifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMODIFIER_METHOD_3_4365CF768E4736F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D73D38676E15B6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Remodifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Remodifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMODIFIER_METHOD_3_9D73D38676E15B6F_OFFSET))(a1, a2);
		}
	};
}
