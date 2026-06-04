#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_53F0644B4D7513CF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTutorial; }
namespace System { class Object; }

#define CLASS_2_202BFCDE21F7E2CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7EBD90)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0xD7EC2D0)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xD7EC480)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_89FF9062D7979840_OFFSET UNITYSDK_OFFSET(0xD7EC5A0)
#define CLASS_2_202BFCDE21F7E2CC_METHOD_2_B3D310C429155D69_OFFSET UNITYSDK_OFFSET(0xD7EBFF0)
#define CLASS_2_202BFCDE21F7E2CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7EBE30)
#define CLASS_2_202BFCDE21F7E2CC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7EC220)
#define CLASS_2_202BFCDE21F7E2CC_TICK_OFFSET UNITYSDK_OFFSET(0xD7EC270)
#define CLASS_2_202BFCDE21F7E2CC__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EBD80)

inline static constexpr unsigned int Class_2_202BFCDE21F7E2CC_TypeDefinitionIndex = 54940;

class Class_2_202BFCDE21F7E2CC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_53F0644B4D7513CF* Field_2_1; // 0x20
	::RPG::GameCore::TriggerTutorial* Field_2_2; // 0x28
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

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B3D310C429155D69()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_B3D310C429155D69_OFFSET))(this);
	}

	::System::Void Method_2_89FF9062D7979840(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_202BFCDE21F7E2CC_METHOD_2_89FF9062D7979840_OFFSET))(this, a1);
	}
};
