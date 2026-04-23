#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_3_C7AF82B59A8F116A_1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA067E00)
#define CLASS_3_C7AF82B59A8F116A_1_METHOD_3_0C65FEC03EB5BE56_OFFSET UNITYSDK_OFFSET(0xA068110)
#define CLASS_3_C7AF82B59A8F116A_1_METHOD_3_512F32A9B03E5AD9_OFFSET UNITYSDK_OFFSET(0xA068070)
#define CLASS_3_C7AF82B59A8F116A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA067DD0)

inline static constexpr unsigned int Class_3_C7AF82B59A8F116A_1_TypeDefinitionIndex = 50449;

class Class_3_C7AF82B59A8F116A_1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsPropertyValueMinOrMax*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_1_EVALUATE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_512F32A9B03E5AD9(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_1_METHOD_3_512F32A9B03E5AD9_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0C65FEC03EB5BE56(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_C7AF82B59A8F116A_1_METHOD_3_0C65FEC03EB5BE56_OFFSET))(this, a1, a2);
	}
};
