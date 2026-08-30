#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByGridFightCompareRoleExtInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5959613BA4E8CE1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157CA2E0)
#define CLASS_3_B5959613BA4E8CE1__CTOR_OFFSET UNITYSDK_OFFSET(0x157CA2B0)

inline static constexpr unsigned int Class_3_B5959613BA4E8CE1_TypeDefinitionIndex = 54818;

class Class_3_B5959613BA4E8CE1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByGridFightCompareRoleExtInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + CLASS_3_B5959613BA4E8CE1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5959613BA4E8CE1_EVALUATE_OFFSET))(this);
	}
};
