#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_36DFE95147B6A27A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_268_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DC9750)
#define CLASS_3_27518451A20BB161_268__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC9720)

inline static constexpr unsigned int Class_3_27518451A20BB161_268_TypeDefinitionIndex = 56584;

class Class_3_27518451A20BB161_268 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_36DFE95147B6A27A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_36DFE95147B6A27A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_36DFE95147B6A27A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_268__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_268_ONTASKBEGIN_OFFSET))(this);
	}
};
