#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D418FEF99703638E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_201_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE842690)
#define CLASS_3_27518451A20BB161_201__CTOR_OFFSET UNITYSDK_OFFSET(0xE842660)

inline static constexpr unsigned int Class_3_27518451A20BB161_201_TypeDefinitionIndex = 55133;

class Class_3_27518451A20BB161_201 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D418FEF99703638E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D418FEF99703638E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D418FEF99703638E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_201__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_201_ONTASKBEGIN_OFFSET))(this);
	}
};
