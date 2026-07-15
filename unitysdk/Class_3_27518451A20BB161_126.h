#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_17B95EC4AA1CE2AE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183E0120)
#define CLASS_3_27518451A20BB161_126__CTOR_OFFSET UNITYSDK_OFFSET(0x183E00F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_126_TypeDefinitionIndex = 51408;

class Class_3_27518451A20BB161_126 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_17B95EC4AA1CE2AE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_17B95EC4AA1CE2AE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_17B95EC4AA1CE2AE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_126_ONTASKBEGIN_OFFSET))(this);
	}
};
