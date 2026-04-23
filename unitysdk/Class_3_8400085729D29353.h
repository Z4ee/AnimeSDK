#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByPlayerHide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8400085729D29353_EVALUATE_OFFSET UNITYSDK_OFFSET(0x96607C0)
#define CLASS_3_8400085729D29353__CTOR_OFFSET UNITYSDK_OFFSET(0x9660790)

inline static constexpr unsigned int Class_3_8400085729D29353_TypeDefinitionIndex = 48975;

class Class_3_8400085729D29353 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByPlayerHide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByPlayerHide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByPlayerHide*))((::PBYTE)hIl2Cpp + CLASS_3_8400085729D29353__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8400085729D29353_EVALUATE_OFFSET))(this);
	}
};
