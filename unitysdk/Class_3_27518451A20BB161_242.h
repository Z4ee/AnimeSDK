#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_EF56094F6F872DBC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_242_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BD36F0)
#define CLASS_3_27518451A20BB161_242__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD36C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_242_TypeDefinitionIndex = 53367;

class Class_3_27518451A20BB161_242 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EF56094F6F872DBC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EF56094F6F872DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EF56094F6F872DBC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_242__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_242_ONTASKBEGIN_OFFSET))(this);
	}
};
