#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepTutorialOPType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightPrepTutorialNodeVisibleParam; }
namespace RPG::GameCore { class GridFightPrepTutorialPopupPanelVisibleParam; }
namespace RPG::GameCore { class GridFightPrepTutorialRemoveEquipTrackParam; }
namespace RPG::GameCore { class GridFightPrepTutorialSetGoldNumParam; }
namespace RPG::GameCore { class GridFightPrepTutorialSubToastHintParam; }
namespace RPG::GameCore { class GridFightPrepTutorialToastHintParam; }
namespace RPG::GameCore { class GridFightPrepTutorialTopHintParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1551FC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialOPParam_TypeDefinitionIndex = 51115;

	class GridFightPrepTutorialOPParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPrepTutorialPopupPanelVisibleParam* PopupPanelVisibleParam; // 0x10
		::RPG::GameCore::GridFightPrepTutorialTopHintParam* TopHintParam; // 0x18
		::RPG::GameCore::GridFightPrepTutorialToastHintParam* ToastHintParam; // 0x20
		::RPG::GameCore::GridFightPrepTutorialNodeVisibleParam* NodeVisibleParam; // 0x28
		::RPG::GameCore::GridFightPrepTutorialSetGoldNumParam* SetGoldNumParam; // 0x30
		::RPG::GameCore::GridFightPrepTutorialRemoveEquipTrackParam* RemoveEquipTrackParam; // 0x38
		::RPG::GameCore::GridFightPrepTutorialSubToastHintParam* SubToastHintParam; // 0x40
		::RPG::GameCore::GridFightPrepTutorialOPType TutorialOpType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALOPPARAM__CTOR_OFFSET))(this);
		}
	};
}
