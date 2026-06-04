#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class SkillExecutionStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9914822CEF5563B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137C80C0)
#define CLASS_2_9914822CEF5563B3_METHOD_2_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x137C8160)
#define CLASS_2_9914822CEF5563B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x137C7EE0)
#define CLASS_2_9914822CEF5563B3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x137C8070)
#define CLASS_2_9914822CEF5563B3_TICK_OFFSET UNITYSDK_OFFSET(0x137C8100)
#define CLASS_2_9914822CEF5563B3__CTOR_OFFSET UNITYSDK_OFFSET(0x137C7ED0)

inline static constexpr unsigned int Class_2_9914822CEF5563B3_TypeDefinitionIndex = 51952;

class Class_2_9914822CEF5563B3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SkillExecutionStart* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkillExecutionStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkillExecutionStart*))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FA0973E87FBD363(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3_METHOD_2_0FA0973E87FBD363_OFFSET))(this, a1);
	}
};
