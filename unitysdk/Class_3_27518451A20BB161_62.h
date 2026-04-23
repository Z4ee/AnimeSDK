#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DF394A5C9A0CC5DF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E21570)
#define CLASS_3_27518451A20BB161_62__CTOR_OFFSET UNITYSDK_OFFSET(0x9E21540)

inline static constexpr unsigned int Class_3_27518451A20BB161_62_TypeDefinitionIndex = 49150;

class Class_3_27518451A20BB161_62 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DF394A5C9A0CC5DF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DF394A5C9A0CC5DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DF394A5C9A0CC5DF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_62_ONTASKBEGIN_OFFSET))(this);
	}
};
