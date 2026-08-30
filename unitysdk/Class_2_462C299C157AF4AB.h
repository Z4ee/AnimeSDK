#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAetherDivideBattle; }

#define CLASS_2_462C299C157AF4AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB932000)
#define CLASS_2_462C299C157AF4AB_METHOD_2_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0xB931C70)
#define CLASS_2_462C299C157AF4AB_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0xB931D10)
#define CLASS_2_462C299C157AF4AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB931B50)
#define CLASS_2_462C299C157AF4AB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB931B00)
#define CLASS_2_462C299C157AF4AB_TICK_OFFSET UNITYSDK_OFFSET(0xB931FA0)
#define CLASS_2_462C299C157AF4AB__CTOR_OFFSET UNITYSDK_OFFSET(0xB931AF0)

inline static constexpr unsigned int Class_2_462C299C157AF4AB_TypeDefinitionIndex = 58916;

class Class_2_462C299C157AF4AB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::Client::AdventurePhase* HAGFACOEAFD; // 0x20
	::RPG::GameCore::TriggerAetherDivideBattle* EJJEEJENLDA; // 0x28

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

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_2_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_METHOD_2_7223CD34BEFCBF48_OFFSET))(this);
	}
};
