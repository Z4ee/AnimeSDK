#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseAction; }

#define CLASS_2_B71FAF6213C29C9C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A5F2B0)
#define CLASS_2_B71FAF6213C29C9C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A5F2F0)
#define CLASS_2_B71FAF6213C29C9C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A5F390)
#define CLASS_2_B71FAF6213C29C9C_TICK_OFFSET UNITYSDK_OFFSET(0x16A5F3E0)
#define CLASS_2_B71FAF6213C29C9C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5F2A0)

inline static constexpr unsigned int Class_2_B71FAF6213C29C9C_TypeDefinitionIndex = 56344;

class Class_2_B71FAF6213C29C9C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseAction*))((::PBYTE)hIl2Cpp + CLASS_2_B71FAF6213C29C9C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FAF6213C29C9C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FAF6213C29C9C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FAF6213C29C9C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B71FAF6213C29C9C_TICK_OFFSET))(this, a1);
	}
};
