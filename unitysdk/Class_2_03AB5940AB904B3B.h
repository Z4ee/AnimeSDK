#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwitchCharacterAnchorV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_03AB5940AB904B3B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161E71E0)
#define CLASS_2_03AB5940AB904B3B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161E7560)
#define CLASS_2_03AB5940AB904B3B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x161E7340)
#define CLASS_2_03AB5940AB904B3B_TICK_OFFSET UNITYSDK_OFFSET(0x161E73C0)
#define CLASS_2_03AB5940AB904B3B__CTOR_OFFSET UNITYSDK_OFFSET(0x161E70A0)

inline static constexpr unsigned int Class_2_03AB5940AB904B3B_TypeDefinitionIndex = 53561;

class Class_2_03AB5940AB904B3B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SwitchCharacterAnchorV2* OFKGLJOAMLD; // 0x20
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCharacterAnchorV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCharacterAnchorV2*))((::PBYTE)hIl2Cpp + CLASS_2_03AB5940AB904B3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03AB5940AB904B3B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03AB5940AB904B3B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03AB5940AB904B3B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03AB5940AB904B3B_ONTASKRESET_OFFSET))(this);
	}
};
