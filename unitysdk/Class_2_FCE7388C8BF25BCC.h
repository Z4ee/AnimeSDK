#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_ED5B635C4D775055;
namespace RPG::GameCore { class AdvNPCUseMazeSkill; }
namespace RPG::GameCore { class AdventureSkillCharacterComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FCE7388C8BF25BCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D2EAF0)
#define CLASS_2_FCE7388C8BF25BCC_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15D2EC20)
#define CLASS_2_FCE7388C8BF25BCC_METHOD_2_CC2FBC3BD9171E9F_1_OFFSET UNITYSDK_OFFSET(0x15D2F390)
#define CLASS_2_FCE7388C8BF25BCC_METHOD_2_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x15D2F160)
#define CLASS_2_FCE7388C8BF25BCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D2EB40)
#define CLASS_2_FCE7388C8BF25BCC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D2F0A0)
#define CLASS_2_FCE7388C8BF25BCC_TICK_OFFSET UNITYSDK_OFFSET(0x15D2F100)
#define CLASS_2_FCE7388C8BF25BCC__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2E8D0)

inline static constexpr unsigned int Class_2_FCE7388C8BF25BCC_TypeDefinitionIndex = 52446;

class Class_2_FCE7388C8BF25BCC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x18
	::RPG::GameCore::AdvNPCUseMazeSkill* IGHAHBNLIJA; // 0x20
	::Class_2_ED5B635C4D775055* DIFOMCDONEO; // 0x28
	::RPG::GameCore::AdventureSkillCharacterComponent* KKANBKCEJEF; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Int32 CNFFDNNAPFJ; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCUseMazeSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCUseMazeSkill*))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_METHOD_2_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC2FBC3BD9171E9F_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FCE7388C8BF25BCC_METHOD_2_CC2FBC3BD9171E9F_1_OFFSET))(this, a1);
	}
};
