#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueOpenChest; }

#define CLASS_2_452FCA4E9074B628_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15218F60)
#define CLASS_2_452FCA4E9074B628_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15219000)
#define CLASS_2_452FCA4E9074B628_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15219240)
#define CLASS_2_452FCA4E9074B628_TICK_OFFSET UNITYSDK_OFFSET(0x15218FA0)
#define CLASS_2_452FCA4E9074B628__CTOR_OFFSET UNITYSDK_OFFSET(0x15218F50)
#define CLASS_2_452FCA4E9074B628__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x15219290)

inline static constexpr unsigned int Class_2_452FCA4E9074B628_TypeDefinitionIndex = 58946;

class Class_2_452FCA4E9074B628 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerRogueOpenChest* OFKGLJOAMLD; // 0x20
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x28

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
