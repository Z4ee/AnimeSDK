#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A30FF5617493A78A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A0A1B0)
#define CLASS_3_27518451A20BB161_69__CTOR_OFFSET UNITYSDK_OFFSET(0x8A0A180)

inline static constexpr unsigned int Class_3_27518451A20BB161_69_TypeDefinitionIndex = 44203;

class Class_3_27518451A20BB161_69 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A30FF5617493A78A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A30FF5617493A78A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A30FF5617493A78A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET))(this);
	}
};
