#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_196_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xABD8CF0)
#define CLASS_3_27518451A20BB161_196__CTOR_OFFSET UNITYSDK_OFFSET(0xABD8CC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_196_TypeDefinitionIndex = 54774;

class Class_3_27518451A20BB161_196 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_6*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_196__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_196_ONTASKBEGIN_OFFSET))(this);
	}
};
