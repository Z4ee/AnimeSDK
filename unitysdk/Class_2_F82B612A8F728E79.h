#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStartMarbleGame; }
namespace System { class Object; }

#define CLASS_2_F82B612A8F728E79_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACA5370)
#define CLASS_2_F82B612A8F728E79_METHOD_2_367E6F276F1559A1_OFFSET UNITYSDK_OFFSET(0xACA55D0)
#define CLASS_2_F82B612A8F728E79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xACA5260)
#define CLASS_2_F82B612A8F728E79_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xACA5320)
#define CLASS_2_F82B612A8F728E79_TICK_OFFSET UNITYSDK_OFFSET(0xACA5460)
#define CLASS_2_F82B612A8F728E79__CTOR_OFFSET UNITYSDK_OFFSET(0xACA51D0)

inline static constexpr unsigned int Class_2_F82B612A8F728E79_TypeDefinitionIndex = 49989;

class Class_2_F82B612A8F728E79 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitStartMarbleGame* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_367E6F276F1559A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F82B612A8F728E79_METHOD_2_367E6F276F1559A1_OFFSET))(this, a1);
	}
};
