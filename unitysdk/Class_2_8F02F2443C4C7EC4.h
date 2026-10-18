#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_ED5B635C4D775055;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNPCAttack; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F02F2443C4C7EC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E02840)
#define CLASS_2_8F02F2443C4C7EC4_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x15E028F0)
#define CLASS_2_8F02F2443C4C7EC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E02880)
#define CLASS_2_8F02F2443C4C7EC4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E02BD0)
#define CLASS_2_8F02F2443C4C7EC4_TICK_OFFSET UNITYSDK_OFFSET(0x15E02C30)
#define CLASS_2_8F02F2443C4C7EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x15E02560)

inline static constexpr unsigned int Class_2_8F02F2443C4C7EC4_TypeDefinitionIndex = 52400;

class Class_2_8F02F2443C4C7EC4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x18
	::Class_2_ED5B635C4D775055* DIFOMCDONEO; // 0x20
	::RPG::GameCore::AdventureCharacterController* GGMECPDBABM; // 0x28
	::RPG::GameCore::AdvNPCAttack* IGHAHBNLIJA; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::Class_2_F67FF7EB526BF85C* CHAOCFGKDAP; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCAttack*))((::PBYTE)hIl2Cpp + CLASS_2_8F02F2443C4C7EC4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F02F2443C4C7EC4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F02F2443C4C7EC4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F02F2443C4C7EC4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F02F2443C4C7EC4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F02F2443C4C7EC4_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}
};
