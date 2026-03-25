#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_BAD2D343EF0045A3;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTutorial; }
namespace System { class Object; }

#define CLASS_2_202BFCDE21F7E2CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108D7230)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_31766FD3A8533703_OFFSET UNITYSDK_OFFSET(0x108D7A70)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x108D7780)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x108D7950)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_B987CA27F146158A_OFFSET UNITYSDK_OFFSET(0x108D74A0)
#define CLASS_2_202BFCDE21F7E2CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108D72E0)
#define CLASS_2_202BFCDE21F7E2CC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x108D76D0)
#define CLASS_2_202BFCDE21F7E2CC_TICK_OFFSET UNITYSDK_OFFSET(0x108D7720)
#define CLASS_2_202BFCDE21F7E2CC__CTOR_OFFSET UNITYSDK_OFFSET(0x108D7220)

inline static constexpr unsigned int Class_2_202BFCDE21F7E2CC_TypeDefinitionIndex = 47479;

class Class_2_202BFCDE21F7E2CC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerTutorial* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_1_BAD2D343EF0045A3* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTutorial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTutorial*))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B987CA27F146158A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_B987CA27F146158A_OFFSET))(this);
	}

	::System::Void Method_2_31766FD3A8533703(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_31766FD3A8533703_OFFSET))(this, a1);
	}
};
