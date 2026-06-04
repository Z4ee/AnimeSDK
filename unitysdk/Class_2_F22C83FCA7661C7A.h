#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_5;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAutoTriggerRogueEntrancePropInteract; }
namespace System { class Object; }

#define CLASS_2_F22C83FCA7661C7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA0DD70)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xAA0DE90)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xAA0E050)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xAA0E000)
#define CLASS_2_F22C83FCA7661C7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA0DE40)
#define CLASS_2_F22C83FCA7661C7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA0DF50)
#define CLASS_2_F22C83FCA7661C7A_TICK_OFFSET UNITYSDK_OFFSET(0xAA0DFA0)
#define CLASS_2_F22C83FCA7661C7A__CTOR_OFFSET UNITYSDK_OFFSET(0xAA0DD60)

inline static constexpr unsigned int Class_2_F22C83FCA7661C7A_TypeDefinitionIndex = 54987;

class Class_2_F22C83FCA7661C7A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
