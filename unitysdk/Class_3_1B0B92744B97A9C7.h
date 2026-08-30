#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByCompareVariableFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1B0B92744B97A9C7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15CF9DB0)
#define CLASS_3_1B0B92744B97A9C7__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF9D80)

inline static constexpr unsigned int Class_3_1B0B92744B97A9C7_TypeDefinitionIndex = 52469;

class Class_3_1B0B92744B97A9C7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByCompareVariableFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByCompareVariableFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByCompareVariableFloat*))((::PBYTE)hIl2Cpp + CLASS_3_1B0B92744B97A9C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1B0B92744B97A9C7_EVALUATE_OFFSET))(this);
	}
};
