#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyEventCharacterTriggerFreeStyle; }

#define CLASS_2_024241A4193F48CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4CFBA0)
#define CLASS_2_024241A4193F48CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD4CFBF0)
#define CLASS_2_024241A4193F48CD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD4CFDD0)
#define CLASS_2_024241A4193F48CD_TICK_OFFSET UNITYSDK_OFFSET(0xD4CFE20)
#define CLASS_2_024241A4193F48CD__CTOR_OFFSET UNITYSDK_OFFSET(0xD4CFB90)

inline static constexpr unsigned int Class_2_024241A4193F48CD_TypeDefinitionIndex = 53424;

class Class_2_024241A4193F48CD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
	::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyEventCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_2_024241A4193F48CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_024241A4193F48CD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_024241A4193F48CD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_024241A4193F48CD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_024241A4193F48CD_TICK_OFFSET))(this, a1);
	}
};
