#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwordTrainingShowEndingPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A8D0FC5C39F23086_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8C9B70)
#define CLASS_2_A8D0FC5C39F23086_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8C9BB0)
#define CLASS_2_A8D0FC5C39F23086_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8CA360)
#define CLASS_2_A8D0FC5C39F23086_TICK_OFFSET UNITYSDK_OFFSET(0xB8CA3B0)
#define CLASS_2_A8D0FC5C39F23086__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C9B60)

inline static constexpr unsigned int Class_2_A8D0FC5C39F23086_TypeDefinitionIndex = 47436;

class Class_2_A8D0FC5C39F23086 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwordTrainingShowEndingPerformance* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingShowEndingPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingShowEndingPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A8D0FC5C39F23086_TICK_OFFSET))(this, a1);
	}
};
