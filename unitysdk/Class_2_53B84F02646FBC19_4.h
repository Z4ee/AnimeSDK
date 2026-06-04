#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E7A9A07DA1734981;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53B84F02646FBC19_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF20640)
#define CLASS_2_53B84F02646FBC19_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF20680)
#define CLASS_2_53B84F02646FBC19_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF20990)
#define CLASS_2_53B84F02646FBC19_4_TICK_OFFSET UNITYSDK_OFFSET(0xAF209E0)
#define CLASS_2_53B84F02646FBC19_4__CTOR_OFFSET UNITYSDK_OFFSET(0xAF20630)
#define CLASS_2_53B84F02646FBC19_4__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xAF20A40)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_4_TypeDefinitionIndex = 49495;

class Class_2_53B84F02646FBC19_4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E7A9A07DA1734981* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E7A9A07DA1734981* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E7A9A07DA1734981*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
