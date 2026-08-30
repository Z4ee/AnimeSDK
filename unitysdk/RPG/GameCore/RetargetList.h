#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RETARGETLIST_METHOD_3_742B0372B40EF73C_OFFSET UNITYSDK_OFFSET(0x1DBA0BF0)
#define RPG_GAMECORE_RETARGETLIST_METHOD_3_E612A0DB26D4E9D8_OFFSET UNITYSDK_OFFSET(0x1DBA0B10)
#define RPG_GAMECORE_RETARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA0B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetargetList_TypeDefinitionIndex = 22653;

	class RetargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Boolean ByRandom; // 0x28
		::System::Boolean IncludeLimbo; // 0x29
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FailedTaskList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E612A0DB26D4E9D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_METHOD_3_E612A0DB26D4E9D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_742B0372B40EF73C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_METHOD_3_742B0372B40EF73C_OFFSET))(a1, a2);
		}
	};
}
