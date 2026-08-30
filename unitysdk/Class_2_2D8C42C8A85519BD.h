#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2D8C42C8A85519BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13F0D8E0)
#define CLASS_2_2D8C42C8A85519BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13F0D980)
#define CLASS_2_2D8C42C8A85519BD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13F0D930)
#define CLASS_2_2D8C42C8A85519BD_TICK_OFFSET UNITYSDK_OFFSET(0x13F0DE20)
#define CLASS_2_2D8C42C8A85519BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F0E160)
#define CLASS_2_2D8C42C8A85519BD__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0D8C0)

inline static constexpr unsigned int Class_2_2D8C42C8A85519BD_TypeDefinitionIndex = 55865;

class Class_2_2D8C42C8A85519BD : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_GFCIOHGKKEE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2D8C42C8A85519BD_TypeDefinitionIndex)->GetStaticField(0x14090);
	}
	::RPG::GameCore::SwitchBattleArea* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Boolean IELGJKINIBB; // 0x28
	::System::Boolean ONANKDBEFFM; // 0x29
	::System::Single JGKBGIEHILF; // 0x2C

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
