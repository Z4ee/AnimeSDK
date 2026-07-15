#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A40833FE408673C3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1837AC70)
#define CLASS_3_27518451A20BB161_40__CTOR_OFFSET UNITYSDK_OFFSET(0x1837AC40)

inline static constexpr unsigned int Class_3_27518451A20BB161_40_TypeDefinitionIndex = 50449;

class Class_3_27518451A20BB161_40 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A40833FE408673C3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A40833FE408673C3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A40833FE408673C3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_40_ONTASKBEGIN_OFFSET))(this);
	}
};
