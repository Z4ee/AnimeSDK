#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B81E70C669D9EDB9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_190_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139D4940)
#define CLASS_3_27518451A20BB161_190__CTOR_OFFSET UNITYSDK_OFFSET(0x139D4910)

inline static constexpr unsigned int Class_3_27518451A20BB161_190_TypeDefinitionIndex = 54694;

class Class_3_27518451A20BB161_190 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B81E70C669D9EDB9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B81E70C669D9EDB9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B81E70C669D9EDB9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_190_ONTASKBEGIN_OFFSET))(this);
	}
};
