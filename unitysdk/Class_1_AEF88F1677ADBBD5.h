#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"

class Class_1_3440222A86BF3335;
namespace System { class Action; }

#define CLASS_1_AEF88F1677ADBBD5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A909090)
#define CLASS_1_AEF88F1677ADBBD5_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A909070)
#define CLASS_1_AEF88F1677ADBBD5_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1A909130)
#define CLASS_1_AEF88F1677ADBBD5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A9091B0)
#define CLASS_1_AEF88F1677ADBBD5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A909230)
#define CLASS_1_AEF88F1677ADBBD5_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1A909080)
#define CLASS_1_AEF88F1677ADBBD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A909270)

inline static constexpr unsigned int Class_1_AEF88F1677ADBBD5_TypeDefinitionIndex = 40783;

class Class_1_AEF88F1677ADBBD5 : public ::System::Object
{
public:
	::Class_1_3440222A86BF3335* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::Class_1_3440222A86BF3335* Field_1_2; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Action* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::UInt32 Field_1_9; // 0x48
	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _State_k__BackingField; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState get_State()
	{
		return ((::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5_SET_STATE_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF88F1677ADBBD5_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
