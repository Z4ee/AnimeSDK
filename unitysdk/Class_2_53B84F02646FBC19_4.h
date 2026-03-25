#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E5306B5143BD5967;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53B84F02646FBC19_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113A92D0)
#define CLASS_2_53B84F02646FBC19_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113A8FF0)
#define CLASS_2_53B84F02646FBC19_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113A9310)
#define CLASS_2_53B84F02646FBC19_4_TICK_OFFSET UNITYSDK_OFFSET(0x113A9350)
#define CLASS_2_53B84F02646FBC19_4__CTOR_OFFSET UNITYSDK_OFFSET(0x113A8FE0)
#define CLASS_2_53B84F02646FBC19_4__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x113A93B0)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_4_TypeDefinitionIndex = 42850;

class Class_2_53B84F02646FBC19_4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E5306B5143BD5967* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E5306B5143BD5967* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E5306B5143BD5967*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
