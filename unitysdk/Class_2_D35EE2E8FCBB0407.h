#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SaveModelWhenDead; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D35EE2E8FCBB0407_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161FEDE0)
#define CLASS_2_D35EE2E8FCBB0407_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161FEE80)
#define CLASS_2_D35EE2E8FCBB0407_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x161FEFD0)
#define CLASS_2_D35EE2E8FCBB0407_TICK_OFFSET UNITYSDK_OFFSET(0x161FEE20)
#define CLASS_2_D35EE2E8FCBB0407__CTOR_OFFSET UNITYSDK_OFFSET(0x161FEDD0)

inline static constexpr unsigned int Class_2_D35EE2E8FCBB0407_TypeDefinitionIndex = 56574;

class Class_2_D35EE2E8FCBB0407 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SaveModelWhenDead* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SaveModelWhenDead* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SaveModelWhenDead*))((::PBYTE)hIl2Cpp + CLASS_2_D35EE2E8FCBB0407__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D35EE2E8FCBB0407_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D35EE2E8FCBB0407_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D35EE2E8FCBB0407_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D35EE2E8FCBB0407_ONTASKRESET_OFFSET))(this);
	}
};
