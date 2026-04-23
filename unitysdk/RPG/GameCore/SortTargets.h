#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseSortConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SORTTARGETS_METHOD_3_0C365BA265955B3C_OFFSET UNITYSDK_OFFSET(0x18E74810)
#define RPG_GAMECORE_SORTTARGETS_METHOD_3_13A70F58EACBD537_OFFSET UNITYSDK_OFFSET(0x18E746F0)
#define RPG_GAMECORE_SORTTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E74790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SortTargets_TypeDefinitionIndex = 22084;

	class SortTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::BaseSortConfig* SortConfig; // 0x28
		::System::Boolean RandomWhenEquals; // 0x30
		::System::Boolean IncludeLimbo; // 0x31
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13A70F58EACBD537(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SortTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SortTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTTARGETS_METHOD_3_13A70F58EACBD537_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C365BA265955B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SortTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SortTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTTARGETS_METHOD_3_0C365BA265955B3C_OFFSET))(a1, a2);
		}
	};
}
