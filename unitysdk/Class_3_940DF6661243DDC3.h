#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTrainVisitorIsMeet; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_940DF6661243DDC3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9360230)
#define CLASS_3_940DF6661243DDC3__CTOR_OFFSET UNITYSDK_OFFSET(0x9360200)

inline static constexpr unsigned int Class_3_940DF6661243DDC3_TypeDefinitionIndex = 49023;

class Class_3_940DF6661243DDC3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTrainVisitorIsMeet*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTrainVisitorIsMeet* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTrainVisitorIsMeet*))((::PBYTE)hIl2Cpp + CLASS_3_940DF6661243DDC3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_940DF6661243DDC3_EVALUATE_OFFSET))(this);
	}
};
