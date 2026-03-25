#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentTurnState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9B16DB30A02C30D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA9B2A40)
#define CLASS_3_F9B16DB30A02C30D__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B2A10)

inline static constexpr unsigned int Class_3_F9B16DB30A02C30D_TypeDefinitionIndex = 43934;

class Class_3_F9B16DB30A02C30D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentTurnState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + CLASS_3_F9B16DB30A02C30D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9B16DB30A02C30D_EVALUATE_OFFSET))(this);
	}
};
