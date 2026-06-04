#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandLayItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_609B8200158282E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AB4BE0)
#define CLASS_2_609B8200158282E3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AB5280)
#define CLASS_2_609B8200158282E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AB4E90)
#define CLASS_2_609B8200158282E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AB5230)
#define CLASS_2_609B8200158282E3_TICK_OFFSET UNITYSDK_OFFSET(0x12AB4C20)
#define CLASS_2_609B8200158282E3__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB4BD0)

inline static constexpr unsigned int Class_2_609B8200158282E3_TypeDefinitionIndex = 49833;

class Class_2_609B8200158282E3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwitchHandLayItem* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandLayItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandLayItem*))((::PBYTE)hIl2Cpp + CLASS_2_609B8200158282E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_609B8200158282E3_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_609B8200158282E3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_609B8200158282E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_609B8200158282E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_609B8200158282E3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
