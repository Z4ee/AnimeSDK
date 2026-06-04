#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSkillInput; }
namespace System { class Object; }

#define CLASS_2_32A07595EE24E2DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA464CA0)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xA465720)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_3EA9C072A7A8B70A_OFFSET UNITYSDK_OFFSET(0xA4653C0)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA464D70)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA465030)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_D1B8EDD075FF9494_OFFSET UNITYSDK_OFFSET(0xA4659A0)
#define CLASS_2_32A07595EE24E2DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA464F80)
#define CLASS_2_32A07595EE24E2DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA465250)
#define CLASS_2_32A07595EE24E2DC_TICK_OFFSET UNITYSDK_OFFSET(0xA4652B0)
#define CLASS_2_32A07595EE24E2DC__CTOR_OFFSET UNITYSDK_OFFSET(0xA464B20)

inline static constexpr unsigned int Class_2_32A07595EE24E2DC_TypeDefinitionIndex = 55061;

class Class_2_32A07595EE24E2DC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::RPG::GameCore::WaitSkillInput* Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x44
	::System::Boolean Field_2_7; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSkillInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSkillInput*))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EA9C072A7A8B70A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_3EA9C072A7A8B70A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1B8EDD075FF9494(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_D1B8EDD075FF9494_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Boolean Method_2_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
