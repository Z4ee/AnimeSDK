#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PropLoadFastDeliverPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_630EF322815395F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15212EB0)
#define CLASS_2_630EF322815395F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152125C0)
#define CLASS_2_630EF322815395F0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15212E60)
#define CLASS_2_630EF322815395F0_TICK_OFFSET UNITYSDK_OFFSET(0x15212F10)
#define CLASS_2_630EF322815395F0__CTOR_OFFSET UNITYSDK_OFFSET(0x152125B0)

inline static constexpr unsigned int Class_2_630EF322815395F0_TypeDefinitionIndex = 58480;

class Class_2_630EF322815395F0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropLoadFastDeliverPuzzle* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropLoadFastDeliverPuzzle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropLoadFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + CLASS_2_630EF322815395F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_630EF322815395F0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_630EF322815395F0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_630EF322815395F0_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_630EF322815395F0_TICK_OFFSET))(this, a1);
	}
};
