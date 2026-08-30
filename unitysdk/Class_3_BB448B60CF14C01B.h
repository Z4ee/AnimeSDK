#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByGameEntityNotCreated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BB448B60CF14C01B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19AEAFA0)
#define CLASS_3_BB448B60CF14C01B__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEAF70)

inline static constexpr unsigned int Class_3_BB448B60CF14C01B_TypeDefinitionIndex = 52871;

class Class_3_BB448B60CF14C01B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByGameEntityNotCreated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + CLASS_3_BB448B60CF14C01B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB448B60CF14C01B_EVALUATE_OFFSET))(this);
	}
};
