#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class HideLevelStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_12C7257360850A2E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C5900)
#define CLASS_2_12C7257360850A2E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7C5940)
#define CLASS_2_12C7257360850A2E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7C5B70)
#define CLASS_2_12C7257360850A2E_TICK_OFFSET UNITYSDK_OFFSET(0xA7C5BC0)
#define CLASS_2_12C7257360850A2E__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C58F0)

inline static constexpr unsigned int Class_2_12C7257360850A2E_TypeDefinitionIndex = 53636;

class Class_2_12C7257360850A2E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::HideLevelStage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideLevelStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideLevelStage*))((::PBYTE)hIl2Cpp + CLASS_2_12C7257360850A2E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12C7257360850A2E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12C7257360850A2E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12C7257360850A2E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12C7257360850A2E_TICK_OFFSET))(this, a1);
	}
};
