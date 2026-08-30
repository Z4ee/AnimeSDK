#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyUpdateInfoOnSwitchWorld; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_061C4FA4829DA86A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7FC0A0)
#define CLASS_2_061C4FA4829DA86A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7FBE50)
#define CLASS_2_061C4FA4829DA86A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A7FC050)
#define CLASS_2_061C4FA4829DA86A_TICK_OFFSET UNITYSDK_OFFSET(0x1A7FC0E0)
#define CLASS_2_061C4FA4829DA86A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FBE40)

inline static constexpr unsigned int Class_2_061C4FA4829DA86A_TypeDefinitionIndex = 58377;

class Class_2_061C4FA4829DA86A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyUpdateInfoOnSwitchWorld*))((::PBYTE)hIl2Cpp + CLASS_2_061C4FA4829DA86A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_061C4FA4829DA86A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_061C4FA4829DA86A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_061C4FA4829DA86A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_061C4FA4829DA86A_TICK_OFFSET))(this, a1);
	}
};
