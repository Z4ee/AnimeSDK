#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseDone; }

#define CLASS_2_A2B1C26F1C809854_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17051FF0)
#define CLASS_2_A2B1C26F1C809854_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17052030)
#define CLASS_2_A2B1C26F1C809854_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17052100)
#define CLASS_2_A2B1C26F1C809854_TICK_OFFSET UNITYSDK_OFFSET(0x17052150)
#define CLASS_2_A2B1C26F1C809854__CTOR_OFFSET UNITYSDK_OFFSET(0x17051FE0)

inline static constexpr unsigned int Class_2_A2B1C26F1C809854_TypeDefinitionIndex = 56345;

class Class_2_A2B1C26F1C809854 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseDone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseDone*))((::PBYTE)hIl2Cpp + CLASS_2_A2B1C26F1C809854__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2B1C26F1C809854_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2B1C26F1C809854_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2B1C26F1C809854_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A2B1C26F1C809854_TICK_OFFSET))(this, a1);
	}
};
