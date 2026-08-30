#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_A406659BC3B2A585;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53B84F02646FBC19_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC382060)
#define CLASS_2_53B84F02646FBC19_1_METHOD_2_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0xC3820B0)
#define CLASS_2_53B84F02646FBC19_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC382200)
#define CLASS_2_53B84F02646FBC19_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC382270)
#define CLASS_2_53B84F02646FBC19_1_TICK_OFFSET UNITYSDK_OFFSET(0xC3822F0)
#define CLASS_2_53B84F02646FBC19_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC382050)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_1_TypeDefinitionIndex = 52592;

class Class_2_53B84F02646FBC19_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_A406659BC3B2A585* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_METHOD_2_C836268BEBB9DBE1_OFFSET))(this, a1);
	}
};
