#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EF56094F6F872DBC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_260_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC523E40)
#define CLASS_3_27518451A20BB161_260__CTOR_OFFSET UNITYSDK_OFFSET(0xC523E10)

inline static constexpr unsigned int Class_3_27518451A20BB161_260_TypeDefinitionIndex = 56081;

class Class_3_27518451A20BB161_260 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EF56094F6F872DBC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EF56094F6F872DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EF56094F6F872DBC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_260__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_260_ONTASKBEGIN_OFFSET))(this);
	}
};
