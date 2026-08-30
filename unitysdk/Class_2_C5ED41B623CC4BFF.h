#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_1CD633F3449963C2;
class Class_1_BAD2D343EF0045A3;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialClickBtn; }

#define CLASS_2_C5ED41B623CC4BFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C25E0)
#define CLASS_2_C5ED41B623CC4BFF_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x134C2940)
#define CLASS_2_C5ED41B623CC4BFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134C2630)
#define CLASS_2_C5ED41B623CC4BFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134C27C0)
#define CLASS_2_C5ED41B623CC4BFF_TICK_OFFSET UNITYSDK_OFFSET(0x134C2810)
#define CLASS_2_C5ED41B623CC4BFF__CTOR_OFFSET UNITYSDK_OFFSET(0x134C25D0)

inline static constexpr unsigned int Class_2_C5ED41B623CC4BFF_TypeDefinitionIndex = 58968;

class Class_2_C5ED41B623CC4BFF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_1CD633F3449963C2* EIHIJPGBJFO; // 0x20
	::Class_1_BAD2D343EF0045A3* ALDDFNIAIKP; // 0x28
	::RPG::GameCore::TutorialClickBtn* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialClickBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialClickBtn*))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5ED41B623CC4BFF_METHOD_2_D148B5D9B2EC21BB_OFFSET))(this);
	}
};
