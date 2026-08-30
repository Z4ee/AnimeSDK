#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByCompareVariableString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5D7C0C6243183CBC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16260A70)
#define CLASS_3_5D7C0C6243183CBC__CTOR_OFFSET UNITYSDK_OFFSET(0x16260A40)

inline static constexpr unsigned int Class_3_5D7C0C6243183CBC_TypeDefinitionIndex = 52470;

class Class_3_5D7C0C6243183CBC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByCompareVariableString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByCompareVariableString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByCompareVariableString*))((::PBYTE)hIl2Cpp + CLASS_3_5D7C0C6243183CBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D7C0C6243183CBC_EVALUATE_OFFSET))(this);
	}
};
