#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_183_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9555830)
#define CLASS_3_27518451A20BB161_183__CTOR_OFFSET UNITYSDK_OFFSET(0x9555800)

inline static constexpr unsigned int Class_3_27518451A20BB161_183_TypeDefinitionIndex = 54048;

class Class_3_27518451A20BB161_183 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_183__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_183_ONTASKBEGIN_OFFSET))(this);
	}
};
