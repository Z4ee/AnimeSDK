#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_6;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAutoTriggerRogueEntrancePropInteract; }
namespace System { class Object; }

#define CLASS_2_F22C83FCA7661C7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11865280)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x11865370)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x11865510)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x118654C0)
#define CLASS_2_F22C83FCA7661C7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11865320)
#define CLASS_2_F22C83FCA7661C7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11865410)
#define CLASS_2_F22C83FCA7661C7A_TICK_OFFSET UNITYSDK_OFFSET(0x11865460)
#define CLASS_2_F22C83FCA7661C7A__CTOR_OFFSET UNITYSDK_OFFSET(0x11865270)

inline static constexpr unsigned int Class_2_F22C83FCA7661C7A_TypeDefinitionIndex = 47523;

class Class_2_F22C83FCA7661C7A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

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

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
