#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MonopolyCheckShouldSettle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_258337476290CA91_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB3BB0)
#define CLASS_2_258337476290CA91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB3980)
#define CLASS_2_258337476290CA91_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBB3B60)
#define CLASS_2_258337476290CA91_TICK_OFFSET UNITYSDK_OFFSET(0xBBB3D20)
#define CLASS_2_258337476290CA91__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB3880)

inline static constexpr unsigned int Class_2_258337476290CA91_TypeDefinitionIndex = 58366;

class Class_2_258337476290CA91 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* IJBFOGOBMLE; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* APPJBNPGGMI; // 0x28
	::RPG::GameCore::MonopolyCheckShouldSettle* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckShouldSettle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckShouldSettle*))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_TICK_OFFSET))(this, a1);
	}
};
