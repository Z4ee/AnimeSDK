#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_A406659BC3B2A585;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_53B84F02646FBC19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16466CD0)
#define CLASS_2_53B84F02646FBC19_METHOD_2_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x16466D20)
#define CLASS_2_53B84F02646FBC19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16466E70)
#define CLASS_2_53B84F02646FBC19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16466EE0)
#define CLASS_2_53B84F02646FBC19_TICK_OFFSET UNITYSDK_OFFSET(0x16466F60)
#define CLASS_2_53B84F02646FBC19__CTOR_OFFSET UNITYSDK_OFFSET(0x16466CC0)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_TypeDefinitionIndex = 49931;

class Class_2_53B84F02646FBC19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_A406659BC3B2A585* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A406659BC3B2A585* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A406659BC3B2A585*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_METHOD_2_C836268BEBB9DBE1_OFFSET))(this, a1);
	}
};
