#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7863F47A18E8B333;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_207_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF221090)
#define CLASS_3_27518451A20BB161_207__CTOR_OFFSET UNITYSDK_OFFSET(0xF221060)

inline static constexpr unsigned int Class_3_27518451A20BB161_207_TypeDefinitionIndex = 55212;

class Class_3_27518451A20BB161_207 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7863F47A18E8B333*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7863F47A18E8B333* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7863F47A18E8B333*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_207__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_207_ONTASKBEGIN_OFFSET))(this);
	}
};
