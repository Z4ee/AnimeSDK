#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareLittleGameLevelVarFixPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F37867D5BC4FC64_EVALUATE_OFFSET UNITYSDK_OFFSET(0x88AF0D0)
#define CLASS_3_7F37867D5BC4FC64__CTOR_OFFSET UNITYSDK_OFFSET(0x88AF0A0)

inline static constexpr unsigned int Class_3_7F37867D5BC4FC64_TypeDefinitionIndex = 42863;

class Class_3_7F37867D5BC4FC64 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLittleGameLevelVarFixPoint*))((::PBYTE)hIl2Cpp + CLASS_3_7F37867D5BC4FC64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F37867D5BC4FC64_EVALUATE_OFFSET))(this);
	}
};
