#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_9846D5C553A9930F_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EE18388F80792C67_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF057C0)
#define CLASS_2_EE18388F80792C67_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xAF05F90)
#define CLASS_2_EE18388F80792C67_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAF05EF0)
#define CLASS_2_EE18388F80792C67_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xAF06060)
#define CLASS_2_EE18388F80792C67_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAF05D90)
#define CLASS_2_EE18388F80792C67_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF05860)
#define CLASS_2_EE18388F80792C67_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF05AC0)
#define CLASS_2_EE18388F80792C67_TICK_OFFSET UNITYSDK_OFFSET(0xAF05E10)
#define CLASS_2_EE18388F80792C67__CTOR_OFFSET UNITYSDK_OFFSET(0xAF056C0)

inline static constexpr unsigned int Class_2_EE18388F80792C67_TypeDefinitionIndex = 49386;

class Class_2_EE18388F80792C67 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_9846D5C553A9930F_3* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9846D5C553A9930F_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9846D5C553A9930F_3*))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE18388F80792C67_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}
};
