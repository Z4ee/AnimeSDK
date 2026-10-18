#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_17B95EC4AA1CE2AE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_141_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A899A0)
#define CLASS_3_27518451A20BB161_141__CTOR_OFFSET UNITYSDK_OFFSET(0x15A89970)

inline static constexpr unsigned int Class_3_27518451A20BB161_141_TypeDefinitionIndex = 53878;

class Class_3_27518451A20BB161_141 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_17B95EC4AA1CE2AE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_17B95EC4AA1CE2AE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_17B95EC4AA1CE2AE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_141_ONTASKBEGIN_OFFSET))(this);
	}
};
