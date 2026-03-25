#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2D8C42C8A85519BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8844490)
#define CLASS_2_2D8C42C8A85519BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8844530)
#define CLASS_2_2D8C42C8A85519BD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88444E0)
#define CLASS_2_2D8C42C8A85519BD_TICK_OFFSET UNITYSDK_OFFSET(0x8844870)
#define CLASS_2_2D8C42C8A85519BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x8844B70)
#define CLASS_2_2D8C42C8A85519BD__CTOR_OFFSET UNITYSDK_OFFSET(0x8844470)

inline static constexpr unsigned int Class_2_2D8C42C8A85519BD_TypeDefinitionIndex = 44596;

class Class_2_2D8C42C8A85519BD : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2D8C42C8A85519BD_TypeDefinitionIndex)->GetStaticField(0x12FE0);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2D8C42C8A85519BD_TypeDefinitionIndex)->GetStaticField(0x12FE4);
	}
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwitchBattleArea* Field_2_0; // 0x20
	::System::Boolean Field_2_5; // 0x28
	::System::Single Field_2_2; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchBattleArea* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchBattleArea*))((::PBYTE)hIl2Cpp + CLASS_2_2D8C42C8A85519BD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2D8C42C8A85519BD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D8C42C8A85519BD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D8C42C8A85519BD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D8C42C8A85519BD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D8C42C8A85519BD_TICK_OFFSET))(this, a1);
	}
};
