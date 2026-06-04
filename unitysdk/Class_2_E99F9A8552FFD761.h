#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_504;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimState; }

#define CLASS_2_E99F9A8552FFD761_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1413E3F0)
#define CLASS_2_E99F9A8552FFD761_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1413F280)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_650D5DFF2A4275E6_OFFSET UNITYSDK_OFFSET(0x1413E9E0)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_90C913060817A115_OFFSET UNITYSDK_OFFSET(0x1413E6B0)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_B82A6C005D3ADCE3_OFFSET UNITYSDK_OFFSET(0x1413E880)
#define CLASS_2_E99F9A8552FFD761_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1413F290)
#define CLASS_2_E99F9A8552FFD761_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1413E430)
#define CLASS_2_E99F9A8552FFD761_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1413EC10)
#define CLASS_2_E99F9A8552FFD761_TICK_OFFSET UNITYSDK_OFFSET(0x1413EC60)
#define CLASS_2_E99F9A8552FFD761__CTOR_OFFSET UNITYSDK_OFFSET(0x1413E350)

inline static constexpr unsigned int Class_2_E99F9A8552FFD761_TypeDefinitionIndex = 52124;

class Class_2_E99F9A8552FFD761 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_504* Field_2_1; // 0x20
	::RPG::GameCore::WaitAnimState* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::Int32 Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x40

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

	::System::Boolean Method_2_B82A6C005D3ADCE3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_B82A6C005D3ADCE3_OFFSET))(this);
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
