#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCharacterID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_952AF2C2450352AC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1594B920)
#define CLASS_3_952AF2C2450352AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1594B8F0)

inline static constexpr unsigned int Class_3_952AF2C2450352AC_TypeDefinitionIndex = 54733;

class Class_3_952AF2C2450352AC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCharacterID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCharacterID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCharacterID*))((::PBYTE)hIl2Cpp + CLASS_3_952AF2C2450352AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_952AF2C2450352AC_EVALUATE_OFFSET))(this);
	}
};
