#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B43B498E0C4072D3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_114_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90CF280)
#define CLASS_3_27518451A20BB161_114__CTOR_OFFSET UNITYSDK_OFFSET(0x90CF250)

inline static constexpr unsigned int Class_3_27518451A20BB161_114_TypeDefinitionIndex = 50687;

class Class_3_27518451A20BB161_114 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B43B498E0C4072D3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B43B498E0C4072D3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B43B498E0C4072D3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114_ONTASKBEGIN_OFFSET))(this);
	}
};
