#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class ST_ByHasAbnormalState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5D0EFCDB33202B0B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16597690)
#define CLASS_3_5D0EFCDB33202B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x165975D0)

inline static constexpr unsigned int Class_3_5D0EFCDB33202B0B_TypeDefinitionIndex = 49819;

class Class_3_5D0EFCDB33202B0B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasAbnormalState*>
{
public:
	::Class_2_F1C3EBA366E084A2* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + CLASS_3_5D0EFCDB33202B0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D0EFCDB33202B0B_EVALUATE_OFFSET))(this);
	}
};
