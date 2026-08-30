#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Side_DisablePlayerLock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5E3F592E86409339_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB79FE60)
#define CLASS_3_5E3F592E86409339_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB79FEF0)
#define CLASS_3_5E3F592E86409339__CTOR_OFFSET UNITYSDK_OFFSET(0xB79FDA0)

inline static constexpr unsigned int Class_3_5E3F592E86409339_TypeDefinitionIndex = 52514;

class Class_3_5E3F592E86409339 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_DisablePlayerLock*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* IFLLHLEDHLM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_DisablePlayerLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_DisablePlayerLock*))((::PBYTE)hIl2Cpp + CLASS_3_5E3F592E86409339__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E3F592E86409339_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E3F592E86409339_ONTASKRESET_OFFSET))(this);
	}
};
