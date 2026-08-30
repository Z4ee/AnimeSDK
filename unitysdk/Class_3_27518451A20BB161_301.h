#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_326AB3CF86F66189;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_301_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DD07A0)
#define CLASS_3_27518451A20BB161_301__CTOR_OFFSET UNITYSDK_OFFSET(0x16DD0770)

inline static constexpr unsigned int Class_3_27518451A20BB161_301_TypeDefinitionIndex = 58812;

class Class_3_27518451A20BB161_301 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_326AB3CF86F66189*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_326AB3CF86F66189* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_326AB3CF86F66189*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_301__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_301_ONTASKBEGIN_OFFSET))(this);
	}
};
