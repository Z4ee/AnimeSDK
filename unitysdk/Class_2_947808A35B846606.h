#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowMazeUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_947808A35B846606_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198DAD90)
#define CLASS_2_947808A35B846606_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198DADD0)
#define CLASS_2_947808A35B846606_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198DB070)
#define CLASS_2_947808A35B846606_TICK_OFFSET UNITYSDK_OFFSET(0x198DB0C0)
#define CLASS_2_947808A35B846606__CTOR_OFFSET UNITYSDK_OFFSET(0x198DAD80)

inline static constexpr unsigned int Class_2_947808A35B846606_TypeDefinitionIndex = 56642;

class Class_2_947808A35B846606 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowMazeUI* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazeUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazeUI*))((::PBYTE)hIl2Cpp + CLASS_2_947808A35B846606__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_947808A35B846606_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_947808A35B846606_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_947808A35B846606_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_947808A35B846606_TICK_OFFSET))(this, a1);
	}
};
