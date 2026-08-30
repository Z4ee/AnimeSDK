#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_565;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimState; }

#define CLASS_2_E99F9A8552FFD761_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16056DB0)
#define CLASS_2_E99F9A8552FFD761_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16057F10)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_650D5DFF2A4275E6_OFFSET UNITYSDK_OFFSET(0x16057480)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_90C913060817A115_OFFSET UNITYSDK_OFFSET(0x160570D0)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_D8A221B7736187A2_OFFSET UNITYSDK_OFFSET(0x16057350)
#define CLASS_2_E99F9A8552FFD761_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16057F20)
#define CLASS_2_E99F9A8552FFD761_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16056DF0)
#define CLASS_2_E99F9A8552FFD761_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16057770)
#define CLASS_2_E99F9A8552FFD761_TICK_OFFSET UNITYSDK_OFFSET(0x160577D0)
#define CLASS_2_E99F9A8552FFD761__CTOR_OFFSET UNITYSDK_OFFSET(0x16056D10)

inline static constexpr unsigned int Class_2_E99F9A8552FFD761_TypeDefinitionIndex = 55995;

class Class_2_E99F9A8552FFD761 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::WaitAnimState* OFKGLJOAMLD; // 0x28
	::Class_0_16E4307DCC419505_565* LDHAGDIDMKB; // 0x30
	::System::Single NBBLMHBOFMJ; // 0x38
	::System::Boolean DBLKAJKFOFJ; // 0x3C
	::System::Int32 APNGJPMPMOB; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_ONSKIP_OFFSET))(this);
	}

	::System::Boolean Method_2_D8A221B7736187A2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_D8A221B7736187A2_OFFSET))(this);
	}

	::System::Boolean Method_2_650D5DFF2A4275E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_650D5DFF2A4275E6_OFFSET))(this);
	}

	::System::Boolean Method_2_90C913060817A115()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_90C913060817A115_OFFSET))(this);
	}
};
