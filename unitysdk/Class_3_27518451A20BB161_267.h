#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_11F2FCB246A27F6A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_267_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB5C80)
#define CLASS_3_27518451A20BB161_267__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB5C50)

inline static constexpr unsigned int Class_3_27518451A20BB161_267_TypeDefinitionIndex = 55712;

class Class_3_27518451A20BB161_267 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_11F2FCB246A27F6A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_11F2FCB246A27F6A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_11F2FCB246A27F6A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_267__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_267_ONTASKBEGIN_OFFSET))(this);
	}
};
