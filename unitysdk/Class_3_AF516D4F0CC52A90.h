#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetLockHP; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AF516D4F0CC52A90_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16093EF0)
#define CLASS_3_AF516D4F0CC52A90__CTOR_OFFSET UNITYSDK_OFFSET(0x16093EC0)

inline static constexpr unsigned int Class_3_AF516D4F0CC52A90_TypeDefinitionIndex = 52657;

class Class_3_AF516D4F0CC52A90 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetLockHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetLockHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + CLASS_3_AF516D4F0CC52A90__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF516D4F0CC52A90_EVALUATE_OFFSET))(this);
	}
};
