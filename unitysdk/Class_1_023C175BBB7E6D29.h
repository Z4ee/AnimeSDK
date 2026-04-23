#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E38D48D6A33D0614;

#define CLASS_1_023C175BBB7E6D29_ENTER_OFFSET UNITYSDK_OFFSET(0x17C12E90)
#define CLASS_1_023C175BBB7E6D29_EXIT_OFFSET UNITYSDK_OFFSET(0x17C13070)
#define CLASS_1_023C175BBB7E6D29_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x17C13180)
#define CLASS_1_023C175BBB7E6D29_GET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x17C13160)
#define CLASS_1_023C175BBB7E6D29_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17C131A0)
#define CLASS_1_023C175BBB7E6D29_GET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C13140)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_24A73C81088299F7_OFFSET UNITYSDK_OFFSET(0x17C130B0)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x17C12F30)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_E146CE61ABF70C1C_OFFSET UNITYSDK_OFFSET(0x17BFC4A0)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x17C13020)
#define CLASS_1_023C175BBB7E6D29_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17BFC600)
#define CLASS_1_023C175BBB7E6D29_SET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x17C13190)
#define CLASS_1_023C175BBB7E6D29_SET_DURATIONMS_OFFSET UNITYSDK_OFFSET(0x17C13170)
#define CLASS_1_023C175BBB7E6D29_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17C131B0)
#define CLASS_1_023C175BBB7E6D29_SET_STATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x17C13150)
#define CLASS_1_023C175BBB7E6D29_TICK_OFFSET UNITYSDK_OFFSET(0x17BFC6A0)
#define CLASS_1_023C175BBB7E6D29__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFC280)

inline static constexpr unsigned int Class_1_023C175BBB7E6D29_TypeDefinitionIndex = 34728;

class Class_1_023C175BBB7E6D29 : public ::System::Object
{
public:
	::System::UInt64 _StateStartTimeStamp_k__BackingField; // 0x10
	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType _CurState_k__BackingField; // 0x18
	::System::Boolean _NeedBroadcastLevelStateChange_k__BackingField; // 0x1C
	::System::UInt64 _DurationMs_k__BackingField; // 0x20

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

	::System::Void set_StateStartTimeStamp(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_STATESTARTTIMESTAMP_OFFSET))(this, value);
	}

	::System::UInt64 get_DurationMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_DURATIONMS_OFFSET))(this);
	}

	::System::Void set_DurationMs(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_DURATIONMS_OFFSET))(this, value);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType get_CurState()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_CURSTATE_OFFSET))(this);
	}

	::System::Void set_CurState(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_CURSTATE_OFFSET))(this, value);
	}

	::System::Boolean get_NeedBroadcastLevelStateChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_GET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET))(this);
	}

	::System::Void set_NeedBroadcastLevelStateChange(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_023C175BBB7E6D29_SET_NEEDBROADCASTLEVELSTATECHANGE_OFFSET))(this, value);
	}
};
