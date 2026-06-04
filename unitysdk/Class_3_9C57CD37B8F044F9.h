#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFiveDimContainerDynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C57CD37B8F044F9_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA5D1770)
#define CLASS_3_9C57CD37B8F044F9__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D1740)

inline static constexpr unsigned int Class_3_9C57CD37B8F044F9_TypeDefinitionIndex = 49381;

class Class_3_9C57CD37B8F044F9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_9C57CD37B8F044F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C57CD37B8F044F9_EVALUATE_OFFSET))(this);
	}
};
