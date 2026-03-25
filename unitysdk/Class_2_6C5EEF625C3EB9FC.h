#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetGameplayBGMEmotionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6C5EEF625C3EB9FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118A98B0)
#define CLASS_2_6C5EEF625C3EB9FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118A98F0)
#define CLASS_2_6C5EEF625C3EB9FC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118A9A80)
#define CLASS_2_6C5EEF625C3EB9FC_TICK_OFFSET UNITYSDK_OFFSET(0x118A9AD0)
#define CLASS_2_6C5EEF625C3EB9FC__CTOR_OFFSET UNITYSDK_OFFSET(0x118A98A0)

inline static constexpr unsigned int Class_2_6C5EEF625C3EB9FC_TypeDefinitionIndex = 47241;

class Class_2_6C5EEF625C3EB9FC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetGameplayBGMEmotionState* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGameplayBGMEmotionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGameplayBGMEmotionState*))((::PBYTE)hIl2Cpp + CLASS_2_6C5EEF625C3EB9FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5EEF625C3EB9FC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5EEF625C3EB9FC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5EEF625C3EB9FC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6C5EEF625C3EB9FC_TICK_OFFSET))(this, a1);
	}
};
