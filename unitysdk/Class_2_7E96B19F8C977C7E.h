#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RequestSetServerGroupProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7E96B19F8C977C7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD165280)
#define CLASS_2_7E96B19F8C977C7E_METHOD_2_722E59C38EEE700E_OFFSET UNITYSDK_OFFSET(0xD165310)
#define CLASS_2_7E96B19F8C977C7E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD164F30)
#define CLASS_2_7E96B19F8C977C7E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD164ED0)
#define CLASS_2_7E96B19F8C977C7E_TICK_OFFSET UNITYSDK_OFFSET(0xD165220)
#define CLASS_2_7E96B19F8C977C7E__CTOR_OFFSET UNITYSDK_OFFSET(0xD164DE0)

inline static constexpr unsigned int Class_2_7E96B19F8C977C7E_TypeDefinitionIndex = 49724;

class Class_2_7E96B19F8C977C7E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::RequestSetServerGroupProperty* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_2_7E96B19F8C977C7E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E96B19F8C977C7E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E96B19F8C977C7E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7E96B19F8C977C7E_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E96B19F8C977C7E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_722E59C38EEE700E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E96B19F8C977C7E_METHOD_2_722E59C38EEE700E_OFFSET))(this, a1, a2);
	}
};
