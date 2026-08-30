#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifySkillPropertyByName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A6F20ECA92300058_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195D3A80)
#define CLASS_2_A6F20ECA92300058_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195D3AC0)
#define CLASS_2_A6F20ECA92300058_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x195D4170)
#define CLASS_2_A6F20ECA92300058_TICK_OFFSET UNITYSDK_OFFSET(0x195D41C0)
#define CLASS_2_A6F20ECA92300058__CTOR_OFFSET UNITYSDK_OFFSET(0x195D3A70)

inline static constexpr unsigned int Class_2_A6F20ECA92300058_TypeDefinitionIndex = 55415;

class Class_2_A6F20ECA92300058 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ModifySkillPropertyByName* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySkillPropertyByName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySkillPropertyByName*))((::PBYTE)hIl2Cpp + CLASS_2_A6F20ECA92300058__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6F20ECA92300058_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6F20ECA92300058_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6F20ECA92300058_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6F20ECA92300058_TICK_OFFSET))(this, a1);
	}
};
