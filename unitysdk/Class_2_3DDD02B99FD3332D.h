#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_B7D8FCA21FE37AFD;
namespace RPG::GameCore { class LittleGameAbilityPixAirWaitSecond; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3DDD02B99FD3332D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14529F80)
#define CLASS_2_3DDD02B99FD3332D_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1452A3C0)
#define CLASS_2_3DDD02B99FD3332D_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1452A350)
#define CLASS_2_3DDD02B99FD3332D_METHOD_2_D6EE2EB5A2CB5688_OFFSET UNITYSDK_OFFSET(0x1452A070)
#define CLASS_2_3DDD02B99FD3332D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14529FC0)
#define CLASS_2_3DDD02B99FD3332D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1452A210)
#define CLASS_2_3DDD02B99FD3332D_TICK_OFFSET UNITYSDK_OFFSET(0x1452A270)
#define CLASS_2_3DDD02B99FD3332D__CTOR_OFFSET UNITYSDK_OFFSET(0x14529F70)

inline static constexpr unsigned int Class_2_3DDD02B99FD3332D_TypeDefinitionIndex = 55615;

class Class_2_3DDD02B99FD3332D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_B7D8FCA21FE37AFD* Field_2_0; // 0x18
	::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Boolean Field_2_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirWaitSecond*))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_GETCONFIG_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Class_1_B7D8FCA21FE37AFD* Method_2_D6EE2EB5A2CB5688()
	{
		return ((::Class_1_B7D8FCA21FE37AFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DDD02B99FD3332D_METHOD_2_D6EE2EB5A2CB5688_OFFSET))(this);
	}
};
