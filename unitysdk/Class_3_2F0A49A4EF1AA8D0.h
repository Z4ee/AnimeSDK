#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetIsStanceWeak; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F0A49A4EF1AA8D0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13FF7640)
#define CLASS_3_2F0A49A4EF1AA8D0__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF7610)

inline static constexpr unsigned int Class_3_2F0A49A4EF1AA8D0_TypeDefinitionIndex = 51152;

class Class_3_2F0A49A4EF1AA8D0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetIsStanceWeak*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + CLASS_3_2F0A49A4EF1AA8D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F0A49A4EF1AA8D0_EVALUATE_OFFSET))(this);
	}
};
