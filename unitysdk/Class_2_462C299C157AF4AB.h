#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAetherDivideBattle; }

#define CLASS_2_462C299C157AF4AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A3C030)
#define CLASS_2_462C299C157AF4AB_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x9A3BCD0)
#define CLASS_2_462C299C157AF4AB_METHOD_2_3BE5DBAE268F9022_OFFSET UNITYSDK_OFFSET(0x9A3BD70)
#define CLASS_2_462C299C157AF4AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A3BBB0)
#define CLASS_2_462C299C157AF4AB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9A3BB60)
#define CLASS_2_462C299C157AF4AB_TICK_OFFSET UNITYSDK_OFFSET(0x9A3BFD0)
#define CLASS_2_462C299C157AF4AB__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3BB50)

inline static constexpr unsigned int Class_2_462C299C157AF4AB_TypeDefinitionIndex = 54181;

class Class_2_462C299C157AF4AB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::Client::AdventurePhase* Field_2_2; // 0x20
	::RPG::GameCore::TriggerAetherDivideBattle* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAetherDivideBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAetherDivideBattle*))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3BE5DBAE268F9022()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_METHOD_2_3BE5DBAE268F9022_OFFSET))(this);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_METHOD_2_017C915772AE00E9_OFFSET))(this);
	}
};
