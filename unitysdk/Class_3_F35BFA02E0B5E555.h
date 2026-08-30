#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareLittleGameLevelVarShort; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F35BFA02E0B5E555_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15577020)
#define CLASS_3_F35BFA02E0B5E555__CTOR_OFFSET UNITYSDK_OFFSET(0x15576FF0)

inline static constexpr unsigned int Class_3_F35BFA02E0B5E555_TypeDefinitionIndex = 53243;

class Class_3_F35BFA02E0B5E555 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareLittleGameLevelVarShort*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarShort* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + CLASS_3_F35BFA02E0B5E555__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F35BFA02E0B5E555_EVALUATE_OFFSET))(this);
	}
};
