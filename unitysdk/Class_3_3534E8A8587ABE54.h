#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3534E8A8587ABE54_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12425EB0)
#define CLASS_3_3534E8A8587ABE54__CTOR_OFFSET UNITYSDK_OFFSET(0x12425E80)

inline static constexpr unsigned int Class_3_3534E8A8587ABE54_TypeDefinitionIndex = 50387;

class Class_3_3534E8A8587ABE54 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasBillboard*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasBillboard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + CLASS_3_3534E8A8587ABE54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3534E8A8587ABE54_EVALUATE_OFFSET))(this);
	}
};
