#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PredicateToMakeFail; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CA5E6F2074BD2538_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183BD400)
#define CLASS_2_CA5E6F2074BD2538_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183BD560)
#define CLASS_2_CA5E6F2074BD2538_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x183BD880)
#define CLASS_2_CA5E6F2074BD2538_TICK_OFFSET UNITYSDK_OFFSET(0x183BDB40)
#define CLASS_2_CA5E6F2074BD2538__CTOR_OFFSET UNITYSDK_OFFSET(0x183BD2A0)

inline static constexpr unsigned int Class_2_CA5E6F2074BD2538_TypeDefinitionIndex = 52763;

class Class_2_CA5E6F2074BD2538 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PredicateToMakeFail* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateToMakeFail* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateToMakeFail*))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA5E6F2074BD2538_TICK_OFFSET))(this, a1);
	}
};
