#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DefineDynamicStringByAssistantID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_089948332616171C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9341230)
#define CLASS_2_089948332616171C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9341270)
#define CLASS_2_089948332616171C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x93412C0)
#define CLASS_2_089948332616171C_TICK_OFFSET UNITYSDK_OFFSET(0x9341310)
#define CLASS_2_089948332616171C__CTOR_OFFSET UNITYSDK_OFFSET(0x9341220)

inline static constexpr unsigned int Class_2_089948332616171C_TypeDefinitionIndex = 50729;

class Class_2_089948332616171C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DefineDynamicStringByAssistantID* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineDynamicStringByAssistantID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineDynamicStringByAssistantID*))((::PBYTE)hIl2Cpp + CLASS_2_089948332616171C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_089948332616171C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_089948332616171C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_089948332616171C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_089948332616171C_TICK_OFFSET))(this, a1);
	}
};
