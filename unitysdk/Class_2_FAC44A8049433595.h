#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropPuzzleLoadingFinish; }

#define CLASS_2_FAC44A8049433595_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160AA580)
#define CLASS_2_FAC44A8049433595_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160AA5D0)
#define CLASS_2_FAC44A8049433595_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x160AA620)
#define CLASS_2_FAC44A8049433595_TICK_OFFSET UNITYSDK_OFFSET(0x160AA4C0)
#define CLASS_2_FAC44A8049433595__CTOR_OFFSET UNITYSDK_OFFSET(0x160AA4B0)

inline static constexpr unsigned int Class_2_FAC44A8049433595_TypeDefinitionIndex = 56283;

class Class_2_FAC44A8049433595 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPropPuzzleLoadingFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropPuzzleLoadingFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropPuzzleLoadingFinish*))((::PBYTE)hIl2Cpp + CLASS_2_FAC44A8049433595__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FAC44A8049433595_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAC44A8049433595_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAC44A8049433595_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAC44A8049433595_ONTASKRESET_OFFSET))(this);
	}
};
