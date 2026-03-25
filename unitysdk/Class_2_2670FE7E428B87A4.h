#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class SwitchHandCoinFlyTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2670FE7E428B87A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10536A20)
#define CLASS_2_2670FE7E428B87A4_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x10536E60)
#define CLASS_2_2670FE7E428B87A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10536B00)
#define CLASS_2_2670FE7E428B87A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10536DD0)
#define CLASS_2_2670FE7E428B87A4_TICK_OFFSET UNITYSDK_OFFSET(0x10536AA0)
#define CLASS_2_2670FE7E428B87A4__CTOR_OFFSET UNITYSDK_OFFSET(0x10536A10)

inline static constexpr unsigned int Class_2_2670FE7E428B87A4_TypeDefinitionIndex = 43167;

class Class_2_2670FE7E428B87A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwitchHandCoinFlyTo* Field_2_0; // 0x20
	::Class_2_37D832480CB327E1* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCoinFlyTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCoinFlyTo*))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}
};
