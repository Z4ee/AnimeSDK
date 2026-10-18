#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6DC87050B452B1A0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_131_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11940310)
#define CLASS_3_27518451A20BB161_131__CTOR_OFFSET UNITYSDK_OFFSET(0x119402E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_131_TypeDefinitionIndex = 53838;

class Class_3_27518451A20BB161_131 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6DC87050B452B1A0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6DC87050B452B1A0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6DC87050B452B1A0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_131__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_131_ONTASKBEGIN_OFFSET))(this);
	}
};
