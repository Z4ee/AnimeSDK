#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTriggerTutorial; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_9B3142E07CB8E184_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109C2110)
#define CLASS_2_9B3142E07CB8E184_METHOD_2_2EF7D56E53BAAEE4_OFFSET UNITYSDK_OFFSET(0x109C2640)
#define CLASS_2_9B3142E07CB8E184_METHOD_2_3404203FEE918DE8_OFFSET UNITYSDK_OFFSET(0x109C2840)
#define CLASS_2_9B3142E07CB8E184_METHOD_2_8D2D48E3C789759D_OFFSET UNITYSDK_OFFSET(0x109C2B10)
#define CLASS_2_9B3142E07CB8E184_METHOD_2_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x109C27B0)
#define CLASS_2_9B3142E07CB8E184_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109C22B0)
#define CLASS_2_9B3142E07CB8E184_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x109C2350)
#define CLASS_2_9B3142E07CB8E184_TICK_OFFSET UNITYSDK_OFFSET(0x109C24A0)
#define CLASS_2_9B3142E07CB8E184__CTOR_OFFSET UNITYSDK_OFFSET(0x109C2100)

inline static constexpr unsigned int Class_2_9B3142E07CB8E184_TypeDefinitionIndex = 47601;

class Class_2_9B3142E07CB8E184 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_69FF5DE516C87A66* Field_2_4; // 0x20
	::RPG::GameCore::WaitTriggerTutorial* Field_2_1; // 0x28
	::System::Action_1<::System::Boolean>* Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_METHOD_2_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_3404203FEE918DE8(::System::Action* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_METHOD_2_3404203FEE918DE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D2D48E3C789759D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_METHOD_2_8D2D48E3C789759D_OFFSET))(this);
	}

	::System::Void Method_2_2EF7D56E53BAAEE4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9B3142E07CB8E184_METHOD_2_2EF7D56E53BAAEE4_OFFSET))(this, a1);
	}
};
