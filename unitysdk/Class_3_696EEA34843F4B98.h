#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBattleTargetID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_696EEA34843F4B98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA82040)
#define CLASS_3_696EEA34843F4B98__CTOR_OFFSET UNITYSDK_OFFSET(0xBA81F60)

inline static constexpr unsigned int Class_3_696EEA34843F4B98_TypeDefinitionIndex = 58685;

class Class_3_696EEA34843F4B98 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBattleTargetID*>
{
public:
	::RPG::GameCore::StringHash EGPEIOOGMKD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*))((::PBYTE)hIl2Cpp + CLASS_3_696EEA34843F4B98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_696EEA34843F4B98_ONTASKBEGIN_OFFSET))(this);
	}
};
