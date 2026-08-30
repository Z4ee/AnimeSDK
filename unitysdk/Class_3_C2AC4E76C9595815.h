#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByNPCMonsterPurposeType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2AC4E76C9595815_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF440190)
#define CLASS_3_C2AC4E76C9595815__CTOR_OFFSET UNITYSDK_OFFSET(0xF440160)

inline static constexpr unsigned int Class_3_C2AC4E76C9595815_TypeDefinitionIndex = 54686;

class Class_3_C2AC4E76C9595815 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByNPCMonsterPurposeType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + CLASS_3_C2AC4E76C9595815__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AC4E76C9595815_EVALUATE_OFFSET))(this);
	}
};
