#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandShowPuzzleFinishToast; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_877B74806F1C13B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB57C600)
#define CLASS_2_877B74806F1C13B0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB57C640)
#define CLASS_2_877B74806F1C13B0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB57C6C0)
#define CLASS_2_877B74806F1C13B0_TICK_OFFSET UNITYSDK_OFFSET(0xB57C710)
#define CLASS_2_877B74806F1C13B0__CTOR_OFFSET UNITYSDK_OFFSET(0xB57C5F0)

inline static constexpr unsigned int Class_2_877B74806F1C13B0_TypeDefinitionIndex = 53576;

class Class_2_877B74806F1C13B0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::SwitchHandShowPuzzleFinishToast* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*))((::PBYTE)hIl2Cpp + CLASS_2_877B74806F1C13B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_877B74806F1C13B0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_877B74806F1C13B0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_877B74806F1C13B0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_877B74806F1C13B0_TICK_OFFSET))(this, a1);
	}
};
