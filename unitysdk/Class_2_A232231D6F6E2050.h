#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimPlayerEnterOrExit; }
namespace System { class Object; }

#define CLASS_2_A232231D6F6E2050_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13509C20)
#define CLASS_2_A232231D6F6E2050_METHOD_2_2ADBA02EC0F7C432_1_OFFSET UNITYSDK_OFFSET(0x1350ADA0)
#define CLASS_2_A232231D6F6E2050_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x1350A9A0)
#define CLASS_2_A232231D6F6E2050_METHOD_2_7B12090AF6D76E60_1_OFFSET UNITYSDK_OFFSET(0x1350AB70)
#define CLASS_2_A232231D6F6E2050_METHOD_2_7B12090AF6D76E60_OFFSET UNITYSDK_OFFSET(0x1350A690)
#define CLASS_2_A232231D6F6E2050_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13509E30)
#define CLASS_2_A232231D6F6E2050_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1350A4E0)
#define CLASS_2_A232231D6F6E2050_TICK_OFFSET UNITYSDK_OFFSET(0x1350A630)
#define CLASS_2_A232231D6F6E2050__CTOR_OFFSET UNITYSDK_OFFSET(0x13509A30)

inline static constexpr unsigned int Class_2_A232231D6F6E2050_TypeDefinitionIndex = 49452;

class Class_2_A232231D6F6E2050 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x48
	::System::UInt32 Field_2_7; // 0x4C
	::System::UInt32 Field_2_8; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimPlayerEnterOrExit*))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_METHOD_2_7B12090AF6D76E60_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12090AF6D76E60_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_METHOD_2_7B12090AF6D76E60_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A232231D6F6E2050_METHOD_2_2ADBA02EC0F7C432_1_OFFSET))(this, a1);
	}
};
