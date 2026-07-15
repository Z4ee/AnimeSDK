#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_C4BCD569548B7F3E;
namespace RPG::GameCore { class StackScepterProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_592503346E89D2AC_METHOD_3_4487EB59871B4D67_OFFSET UNITYSDK_OFFSET(0x16426A80)
#define CLASS_3_592503346E89D2AC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16426840)
#define CLASS_3_592503346E89D2AC__CTOR_OFFSET UNITYSDK_OFFSET(0x16426810)

inline static constexpr unsigned int Class_3_592503346E89D2AC_TypeDefinitionIndex = 53129;

class Class_3_592503346E89D2AC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackScepterProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackScepterProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackScepterProperty*))((::PBYTE)hIl2Cpp + CLASS_3_592503346E89D2AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592503346E89D2AC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4487EB59871B4D67(::Class_2_C4BCD569548B7F3E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C4BCD569548B7F3E*))((::PBYTE)hIl2Cpp + CLASS_3_592503346E89D2AC_METHOD_3_4487EB59871B4D67_OFFSET))(this, a1);
	}
};
