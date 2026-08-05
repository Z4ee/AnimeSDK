#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_848BA58F81F05F34_1;
namespace MoleMole { class UIGalgameReviewRowWidgetController; }

#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D95940)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS21_0__PLAYAUDIOEVENTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x17D95950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewRowWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 57396;

	class UIGalgameReviewRowWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgameReviewRowWidgetController* __4__this; // 0x10
		::Class_3_848BA58F81F05F34_1* __9__0; // 0x18
		::System::Boolean isPlayedAfterVO; // 0x20
		::System::Int32 currPlayingEventCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAudioEventList_b__0(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS21_0__PLAYAUDIOEVENTLIST_B__0_OFFSET))(this, pendingId, playingId);
		}
	};
}
