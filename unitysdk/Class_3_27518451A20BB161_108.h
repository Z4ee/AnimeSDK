#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_74D5EB3594B4D5CE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_108_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A1C4D0)
#define CLASS_3_27518451A20BB161_108__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1C4A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_108_TypeDefinitionIndex = 53597;

class Class_3_27518451A20BB161_108 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_74D5EB3594B4D5CE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_74D5EB3594B4D5CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_74D5EB3594B4D5CE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108_ONTASKBEGIN_OFFSET))(this);
	}
};
