#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class ST_ByHasAbnormalState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_07EC2BE0F1954E1B_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA55850)
#define CLASS_3_07EC2BE0F1954E1B__CTOR_OFFSET UNITYSDK_OFFSET(0xAA557F0)

inline static constexpr unsigned int Class_3_07EC2BE0F1954E1B_TypeDefinitionIndex = 48806;

class Class_3_07EC2BE0F1954E1B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasAbnormalState*>
{
public:
	::Class_2_F1C3EBA366E084A2* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + CLASS_3_07EC2BE0F1954E1B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07EC2BE0F1954E1B_EVALUATE_OFFSET))(this);
	}
};
