#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9FCA7B1BEE77D5BD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170B0A50)
#define CLASS_3_27518451A20BB161_147__CTOR_OFFSET UNITYSDK_OFFSET(0x170B0A20)

inline static constexpr unsigned int Class_3_27518451A20BB161_147_TypeDefinitionIndex = 52312;

class Class_3_27518451A20BB161_147 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9FCA7B1BEE77D5BD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9FCA7B1BEE77D5BD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9FCA7B1BEE77D5BD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_147_ONTASKBEGIN_OFFSET))(this);
	}
};
