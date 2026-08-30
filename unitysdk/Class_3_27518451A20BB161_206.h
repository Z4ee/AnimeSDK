#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C6F51BBF3F52709A_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_206_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15846080)
#define CLASS_3_27518451A20BB161_206__CTOR_OFFSET UNITYSDK_OFFSET(0x15846050)

inline static constexpr unsigned int Class_3_27518451A20BB161_206_TypeDefinitionIndex = 55450;

class Class_3_27518451A20BB161_206 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C6F51BBF3F52709A_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C6F51BBF3F52709A_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C6F51BBF3F52709A_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_206__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_206_ONTASKBEGIN_OFFSET))(this);
	}
};
