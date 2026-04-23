#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDialogueEvent; }

#define CLASS_2_397E663C317500BA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3A8850)
#define CLASS_2_397E663C317500BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD3A8890)
#define CLASS_2_397E663C317500BA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD3A88E0)
#define CLASS_2_397E663C317500BA_TICK_OFFSET UNITYSDK_OFFSET(0xD3A8930)
#define CLASS_2_397E663C317500BA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A8840)

inline static constexpr unsigned int Class_2_397E663C317500BA_TypeDefinitionIndex = 54190;

class Class_2_397E663C317500BA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerDialogueEvent* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDialogueEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDialogueEvent*))((::PBYTE)hIl2Cpp + CLASS_2_397E663C317500BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397E663C317500BA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397E663C317500BA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_397E663C317500BA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_397E663C317500BA_TICK_OFFSET))(this, a1);
	}
};
