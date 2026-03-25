#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RETARGETLIST_METHOD_3_44FAAC5F7AE030B7_OFFSET UNITYSDK_OFFSET(0x175ACF00)
#define RPG_GAMECORE_RETARGETLIST_METHOD_3_9E9DFD84A1697679_OFFSET UNITYSDK_OFFSET(0x175ACDE0)
#define RPG_GAMECORE_RETARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x175ACE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetargetList_TypeDefinitionIndex = 21105;

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

		static ::System::Void Method_3_9E9DFD84A1697679(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_METHOD_3_9E9DFD84A1697679_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44FAAC5F7AE030B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RetargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RetargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETLIST_METHOD_3_44FAAC5F7AE030B7_OFFSET))(a1, a2);
		}
	};
}
