#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_1_023C175BBB7E6D29_ENTER_OFFSET UNITYSDK_OFFSET(0x1C136F00)
#define CLASS_1_023C175BBB7E6D29_EXIT_OFFSET UNITYSDK_OFFSET(0x1C137250)
#define CLASS_1_023C175BBB7E6D29_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C137470)
#define CLASS_1_023C175BBB7E6D29_GET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C137450)
#define CLASS_1_023C175BBB7E6D29_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C137490)
#define CLASS_1_023C175BBB7E6D29_GET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C137430)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_24A73C81088299F7_OFFSET UNITYSDK_OFFSET(0x1C1373A0)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x1C137070)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_E146CE61ABF70C1C_OFFSET UNITYSDK_OFFSET(0x1C137290)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x1C1371B0)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1C137160)
#define CLASS_1_023C175BBB7E6D29_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C137480)
#define CLASS_1_023C175BBB7E6D29_SET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x1C137460)
#define CLASS_1_023C175BBB7E6D29_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1C1374A0)
#define CLASS_1_023C175BBB7E6D29_SET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C137440)
#define CLASS_1_023C175BBB7E6D29_TICK_OFFSET UNITYSDK_OFFSET(0x1C137200)
#define CLASS_1_023C175BBB7E6D29__CTOR_OFFSET UNITYSDK_OFFSET(0x1C136EF0)

inline static constexpr unsigned int Class_1_023C175BBB7E6D29_TypeDefinitionIndex = 36654;

class Class_1_023C175BBB7E6D29 : public ::System::Object
{
public:
	::System::UInt64 _DurationMs_k__BackingField; // 0x10
	::System::UInt64 _StateStartTimeStamp_k__BackingField; // 0x18
	::System::Boolean _NeedBroadcastLevelStateChange_k__BackingField; // 0x20
	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType _CurState_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_ENTER_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_EXIT_OFFSET))(this);
	}

	::System::Boolean Method_1_E146CE61ABF70C1C(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_METHOD_1_E146CE61ABF70C1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_E38D48D6A33D0614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_24A73C81088299F7(::Class_1_E38D48D6A33D0614* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E38D48D6A33D0614*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_METHOD_1_24A73C81088299F7_OFFSET))(this, a1, a2);
	}

	::System::UInt64 get_StateStartTimeStamp()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_STATESTARTTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_StateStartTimeStamp(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_STATESTARTTIMESTAMP_OFFSET))(this, a1);
	}

	::System::UInt64 get_DurationMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_DURATIONMS_OFFSET))(this);
	}

	::System::Void set_DurationMs(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_DURATIONMS_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType get_CurState()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_CURSTATE_OFFSET))(this);
	}

	::System::Void set_CurState(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_CURSTATE_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedBroadcastLevelStateChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET))(this);
	}

	::System::Void set_NeedBroadcastLevelStateChange(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET))(this, a1);
	}
};
