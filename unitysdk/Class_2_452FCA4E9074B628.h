#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueOpenChest; }

#define CLASS_2_452FCA4E9074B628_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF63410)
#define CLASS_2_452FCA4E9074B628_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF634B0)
#define CLASS_2_452FCA4E9074B628_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAF636F0)
#define CLASS_2_452FCA4E9074B628_TICK_OFFSET UNITYSDK_OFFSET(0xAF63450)
#define CLASS_2_452FCA4E9074B628__CTOR_OFFSET UNITYSDK_OFFSET(0xAF63400)
#define CLASS_2_452FCA4E9074B628__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xAF63740)

inline static constexpr unsigned int Class_2_452FCA4E9074B628_TypeDefinitionIndex = 54936;

class Class_2_452FCA4E9074B628 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerRogueOpenChest* Field_2_1; // 0x20
	::RPG::Client::UIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueOpenChest* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueOpenChest*))((::PBYTE)hIl2Cpp + CLASS_2_452FCA4E9074B628__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_452FCA4E9074B628_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_452FCA4E9074B628_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_452FCA4E9074B628_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_452FCA4E9074B628_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_452FCA4E9074B628__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}
};
