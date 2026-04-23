#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class MonopolyCheckShouldSettle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_258337476290CA91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A51C30)
#define CLASS_2_258337476290CA91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11A51A00)
#define CLASS_2_258337476290CA91_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11A51BE0)
#define CLASS_2_258337476290CA91_TICK_OFFSET UNITYSDK_OFFSET(0x11A51CD0)
#define CLASS_2_258337476290CA91__CTOR_OFFSET UNITYSDK_OFFSET(0x11A51900)

inline static constexpr unsigned int Class_2_258337476290CA91_TypeDefinitionIndex = 53689;

class Class_2_258337476290CA91 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MonopolyCheckShouldSettle* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x30

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
