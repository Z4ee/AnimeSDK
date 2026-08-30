#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_01F4079471966D8C;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropTriggerAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_87CAFC6014525451_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCA05F0)
#define CLASS_2_87CAFC6014525451_METHOD_2_C12F17306A19568B_OFFSET UNITYSDK_OFFSET(0xBCA0350)
#define CLASS_2_87CAFC6014525451_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBCA07F0)
#define CLASS_2_87CAFC6014525451_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCA03E0)
#define CLASS_2_87CAFC6014525451_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCA05A0)
#define CLASS_2_87CAFC6014525451_TICK_OFFSET UNITYSDK_OFFSET(0xBCA0630)
#define CLASS_2_87CAFC6014525451__CTOR_OFFSET UNITYSDK_OFFSET(0xBCA0340)

inline static constexpr unsigned int Class_2_87CAFC6014525451_TypeDefinitionIndex = 58510;

class Class_2_87CAFC6014525451 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_01F4079471966D8C* CPIIOIPAAKK; // 0x18
	::RPG::GameCore::PropTriggerAnimState* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Boolean OJKLKKADHGM; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropTriggerAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropTriggerAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PropComponent* Method_2_C12F17306A19568B()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451_METHOD_2_C12F17306A19568B_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87CAFC6014525451_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
