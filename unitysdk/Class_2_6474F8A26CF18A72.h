#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClearAISkillUseRecord; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_6474F8A26CF18A72_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152BE6D0)
#define CLASS_2_6474F8A26CF18A72_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152BE710)
#define CLASS_2_6474F8A26CF18A72_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152BE840)
#define CLASS_2_6474F8A26CF18A72_TICK_OFFSET UNITYSDK_OFFSET(0x152BE890)
#define CLASS_2_6474F8A26CF18A72__CTOR_OFFSET UNITYSDK_OFFSET(0x152BE6C0)

inline static constexpr unsigned int Class_2_6474F8A26CF18A72_TypeDefinitionIndex = 55164;

class Class_2_6474F8A26CF18A72 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ClearAISkillUseRecord* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
