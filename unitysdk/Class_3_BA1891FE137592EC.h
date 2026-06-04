#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByCompareVariableBool; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA1891FE137592EC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13638AD0)
#define CLASS_3_BA1891FE137592EC__CTOR_OFFSET UNITYSDK_OFFSET(0x13638AA0)

inline static constexpr unsigned int Class_3_BA1891FE137592EC_TypeDefinitionIndex = 48795;

class Class_3_BA1891FE137592EC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByCompareVariableBool*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByCompareVariableBool* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByCompareVariableBool*))((::PBYTE)hIl2Cpp + CLASS_3_BA1891FE137592EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA1891FE137592EC_EVALUATE_OFFSET))(this);
	}
};
