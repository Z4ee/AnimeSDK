#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class ConvinceWaitTurnBegin; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_19DE361963C2029A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DAD1A0)
#define CLASS_2_19DE361963C2029A_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18DAD8E0)
#define CLASS_2_19DE361963C2029A_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x18DAD090)
#define CLASS_2_19DE361963C2029A_METHOD_2_8DA3B55C33C4DEBB_OFFSET UNITYSDK_OFFSET(0x18DAD540)
#define CLASS_2_19DE361963C2029A_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18DAD350)
#define CLASS_2_19DE361963C2029A_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x18DAD730)
#define CLASS_2_19DE361963C2029A_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x18DAD1F0)
#define CLASS_2_19DE361963C2029A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DAD2F0)
#define CLASS_2_19DE361963C2029A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DAD440)
#define CLASS_2_19DE361963C2029A_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x18DAD4F0)
#define CLASS_2_19DE361963C2029A_TICK_OFFSET UNITYSDK_OFFSET(0x18DAD490)
#define CLASS_2_19DE361963C2029A__CTOR_OFFSET UNITYSDK_OFFSET(0x18DACFB0)

inline static constexpr unsigned int Class_2_19DE361963C2029A_TypeDefinitionIndex = 50328;

class Class_2_19DE361963C2029A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ConvinceWaitTurnBegin* Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x30
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

	::System::Void Method_2_8DA3B55C33C4DEBB(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_8DA3B55C33C4DEBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_2_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_C982C8295D29DA97_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19DE361963C2029A_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}
};
