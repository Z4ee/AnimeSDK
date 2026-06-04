#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A30FF5617493A78A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_132_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B25EF0)
#define CLASS_3_27518451A20BB161_132__CTOR_OFFSET UNITYSDK_OFFSET(0x13B25EC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_132_TypeDefinitionIndex = 51580;

class Class_3_27518451A20BB161_132 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A30FF5617493A78A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A30FF5617493A78A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A30FF5617493A78A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_132__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_132_ONTASKBEGIN_OFFSET))(this);
	}
};
