#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTurnActionEntityTeamType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7276701661796979_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16296220)
#define CLASS_3_7276701661796979__CTOR_OFFSET UNITYSDK_OFFSET(0x162961F0)

inline static constexpr unsigned int Class_3_7276701661796979_TypeDefinitionIndex = 54796;

class Class_3_7276701661796979 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTurnActionEntityTeamType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + CLASS_3_7276701661796979__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7276701661796979_EVALUATE_OFFSET))(this);
	}
};
