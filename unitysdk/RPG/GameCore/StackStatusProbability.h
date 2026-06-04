#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKSTATUSPROBABILITY_METHOD_3_33CEEEF8F48F65C4_OFFSET UNITYSDK_OFFSET(0x19CA33A0)
#define RPG_GAMECORE_STACKSTATUSPROBABILITY_METHOD_3_4D85E4FAAC193343_OFFSET UNITYSDK_OFFSET(0x19CA3420)
#define RPG_GAMECORE_STACKSTATUSPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA33F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackStatusProbability_TypeDefinitionIndex = 21444;

	class StackStatusProbability : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x20
		::RPG::GameCore::DynamicFloat* Probability; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33CEEEF8F48F65C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackStatusProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackStatusProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSPROBABILITY_METHOD_3_33CEEEF8F48F65C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D85E4FAAC193343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackStatusProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackStatusProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSTATUSPROBABILITY_METHOD_3_4D85E4FAAC193343_OFFSET))(a1, a2);
		}
	};
}
