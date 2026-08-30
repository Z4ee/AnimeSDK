#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_37D832480CB327E1;
namespace RPG::GameCore { class SwitchHandCoinFlyTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2670FE7E428B87A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A282E0)
#define CLASS_2_2670FE7E428B87A4_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x18A28870)
#define CLASS_2_2670FE7E428B87A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A283C0)
#define CLASS_2_2670FE7E428B87A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18A287E0)
#define CLASS_2_2670FE7E428B87A4_TICK_OFFSET UNITYSDK_OFFSET(0x18A28360)
#define CLASS_2_2670FE7E428B87A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18A282D0)

inline static constexpr unsigned int Class_2_2670FE7E428B87A4_TypeDefinitionIndex = 53568;

class Class_2_2670FE7E428B87A4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_37D832480CB327E1* PDGCCOOOJDO; // 0x18
	::RPG::GameCore::SwitchHandCoinFlyTo* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28

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

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2670FE7E428B87A4_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}
};
