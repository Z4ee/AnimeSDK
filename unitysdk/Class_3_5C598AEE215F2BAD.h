#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByBattleConditionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C598AEE215F2BAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11908070)
#define CLASS_3_5C598AEE215F2BAD__CTOR_OFFSET UNITYSDK_OFFSET(0x11907EE0)

inline static constexpr unsigned int Class_3_5C598AEE215F2BAD_TypeDefinitionIndex = 47230;

class Class_3_5C598AEE215F2BAD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByBattleConditionProgress*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*))((::PBYTE)hIl2Cpp + CLASS_3_5C598AEE215F2BAD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C598AEE215F2BAD_ONTASKBEGIN_OFFSET))(this);
	}
};
