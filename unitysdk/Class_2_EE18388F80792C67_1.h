#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_9846D5C553A9930F_4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EE18388F80792C67_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1456ED10)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1456F510)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x1456F680)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x1456F5B0)
#define CLASS_2_EE18388F80792C67_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1456F3B0)
#define CLASS_2_EE18388F80792C67_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1456EE80)
#define CLASS_2_EE18388F80792C67_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1456F0E0)
#define CLASS_2_EE18388F80792C67_1_TICK_OFFSET UNITYSDK_OFFSET(0x1456F430)
#define CLASS_2_EE18388F80792C67_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1456EC10)

inline static constexpr unsigned int Class_2_EE18388F80792C67_1_TypeDefinitionIndex = 50442;

class Class_2_EE18388F80792C67_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_9846D5C553A9930F_4* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9846D5C553A9930F_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9846D5C553A9930F_4*))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_1_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}
};
