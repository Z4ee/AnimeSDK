#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSkillInput; }
namespace System { class Object; }

#define CLASS_2_32A07595EE24E2DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10042AA0)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x10043490)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_3EA9C072A7A8B70A_OFFSET UNITYSDK_OFFSET(0x10043130)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10042DE0)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10042B70)
#define CLASS_2_32A07595EE24E2DC_METHOD_2_A626FD3D950B8B9D_OFFSET UNITYSDK_OFFSET(0x10043710)
#define CLASS_2_32A07595EE24E2DC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10042D40)
#define CLASS_2_32A07595EE24E2DC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10042FC0)
#define CLASS_2_32A07595EE24E2DC_TICK_OFFSET UNITYSDK_OFFSET(0x10043020)
#define CLASS_2_32A07595EE24E2DC__CTOR_OFFSET UNITYSDK_OFFSET(0x10042920)

inline static constexpr unsigned int Class_2_32A07595EE24E2DC_TypeDefinitionIndex = 54334;

class Class_2_32A07595EE24E2DC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x20
	::RPG::GameCore::WaitSkillInput* Field_2_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x30
	::RPG::GameCore::TaskContext* Field_2_2; // 0x38
	::System::Single Field_2_3; // 0x40
	::System::Boolean Field_2_0; // 0x44
	::System::Single Field_2_4; // 0x48

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

	::System::Void Method_2_A626FD3D950B8B9D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_A626FD3D950B8B9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Boolean Method_2_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A07595EE24E2DC_METHOD_2_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
