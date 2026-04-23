#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_2D512E916C716041_9;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD3B2250)
#define CLASS_3_27518451A20BB161_8__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B2220)

inline static constexpr unsigned int Class_3_27518451A20BB161_8_TypeDefinitionIndex = 48719;

class Class_3_27518451A20BB161_8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_2D512E916C716041_9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET))(this);
	}
};
