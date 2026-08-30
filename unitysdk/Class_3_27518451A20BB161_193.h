#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D418FEF99703638E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_193_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1896F160)
#define CLASS_3_27518451A20BB161_193__CTOR_OFFSET UNITYSDK_OFFSET(0x1896F130)

inline static constexpr unsigned int Class_3_27518451A20BB161_193_TypeDefinitionIndex = 55336;

class Class_3_27518451A20BB161_193 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D418FEF99703638E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D418FEF99703638E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D418FEF99703638E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_193_ONTASKBEGIN_OFFSET))(this);
	}
};
