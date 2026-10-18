#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EF56094F6F872DBC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_275_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC49CE60)
#define CLASS_3_27518451A20BB161_275__CTOR_OFFSET UNITYSDK_OFFSET(0xC49CE30)

inline static constexpr unsigned int Class_3_27518451A20BB161_275_TypeDefinitionIndex = 55893;

class Class_3_27518451A20BB161_275 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EF56094F6F872DBC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EF56094F6F872DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EF56094F6F872DBC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_275__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_275_ONTASKBEGIN_OFFSET))(this);
	}
};
