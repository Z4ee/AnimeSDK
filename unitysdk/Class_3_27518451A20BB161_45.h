#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_420FC7D8AE78CF6B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_45_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18856F20)
#define CLASS_3_27518451A20BB161_45__CTOR_OFFSET UNITYSDK_OFFSET(0x18856EF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_45_TypeDefinitionIndex = 53118;

class Class_3_27518451A20BB161_45 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_420FC7D8AE78CF6B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_420FC7D8AE78CF6B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_420FC7D8AE78CF6B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_45__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_45_ONTASKBEGIN_OFFSET))(this);
	}
};
