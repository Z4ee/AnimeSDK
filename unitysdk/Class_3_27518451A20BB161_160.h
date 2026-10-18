#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5B63E3356AACD6C5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_160_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C3DF0)
#define CLASS_3_27518451A20BB161_160__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C3DC0)

inline static constexpr unsigned int Class_3_27518451A20BB161_160_TypeDefinitionIndex = 54289;

class Class_3_27518451A20BB161_160 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5B63E3356AACD6C5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5B63E3356AACD6C5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5B63E3356AACD6C5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_160__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_160_ONTASKBEGIN_OFFSET))(this);
	}
};
