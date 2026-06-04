#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B149D78EA99870E2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139A8010)
#define CLASS_3_27518451A20BB161_88__CTOR_OFFSET UNITYSDK_OFFSET(0x139A7FE0)

inline static constexpr unsigned int Class_3_27518451A20BB161_88_TypeDefinitionIndex = 50326;

class Class_3_27518451A20BB161_88 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B149D78EA99870E2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B149D78EA99870E2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B149D78EA99870E2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_88_ONTASKBEGIN_OFFSET))(this);
	}
};
