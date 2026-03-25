#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class ConvinceWaitTrickSkill; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_3BE596956CCD29C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103755F0)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_003BCEE77B554B8B_OFFSET UNITYSDK_OFFSET(0x103758B0)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x103754F0)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x103757B0)
#define CLASS_2_3BE596956CCD29C0_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10375640)
#define CLASS_2_3BE596956CCD29C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10375730)
#define CLASS_2_3BE596956CCD29C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10375800)
#define CLASS_2_3BE596956CCD29C0_TICK_OFFSET UNITYSDK_OFFSET(0x10375850)
#define CLASS_2_3BE596956CCD29C0__CTOR_OFFSET UNITYSDK_OFFSET(0x103754B0)

inline static constexpr unsigned int Class_2_3BE596956CCD29C0_TypeDefinitionIndex = 42668;

class Class_2_3BE596956CCD29C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::ConvinceWaitTrickSkill* Field_2_0; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Boolean Field_2_3; // 0x31

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

	::System::Void Method_2_003BCEE77B554B8B(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_METHOD_2_003BCEE77B554B8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE596956CCD29C0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
