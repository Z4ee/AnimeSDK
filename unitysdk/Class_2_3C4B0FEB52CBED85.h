#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3C4B0FEB52CBED85_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C62FA0)
#define CLASS_2_3C4B0FEB52CBED85_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x9C628E0)
#define CLASS_2_3C4B0FEB52CBED85_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9C63100)
#define CLASS_2_3C4B0FEB52CBED85_ONSKIP_OFFSET UNITYSDK_OFFSET(0x9C630B0)
#define CLASS_2_3C4B0FEB52CBED85_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9C62900)
#define CLASS_2_3C4B0FEB52CBED85_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9C62FE0)
#define CLASS_2_3C4B0FEB52CBED85_TICK_OFFSET UNITYSDK_OFFSET(0x9C63030)
#define CLASS_2_3C4B0FEB52CBED85__CTOR_OFFSET UNITYSDK_OFFSET(0x9C628F0)

inline static constexpr unsigned int Class_2_3C4B0FEB52CBED85_TypeDefinitionIndex = 46779;

class Class_2_3C4B0FEB52CBED85 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterHeadLookAt* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadLookAt*))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3C4B0FEB52CBED85_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
