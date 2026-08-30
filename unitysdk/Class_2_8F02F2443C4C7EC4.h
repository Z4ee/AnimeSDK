#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A0580152EB393340;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNPCAttack; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8F02F2443C4C7EC4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DF0AA0)
#define CLASS_2_8F02F2443C4C7EC4_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x18DF0B50)
#define CLASS_2_8F02F2443C4C7EC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DF0AE0)
#define CLASS_2_8F02F2443C4C7EC4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DF0E30)
#define CLASS_2_8F02F2443C4C7EC4_TICK_OFFSET UNITYSDK_OFFSET(0x18DF0E90)
#define CLASS_2_8F02F2443C4C7EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF07C0)

inline static constexpr unsigned int Class_2_8F02F2443C4C7EC4_TypeDefinitionIndex = 52675;

class Class_2_8F02F2443C4C7EC4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* GGMECPDBABM; // 0x18
	::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_2_F67FF7EB526BF85C* CHAOCFGKDAP; // 0x30
	::Class_2_A0580152EB393340* DIFOMCDONEO; // 0x38
	::RPG::GameCore::AdvNPCAttack* IGHAHBNLIJA; // 0x40

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
