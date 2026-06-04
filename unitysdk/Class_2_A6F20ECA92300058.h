#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifySkillPropertyByName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A6F20ECA92300058_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA62E8D0)
#define CLASS_2_A6F20ECA92300058_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA62E910)
#define CLASS_2_A6F20ECA92300058_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA62EFC0)
#define CLASS_2_A6F20ECA92300058_TICK_OFFSET UNITYSDK_OFFSET(0xA62F010)
#define CLASS_2_A6F20ECA92300058__CTOR_OFFSET UNITYSDK_OFFSET(0xA62E8C0)

inline static constexpr unsigned int Class_2_A6F20ECA92300058_TypeDefinitionIndex = 51573;

class Class_2_A6F20ECA92300058 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ModifySkillPropertyByName* Field_2_1; // 0x20

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
