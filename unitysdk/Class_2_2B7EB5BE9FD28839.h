#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowPerformanceRollingSubtitles; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_2B7EB5BE9FD28839_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE4CE30)
#define CLASS_2_2B7EB5BE9FD28839_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xDE4D4F0)
#define CLASS_2_2B7EB5BE9FD28839_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xDE4D3B0)
#define CLASS_2_2B7EB5BE9FD28839_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE4CF50)
#define CLASS_2_2B7EB5BE9FD28839_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE4D300)
#define CLASS_2_2B7EB5BE9FD28839_TICK_OFFSET UNITYSDK_OFFSET(0xDE4CEF0)
#define CLASS_2_2B7EB5BE9FD28839__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4CE20)
#define CLASS_2_2B7EB5BE9FD28839__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xDE4D550)

inline static constexpr unsigned int Class_2_2B7EB5BE9FD28839_TypeDefinitionIndex = 54818;

class Class_2_2B7EB5BE9FD28839 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowPerformanceRollingSubtitles* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPerformanceRollingSubtitles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPerformanceRollingSubtitles*))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7EB5BE9FD28839__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};
