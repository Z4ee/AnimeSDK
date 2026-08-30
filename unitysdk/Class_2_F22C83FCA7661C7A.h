#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAutoTriggerRogueEntrancePropInteract; }
namespace System { class Object; }

#define CLASS_2_F22C83FCA7661C7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B4F7A0)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x19B4F8C0)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x19B4FA80)
#define CLASS_2_F22C83FCA7661C7A_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x19B4FA30)
#define CLASS_2_F22C83FCA7661C7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B4F870)
#define CLASS_2_F22C83FCA7661C7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19B4F980)
#define CLASS_2_F22C83FCA7661C7A_TICK_OFFSET UNITYSDK_OFFSET(0x19B4F9D0)
#define CLASS_2_F22C83FCA7661C7A__CTOR_OFFSET UNITYSDK_OFFSET(0x19B4F790)

inline static constexpr unsigned int Class_2_F22C83FCA7661C7A_TypeDefinitionIndex = 59002;

class Class_2_F22C83FCA7661C7A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* JLMAKNFAEBH; // 0x18
	::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

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

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F22C83FCA7661C7A_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
