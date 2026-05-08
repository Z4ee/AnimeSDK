#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMLEVELDATA_GET_HASLEVELUP_OFFSET UNITYSDK_OFFSET(0x14B4B9F0)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14B4BA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController_AnimLevelData_TypeDefinitionIndex = 57153;

	class UIHollowCollectRewardDialogPopWindowController_AnimLevelData : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData* m_after; // 0x10
		::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData* m_before; // 0x18

		::System::Void _ctor(::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData* before, ::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData* after)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData*, ::MoleMole::UIHollowCollectRewardDialogPopWindowController_AnimSingleLevelData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMLEVELDATA__CTOR_OFFSET))(this, before, after);
		}

		::System::Boolean get_HasLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER_ANIMLEVELDATA_GET_HASLEVELUP_OFFSET))(this);
		}
	};
}
