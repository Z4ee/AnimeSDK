#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_CB7B13C5C1487F07;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53B84F02646FBC19_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17058700)
#define CLASS_2_53B84F02646FBC19_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17058760)
#define CLASS_2_53B84F02646FBC19_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17058830)
#define CLASS_2_53B84F02646FBC19_2_TICK_OFFSET UNITYSDK_OFFSET(0x17058880)
#define CLASS_2_53B84F02646FBC19_2__CTOR_OFFSET UNITYSDK_OFFSET(0x170586F0)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_2_TypeDefinitionIndex = 52920;

class Class_2_53B84F02646FBC19_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_CB7B13C5C1487F07* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CB7B13C5C1487F07* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CB7B13C5C1487F07*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_TICK_OFFSET))(this, a1);
	}
};
