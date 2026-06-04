#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9565176D7D83D290;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_37_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144EABB0)
#define CLASS_3_27518451A20BB161_37__CTOR_OFFSET UNITYSDK_OFFSET(0x144EAB80)

inline static constexpr unsigned int Class_3_27518451A20BB161_37_TypeDefinitionIndex = 49425;

class Class_3_27518451A20BB161_37 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9565176D7D83D290*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9565176D7D83D290* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9565176D7D83D290*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_37__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_37_ONTASKBEGIN_OFFSET))(this);
	}
};
