#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class SwitchHandCoinFlyTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2670FE7E428B87A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CBC280)
#define CLASS_2_2670FE7E428B87A4_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x13CBC6D0)
#define CLASS_2_2670FE7E428B87A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CBC360)
#define CLASS_2_2670FE7E428B87A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13CBC640)
#define CLASS_2_2670FE7E428B87A4_TICK_OFFSET UNITYSDK_OFFSET(0x13CBC300)
#define CLASS_2_2670FE7E428B87A4__CTOR_OFFSET UNITYSDK_OFFSET(0x13CBC270)

inline static constexpr unsigned int Class_2_2670FE7E428B87A4_TypeDefinitionIndex = 49829;

class Class_2_2670FE7E428B87A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_37D832480CB327E1* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::SwitchHandCoinFlyTo* Field_2_2; // 0x28

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
