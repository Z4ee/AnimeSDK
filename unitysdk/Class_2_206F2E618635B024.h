#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_ED5B635C4D775055;
namespace RPG::GameCore { class AdvNPCIdle; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_206F2E618635B024_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158E15B0)
#define CLASS_2_206F2E618635B024_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158E15F0)
#define CLASS_2_206F2E618635B024_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158E1710)
#define CLASS_2_206F2E618635B024_TICK_OFFSET UNITYSDK_OFFSET(0x158E1760)
#define CLASS_2_206F2E618635B024__CTOR_OFFSET UNITYSDK_OFFSET(0x158E1460)

inline static constexpr unsigned int Class_2_206F2E618635B024_TypeDefinitionIndex = 52427;

class Class_2_206F2E618635B024 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_ED5B635C4D775055* EIJAMKAKADD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCIdle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCIdle*))((::PBYTE)hIl2Cpp + CLASS_2_206F2E618635B024__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_206F2E618635B024_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_206F2E618635B024_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_206F2E618635B024_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_206F2E618635B024_TICK_OFFSET))(this, a1);
	}
};
