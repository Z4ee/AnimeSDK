#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BE08264F8CDC94EB_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x906D820)
#define CLASS_3_27518451A20BB161_77__CTOR_OFFSET UNITYSDK_OFFSET(0x906D7F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_77_TypeDefinitionIndex = 49640;

class Class_3_27518451A20BB161_77 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BE08264F8CDC94EB_5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BE08264F8CDC94EB_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BE08264F8CDC94EB_5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_77_ONTASKBEGIN_OFFSET))(this);
	}
};
