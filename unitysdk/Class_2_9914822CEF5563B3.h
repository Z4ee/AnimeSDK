#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class SkillExecutionStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9914822CEF5563B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1559C870)
#define CLASS_2_9914822CEF5563B3_METHOD_2_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x1559C910)
#define CLASS_2_9914822CEF5563B3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1559C630)
#define CLASS_2_9914822CEF5563B3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1559C820)
#define CLASS_2_9914822CEF5563B3_TICK_OFFSET UNITYSDK_OFFSET(0x1559C8B0)
#define CLASS_2_9914822CEF5563B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1559C620)

inline static constexpr unsigned int Class_2_9914822CEF5563B3_TypeDefinitionIndex = 55813;

class Class_2_9914822CEF5563B3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::SkillExecutionStart* IGHAHBNLIJA; // 0x20

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

	::System::Void Method_2_0FA0973E87FBD363(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_9914822CEF5563B3_METHOD_2_0FA0973E87FBD363_OFFSET))(this, a1);
	}
};
