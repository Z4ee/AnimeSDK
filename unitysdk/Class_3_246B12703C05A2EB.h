#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMonsterUniqueID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_246B12703C05A2EB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1450E5E0)
#define CLASS_3_246B12703C05A2EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1450E5B0)

inline static constexpr unsigned int Class_3_246B12703C05A2EB_TypeDefinitionIndex = 50988;

class Class_3_246B12703C05A2EB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMonsterUniqueID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + CLASS_3_246B12703C05A2EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_246B12703C05A2EB_EVALUATE_OFFSET))(this);
	}
};
