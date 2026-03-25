#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPerformanceReplayEnd; }

#define CLASS_2_D01F15585DD9C69A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11964D00)
#define CLASS_2_D01F15585DD9C69A_METHOD_2_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0x119650C0)
#define CLASS_2_D01F15585DD9C69A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11964E20)
#define CLASS_2_D01F15585DD9C69A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11964F20)
#define CLASS_2_D01F15585DD9C69A_TICK_OFFSET UNITYSDK_OFFSET(0x11965060)
#define CLASS_2_D01F15585DD9C69A__CTOR_OFFSET UNITYSDK_OFFSET(0x11964C70)

inline static constexpr unsigned int Class_2_D01F15585DD9C69A_TypeDefinitionIndex = 47577;

class Class_2_D01F15585DD9C69A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPerformanceReplayEnd* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::System::Boolean Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPerformanceReplayEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPerformanceReplayEnd*))((::PBYTE)hIl2Cpp + CLASS_2_D01F15585DD9C69A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D01F15585DD9C69A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D01F15585DD9C69A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D01F15585DD9C69A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D01F15585DD9C69A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FA0973E87FBD363(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_D01F15585DD9C69A_METHOD_2_0FA0973E87FBD363_OFFSET))(this, a1);
	}
};
