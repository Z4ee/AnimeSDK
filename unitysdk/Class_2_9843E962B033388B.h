#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class SwitchEffectBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9843E962B033388B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186C9A70)
#define CLASS_2_9843E962B033388B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186C9B00)
#define CLASS_2_9843E962B033388B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186C9AB0)
#define CLASS_2_9843E962B033388B_TICK_OFFSET UNITYSDK_OFFSET(0x186C9F80)
#define CLASS_2_9843E962B033388B__CCTOR_OFFSET UNITYSDK_OFFSET(0x186CA170)
#define CLASS_2_9843E962B033388B__CTOR_OFFSET UNITYSDK_OFFSET(0x186C9A50)

inline static constexpr unsigned int Class_2_9843E962B033388B_TypeDefinitionIndex = 53166;

class Class_2_9843E962B033388B : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9843E962B033388B_TypeDefinitionIndex)->GetStaticField(0x13730);
	}
	::RPG::GameCore::SwitchEffectBattleArea* Field_2_1; // 0x18
	::Class_1_D70A30D666F20D90* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x31
	::System::Single Field_2_6; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + CLASS_2_9843E962B033388B__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9843E962B033388B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9843E962B033388B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9843E962B033388B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9843E962B033388B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9843E962B033388B_TICK_OFFSET))(this, a1);
	}
};
