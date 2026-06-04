#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRelayFlameEventListener; }

#define CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14548A00)
#define CLASS_2_753B893C49AF40A3_METHOD_2_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0x14548D30)
#define CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x145488B0)
#define CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x145489B0)
#define CLASS_2_753B893C49AF40A3_TICK_OFFSET UNITYSDK_OFFSET(0x14549050)
#define CLASS_2_753B893C49AF40A3__CTOR_OFFSET UNITYSDK_OFFSET(0x14548170)

inline static constexpr unsigned int Class_2_753B893C49AF40A3_TypeDefinitionIndex = 49852;

class Class_2_753B893C49AF40A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_2_8; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_2_9; // 0x60
	::Class_3_07C3C4D2990C49EE* Field_2_10; // 0x68
	::RPG::GameCore::TimeRelayFlameEventListener* Field_2_11; // 0x70
	::Class_3_07C3C4D2990C49EE* Field_2_12; // 0x78
	::Class_3_07C3C4D2990C49EE* Field_2_13; // 0x80
	::Class_3_07C3C4D2990C49EE* Field_2_14; // 0x88
	::RPG::GameCore::TaskContext* Field_2_15; // 0x90
	::Class_3_07C3C4D2990C49EE* Field_2_16; // 0x98
	::Class_3_07C3C4D2990C49EE* Field_2_17; // 0xA0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRelayFlameEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRelayFlameEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3C846407474D7238(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_METHOD_2_3C846407474D7238_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_753B893C49AF40A3_TICK_OFFSET))(this, a1);
	}
};
