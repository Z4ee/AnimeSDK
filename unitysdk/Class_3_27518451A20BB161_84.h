#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_968F3A4CB9788481;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA82F6E0)
#define CLASS_3_27518451A20BB161_84__CTOR_OFFSET UNITYSDK_OFFSET(0xA82F6B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_84_TypeDefinitionIndex = 50315;

class Class_3_27518451A20BB161_84 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_968F3A4CB9788481*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_968F3A4CB9788481* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_968F3A4CB9788481*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_84_ONTASKBEGIN_OFFSET))(this);
	}
};
