#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class ST_ByContainAbnormalState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0A1D30AACBBBD852_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17E5BC30)
#define CLASS_3_0A1D30AACBBBD852__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5BB70)

inline static constexpr unsigned int Class_3_0A1D30AACBBBD852_TypeDefinitionIndex = 52471;

class Class_3_0A1D30AACBBBD852 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByContainAbnormalState*>
{
public:
	::Class_2_F1C3EBA366E084A2* BBGDGPNAAJM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + CLASS_3_0A1D30AACBBBD852__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A1D30AACBBBD852_EVALUATE_OFFSET))(this);
	}
};
