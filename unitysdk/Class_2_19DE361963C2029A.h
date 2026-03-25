#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ConvinceWaitTurnBegin; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_19DE361963C2029A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BB6310)
#define CLASS_2_19DE361963C2029A_METHOD_2_443A8FD387045C5D_OFFSET UNITYSDK_OFFSET(0x10BB66A0)
#define CLASS_2_19DE361963C2029A_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x10BB6210)
#define CLASS_2_19DE361963C2029A_METHOD_2_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x10BB67C0)
#define CLASS_2_19DE361963C2029A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10BB6960)
#define CLASS_2_19DE361963C2029A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10BB64B0)
#define CLASS_2_19DE361963C2029A_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10BB6360)
#define CLASS_2_19DE361963C2029A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BB6450)
#define CLASS_2_19DE361963C2029A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BB65A0)
#define CLASS_2_19DE361963C2029A_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x10BB6650)
#define CLASS_2_19DE361963C2029A_TICK_OFFSET UNITYSDK_OFFSET(0x10BB65F0)
#define CLASS_2_19DE361963C2029A__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB6130)

inline static constexpr unsigned int Class_2_19DE361963C2029A_TypeDefinitionIndex = 42669;

class Class_2_19DE361963C2029A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::ConvinceWaitTurnBegin* Field_2_0; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x39

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceWaitTurnBegin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceWaitTurnBegin*))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_TICK_OFFSET))(this, a1);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_443A8FD387045C5D(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_443A8FD387045C5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_2_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
