#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_205166CE28B97AB7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D5A570)
#define CLASS_3_27518451A20BB161_105__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5A540)

inline static constexpr unsigned int Class_3_27518451A20BB161_105_TypeDefinitionIndex = 50926;

class Class_3_27518451A20BB161_105 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_205166CE28B97AB7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_205166CE28B97AB7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_205166CE28B97AB7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105_ONTASKBEGIN_OFFSET))(this);
	}
};
