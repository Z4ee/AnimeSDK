#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareNPCMonsterCheckState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_54F8FE46A3852279_EVALUATE_OFFSET UNITYSDK_OFFSET(0x139D1E90)
#define CLASS_3_54F8FE46A3852279__CTOR_OFFSET UNITYSDK_OFFSET(0x139D1E60)

inline static constexpr unsigned int Class_3_54F8FE46A3852279_TypeDefinitionIndex = 49176;

class Class_3_54F8FE46A3852279 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareNPCMonsterCheckState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + CLASS_3_54F8FE46A3852279__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_54F8FE46A3852279_EVALUATE_OFFSET))(this);
	}
};
