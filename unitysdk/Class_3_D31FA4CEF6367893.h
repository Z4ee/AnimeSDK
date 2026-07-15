#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareGraphDynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D31FA4CEF6367893_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D58B00)
#define CLASS_3_D31FA4CEF6367893__CTOR_OFFSET UNITYSDK_OFFSET(0x17D58AD0)

inline static constexpr unsigned int Class_3_D31FA4CEF6367893_TypeDefinitionIndex = 50176;

class Class_3_D31FA4CEF6367893 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareGraphDynamicFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGraphDynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_D31FA4CEF6367893__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D31FA4CEF6367893_EVALUATE_OFFSET))(this);
	}
};
