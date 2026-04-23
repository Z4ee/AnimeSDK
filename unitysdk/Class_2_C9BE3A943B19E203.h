#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_705B862E649BF345;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimEvent; }

#define CLASS_2_C9BE3A943B19E203_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96EBB60)
#define CLASS_2_C9BE3A943B19E203_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x96EC540)
#define CLASS_2_C9BE3A943B19E203_METHOD_2_5021D4F5CE511BA1_OFFSET UNITYSDK_OFFSET(0x96EBDA0)
#define CLASS_2_C9BE3A943B19E203_ONSKIP_OFFSET UNITYSDK_OFFSET(0x96EC550)
#define CLASS_2_C9BE3A943B19E203_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96EBBB0)
#define CLASS_2_C9BE3A943B19E203_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96EC480)
#define CLASS_2_C9BE3A943B19E203_TICK_OFFSET UNITYSDK_OFFSET(0x96EC4D0)
#define CLASS_2_C9BE3A943B19E203__CTOR_OFFSET UNITYSDK_OFFSET(0x96EBB10)

inline static constexpr unsigned int Class_2_C9BE3A943B19E203_TypeDefinitionIndex = 51455;

class Class_2_C9BE3A943B19E203 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_3; // 0x18
	::Class_2_705B862E649BF345* Field_2_4; // 0x20
	::RPG::GameCore::WaitAnimEvent* Field_2_0; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::System::Int32 Field_2_6; // 0x38
	::System::Int32 Field_2_2; // 0x3C
	::System::Int32 Field_2_5; // 0x40
	::System::Single Field_2_7; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimEvent*))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5021D4F5CE511BA1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_METHOD_2_5021D4F5CE511BA1_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9BE3A943B19E203_ONSKIP_OFFSET))(this);
	}
};
