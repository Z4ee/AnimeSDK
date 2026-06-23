#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarStorySpecailInfoContext; }

#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13348BA0)
#define ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS12_0__OPENMAINBATTLEPARTNERINFOPOP_B__0_OFFSET UNITYSDK_OFFSET(0x13348BB0)

inline static constexpr unsigned int ActivityCommonUIUtil___c__DisplayClass12_0_TypeDefinitionIndex = 44146;

class ActivityCommonUIUtil___c__DisplayClass12_0 : public ::System::Object
{
public:
	::MoleMole::UIAvatarStorySpecailInfoContext* _context; // 0x10
	::System::Int32 questID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void _OpenMainBattlePartnerInfoPop_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL___C__DISPLAYCLASS12_0__OPENMAINBATTLEPARTNERINFOPOP_B__0_OFFSET))(this);
	}
};
