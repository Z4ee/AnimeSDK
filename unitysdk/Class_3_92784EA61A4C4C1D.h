#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareNextUnusedInsertAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_92784EA61A4C4C1D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x163E5B10)
#define CLASS_3_92784EA61A4C4C1D__CTOR_OFFSET UNITYSDK_OFFSET(0x163E5AE0)

inline static constexpr unsigned int Class_3_92784EA61A4C4C1D_TypeDefinitionIndex = 54764;

class Class_3_92784EA61A4C4C1D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareNextUnusedInsertAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNextUnusedInsertAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNextUnusedInsertAction*))((::PBYTE)hIl2Cpp + CLASS_3_92784EA61A4C4C1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_92784EA61A4C4C1D_EVALUATE_OFFSET))(this);
	}
};
