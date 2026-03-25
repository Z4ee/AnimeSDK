#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8CCE4D6721C86CE0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_82_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C29720)
#define CLASS_3_27518451A20BB161_82__CTOR_OFFSET UNITYSDK_OFFSET(0x8C296F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_82_TypeDefinitionIndex = 44587;

class Class_3_27518451A20BB161_82 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8CCE4D6721C86CE0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8CCE4D6721C86CE0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8CCE4D6721C86CE0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_82__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_82_ONTASKBEGIN_OFFSET))(this);
	}
};
