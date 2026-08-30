#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"

class Class_1_3440222A86BF3335;
namespace System { class Action; }

#define CLASS_1_AEF88F1677ADBBD5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4BFF50)
#define CLASS_1_AEF88F1677ADBBD5_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1C4BFF30)
#define CLASS_1_AEF88F1677ADBBD5_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1C4C0000)
#define CLASS_1_AEF88F1677ADBBD5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C4C0070)
#define CLASS_1_AEF88F1677ADBBD5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C4C00F0)
#define CLASS_1_AEF88F1677ADBBD5_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1C4BFF40)
#define CLASS_1_AEF88F1677ADBBD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C0130)

inline static constexpr unsigned int Class_1_AEF88F1677ADBBD5_TypeDefinitionIndex = 41737;

class Class_1_AEF88F1677ADBBD5 : public ::System::Object
{
public:
	::System::Action* LPGBHJJJKNC; // 0x10
	::Class_1_3440222A86BF3335* ODHOCPBPLAE; // 0x18
	::System::Action* PLGEEKEHNLO; // 0x20
	::System::Action* BCPKEHAFHOD; // 0x28
	::Class_1_3440222A86BF3335* JCGEIGKMNLG; // 0x30
	::System::Int32 OGOADCDDCIG; // 0x38
	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _State_k__BackingField; // 0x3C
	::System::Single MBADFFFNNMM; // 0x40
	::System::UInt32 BINLDMPJODO; // 0x44
	::System::Single KGGFPPPCKAI; // 0x48
	::System::Int32 ABONMEPJHKO; // 0x4C

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
