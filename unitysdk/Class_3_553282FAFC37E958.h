#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class ST_ByContainAbnormalState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_553282FAFC37E958_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA5A21E0)
#define CLASS_3_553282FAFC37E958__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A2180)

inline static constexpr unsigned int Class_3_553282FAFC37E958_TypeDefinitionIndex = 48798;

class Class_3_553282FAFC37E958 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByContainAbnormalState*>
{
public:
	::Class_2_F1C3EBA366E084A2* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + CLASS_3_553282FAFC37E958__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_553282FAFC37E958_EVALUATE_OFFSET))(this);
	}
};
