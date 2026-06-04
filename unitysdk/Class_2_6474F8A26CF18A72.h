#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClearAISkillUseRecord; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6474F8A26CF18A72_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1354BA60)
#define CLASS_2_6474F8A26CF18A72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1354BAA0)
#define CLASS_2_6474F8A26CF18A72_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1354BB70)
#define CLASS_2_6474F8A26CF18A72_TICK_OFFSET UNITYSDK_OFFSET(0x1354BBC0)
#define CLASS_2_6474F8A26CF18A72__CTOR_OFFSET UNITYSDK_OFFSET(0x1354BA50)

inline static constexpr unsigned int Class_2_6474F8A26CF18A72_TypeDefinitionIndex = 51357;

class Class_2_6474F8A26CF18A72 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ClearAISkillUseRecord* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearAISkillUseRecord* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearAISkillUseRecord*))((::PBYTE)hIl2Cpp + CLASS_2_6474F8A26CF18A72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6474F8A26CF18A72_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6474F8A26CF18A72_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6474F8A26CF18A72_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6474F8A26CF18A72_TICK_OFFSET))(this, a1);
	}
};
