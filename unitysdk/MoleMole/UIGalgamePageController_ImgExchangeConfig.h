#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameImgExchangeType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGalgamePageController_ImgExchangeTypeParams; }
namespace MoleMole::GalGame { class GalGameDynamicPictureDisplayAction; }
namespace MoleMole::GalGame { class GalGamePictureDisplayAction; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_IMGEXCHANGECONFIG_FROMDYNAMICPICTUREACTION_OFFSET UNITYSDK_OFFSET(0x184520F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_IMGEXCHANGECONFIG_FROMPICTUREACTION_OFFSET UNITYSDK_OFFSET(0x18452060)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_ImgExchangeConfig_TypeDefinitionIndex = 54886;

	struct alignas(8) UIGalgamePageController_ImgExchangeConfig
	{
		::MoleMole::GalGame::GalGameImgExchangeType exchangeType; // 0x10
		::MoleMole::UIGalgamePageController_ImgExchangeTypeParams* typeParams; // 0x18

		static ::MoleMole::UIGalgamePageController_ImgExchangeConfig FromPictureAction(::MoleMole::GalGame::GalGamePictureDisplayAction* action)
		{
			return ((::MoleMole::UIGalgamePageController_ImgExchangeConfig(*)(::MoleMole::GalGame::GalGamePictureDisplayAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_IMGEXCHANGECONFIG_FROMPICTUREACTION_OFFSET))(action);
		}

		static ::MoleMole::UIGalgamePageController_ImgExchangeConfig FromDynamicPictureAction(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction* action)
		{
			return ((::MoleMole::UIGalgamePageController_ImgExchangeConfig(*)(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_IMGEXCHANGECONFIG_FROMDYNAMICPICTUREACTION_OFFSET))(action);
		}
	};
}
