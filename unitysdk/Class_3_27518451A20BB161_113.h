#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5ABA18BB3DF738C4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_113_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15942560)
#define CLASS_3_27518451A20BB161_113__CTOR_OFFSET UNITYSDK_OFFSET(0x15942530)

inline static constexpr unsigned int Class_3_27518451A20BB161_113_TypeDefinitionIndex = 53608;

class Class_3_27518451A20BB161_113 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5ABA18BB3DF738C4*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5ABA18BB3DF738C4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5ABA18BB3DF738C4*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_113__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_113_ONTASKBEGIN_OFFSET))(this);
	}
};
