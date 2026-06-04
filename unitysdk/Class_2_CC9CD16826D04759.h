#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifyDamageData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CC9CD16826D04759_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14333410)
#define CLASS_2_CC9CD16826D04759_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14333450)
#define CLASS_2_CC9CD16826D04759_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14333650)
#define CLASS_2_CC9CD16826D04759_TICK_OFFSET UNITYSDK_OFFSET(0x143336A0)
#define CLASS_2_CC9CD16826D04759__CTOR_OFFSET UNITYSDK_OFFSET(0x14333400)

inline static constexpr unsigned int Class_2_CC9CD16826D04759_TypeDefinitionIndex = 51554;

class Class_2_CC9CD16826D04759 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ModifyDamageData* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyDamageData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyDamageData*))((::PBYTE)hIl2Cpp + CLASS_2_CC9CD16826D04759__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9CD16826D04759_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9CD16826D04759_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9CD16826D04759_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC9CD16826D04759_TICK_OFFSET))(this, a1);
	}
};
