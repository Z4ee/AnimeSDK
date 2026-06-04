#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInElationTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A8BAAFB550255F9D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13B12290)
#define CLASS_3_A8BAAFB550255F9D__CTOR_OFFSET UNITYSDK_OFFSET(0x13B12260)

inline static constexpr unsigned int Class_3_A8BAAFB550255F9D_TypeDefinitionIndex = 51106;

class Class_3_A8BAAFB550255F9D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInElationTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInElationTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + CLASS_3_A8BAAFB550255F9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8BAAFB550255F9D_EVALUATE_OFFSET))(this);
	}
};
