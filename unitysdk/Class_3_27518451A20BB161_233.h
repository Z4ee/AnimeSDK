#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CA1429BC44D2F90F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_233_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184E2D70)
#define CLASS_3_27518451A20BB161_233__CTOR_OFFSET UNITYSDK_OFFSET(0x184E2D40)

inline static constexpr unsigned int Class_3_27518451A20BB161_233_TypeDefinitionIndex = 55758;

class Class_3_27518451A20BB161_233 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CA1429BC44D2F90F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CA1429BC44D2F90F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CA1429BC44D2F90F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_233__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_233_ONTASKBEGIN_OFFSET))(this);
	}
};
