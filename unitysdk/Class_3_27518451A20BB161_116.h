#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5CED17EAC028FA1E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_116_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF53350)
#define CLASS_3_27518451A20BB161_116__CTOR_OFFSET UNITYSDK_OFFSET(0xBF53320)

inline static constexpr unsigned int Class_3_27518451A20BB161_116_TypeDefinitionIndex = 51343;

class Class_3_27518451A20BB161_116 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5CED17EAC028FA1E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5CED17EAC028FA1E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5CED17EAC028FA1E*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_116_ONTASKBEGIN_OFFSET))(this);
	}
};
