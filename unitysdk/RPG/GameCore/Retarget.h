#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RETARGET_METHOD_3_715F10AF1C7E0444_OFFSET UNITYSDK_OFFSET(0x1DBA0560)
#define RPG_GAMECORE_RETARGET_METHOD_3_AE6D7402C7F98558_OFFSET UNITYSDK_OFFSET(0x1DBA0780)
#define RPG_GAMECORE_RETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA0720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Retarget_TypeDefinitionIndex = 22651;

	class Retarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Boolean ByRandom; // 0x28
		::System::Boolean IncludeLimbo; // 0x29
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x40
		::System::Boolean IgnoreParallelWarning; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_715F10AF1C7E0444(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Retarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Retarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGET_METHOD_3_715F10AF1C7E0444_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE6D7402C7F98558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Retarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Retarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGET_METHOD_3_AE6D7402C7F98558_OFFSET))(a1, a2);
		}
	};
}
