#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsGenderType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C854A59CB00CE337_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE24A6C0)
#define CLASS_3_C854A59CB00CE337__CTOR_OFFSET UNITYSDK_OFFSET(0xE24A690)

inline static constexpr unsigned int Class_3_C854A59CB00CE337_TypeDefinitionIndex = 54660;

class Class_3_C854A59CB00CE337 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsGenderType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsGenderType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + CLASS_3_C854A59CB00CE337__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C854A59CB00CE337_EVALUATE_OFFSET))(this);
	}
};
