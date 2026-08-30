#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/Guid.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RogueTournExhibitionShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2857016E32AA6D40_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC32DE80)
#define CLASS_2_2857016E32AA6D40_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xC32E7C0)
#define CLASS_2_2857016E32AA6D40_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC32E730)
#define CLASS_2_2857016E32AA6D40_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xC32E860)
#define CLASS_2_2857016E32AA6D40_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xC32E3B0)
#define CLASS_2_2857016E32AA6D40_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC32DFF0)
#define CLASS_2_2857016E32AA6D40_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC32E460)
#define CLASS_2_2857016E32AA6D40_TICK_OFFSET UNITYSDK_OFFSET(0xC32E550)
#define CLASS_2_2857016E32AA6D40__CTOR_OFFSET UNITYSDK_OFFSET(0xC32DD90)

inline static constexpr unsigned int Class_2_2857016E32AA6D40_TypeDefinitionIndex = 58629;

class Class_2_2857016E32AA6D40 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::RogueTournExhibitionShowUI* IGHAHBNLIJA; // 0x20
	::Class_3_07C3C4D2990C49EE* KEIFHFDOEDC; // 0x28
	::Class_3_07C3C4D2990C49EE* KMPDMNNFFNE; // 0x30
	::System::Guid ELHKHAFNIDC; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournExhibitionShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournExhibitionShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2857016E32AA6D40_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
