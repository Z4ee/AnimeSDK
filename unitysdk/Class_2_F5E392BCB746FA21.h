#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_56FF45D7B2C55655;
namespace RPG::GameCore { class SwitchEffectBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F5E392BCB746FA21_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C350A0)
#define CLASS_2_F5E392BCB746FA21_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C35130)
#define CLASS_2_F5E392BCB746FA21_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C350E0)
#define CLASS_2_F5E392BCB746FA21_TICK_OFFSET UNITYSDK_OFFSET(0x10C352D0)
#define CLASS_2_F5E392BCB746FA21__CTOR_OFFSET UNITYSDK_OFFSET(0x10C35090)

inline static constexpr unsigned int Class_2_F5E392BCB746FA21_TypeDefinitionIndex = 44607;

class Class_2_F5E392BCB746FA21 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::Class_1_56FF45D7B2C55655* Field_2_0; // 0x20
	::RPG::GameCore::SwitchEffectBattleArea* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + CLASS_2_F5E392BCB746FA21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E392BCB746FA21_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E392BCB746FA21_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E392BCB746FA21_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5E392BCB746FA21_TICK_OFFSET))(this, a1);
	}
};
