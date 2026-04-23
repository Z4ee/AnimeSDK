#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareGroupState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF19975B483D5EA4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x903D990)
#define CLASS_3_DF19975B483D5EA4__CTOR_OFFSET UNITYSDK_OFFSET(0x903D960)

inline static constexpr unsigned int Class_3_DF19975B483D5EA4_TypeDefinitionIndex = 48537;

class Class_3_DF19975B483D5EA4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareGroupState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGroupState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + CLASS_3_DF19975B483D5EA4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF19975B483D5EA4_EVALUATE_OFFSET))(this);
	}
};
