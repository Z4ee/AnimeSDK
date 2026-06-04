#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_AC77597D4FE9B922;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_81_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13684370)
#define CLASS_3_27518451A20BB161_81__CTOR_OFFSET UNITYSDK_OFFSET(0x13684340)

inline static constexpr unsigned int Class_3_27518451A20BB161_81_TypeDefinitionIndex = 50310;

class Class_3_27518451A20BB161_81 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AC77597D4FE9B922*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AC77597D4FE9B922* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AC77597D4FE9B922*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_81__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_81_ONTASKBEGIN_OFFSET))(this);
	}
};
