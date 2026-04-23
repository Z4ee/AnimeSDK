#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5DA6116C23909A49;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_108_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA55C7F0)
#define CLASS_3_27518451A20BB161_108__CTOR_OFFSET UNITYSDK_OFFSET(0xA55C7C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_108_TypeDefinitionIndex = 50620;

class Class_3_27518451A20BB161_108 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5DA6116C23909A49*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5DA6116C23909A49* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5DA6116C23909A49*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_108_ONTASKBEGIN_OFFSET))(this);
	}
};
