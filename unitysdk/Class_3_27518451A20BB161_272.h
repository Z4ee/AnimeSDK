#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BB620C4A1DC7FE3E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_272_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157B7B00)
#define CLASS_3_27518451A20BB161_272__CTOR_OFFSET UNITYSDK_OFFSET(0x157B7AD0)

inline static constexpr unsigned int Class_3_27518451A20BB161_272_TypeDefinitionIndex = 55780;

class Class_3_27518451A20BB161_272 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BB620C4A1DC7FE3E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BB620C4A1DC7FE3E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BB620C4A1DC7FE3E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_272__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_272_ONTASKBEGIN_OFFSET))(this);
	}
};
