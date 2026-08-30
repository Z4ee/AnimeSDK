#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class ConvinceWaitTrickSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_3BE596956CCD29C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0B4B10)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1A0B4A00)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_8DA3B55C33C4DEBB_OFFSET UNITYSDK_OFFSET(0x1A0B4DE0)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0B4CE0)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1A0B4B60)
#define CLASS_2_3BE596956CCD29C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0B4C60)
#define CLASS_2_3BE596956CCD29C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A0B4D30)
#define CLASS_2_3BE596956CCD29C0_TICK_OFFSET UNITYSDK_OFFSET(0x1A0B4D80)
#define CLASS_2_3BE596956CCD29C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B49C0)

inline static constexpr unsigned int Class_2_3BE596956CCD29C0_TypeDefinitionIndex = 52990;

class Class_2_3BE596956CCD29C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ConvinceWaitTrickSkill* OFKGLJOAMLD; // 0x20
	::System::String* IFDOLFKAOLA; // 0x28
	::System::Boolean NCDPNHDBKKG; // 0x30
	::System::Boolean GGJECIOIBCJ; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceWaitTrickSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceWaitTrickSkill*))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8DA3B55C33C4DEBB(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_METHOD_2_8DA3B55C33C4DEBB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
