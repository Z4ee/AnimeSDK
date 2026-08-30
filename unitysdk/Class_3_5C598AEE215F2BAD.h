#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBattleConditionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C598AEE215F2BAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC362710)
#define CLASS_3_5C598AEE215F2BAD__CTOR_OFFSET UNITYSDK_OFFSET(0xC362580)

inline static constexpr unsigned int Class_3_5C598AEE215F2BAD_TypeDefinitionIndex = 58684;

class Class_3_5C598AEE215F2BAD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBattleConditionProgress*>
{
public:
	::RPG::GameCore::StringHash IKPIIDMENNM; // 0x28
	::RPG::GameCore::StringHash IOCKIKFGCLK; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*))((::PBYTE)hIl2Cpp + CLASS_3_5C598AEE215F2BAD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C598AEE215F2BAD_ONTASKBEGIN_OFFSET))(this);
	}
};
