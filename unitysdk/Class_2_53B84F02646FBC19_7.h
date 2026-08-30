#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_C6F51BBF3F52709A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53B84F02646FBC19_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF41DB10)
#define CLASS_2_53B84F02646FBC19_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF41D750)
#define CLASS_2_53B84F02646FBC19_7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF41DB50)
#define CLASS_2_53B84F02646FBC19_7_TICK_OFFSET UNITYSDK_OFFSET(0xF41DB90)
#define CLASS_2_53B84F02646FBC19_7__CTOR_OFFSET UNITYSDK_OFFSET(0xF41D740)
#define CLASS_2_53B84F02646FBC19_7__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xF41DBF0)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_7_TypeDefinitionIndex = 53227;

class Class_2_53B84F02646FBC19_7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_C6F51BBF3F52709A* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C6F51BBF3F52709A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C6F51BBF3F52709A*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_7_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_7__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
