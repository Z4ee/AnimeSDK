#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCharacterAnimFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CD1BF3726CBDCCBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AD8920)
#define CLASS_2_CD1BF3726CBDCCBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AD8960)
#define CLASS_2_CD1BF3726CBDCCBC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19AD8CA0)
#define CLASS_2_CD1BF3726CBDCCBC_TICK_OFFSET UNITYSDK_OFFSET(0x19AD8CF0)
#define CLASS_2_CD1BF3726CBDCCBC__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD8910)

inline static constexpr unsigned int Class_2_CD1BF3726CBDCCBC_TypeDefinitionIndex = 55564;

class Class_2_CD1BF3726CBDCCBC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetCharacterAnimFollow* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterAnimFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterAnimFollow*))((::PBYTE)hIl2Cpp + CLASS_2_CD1BF3726CBDCCBC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD1BF3726CBDCCBC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD1BF3726CBDCCBC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD1BF3726CBDCCBC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CD1BF3726CBDCCBC_TICK_OFFSET))(this, a1);
	}
};
