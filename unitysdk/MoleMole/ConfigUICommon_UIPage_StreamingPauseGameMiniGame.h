#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_UIPage_StreamingPagePauseGameLogic.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }

#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_STREAMINGPAUSEGAMEMINIGAME_ISNOPAUSE_OFFSET UNITYSDK_OFFSET(0x1103FD60)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_STREAMINGPAUSEGAMEMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1103FED0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_UIPage_StreamingPauseGameMiniGame_TypeDefinitionIndex = 52157;

	class ConfigUICommon_UIPage_StreamingPauseGameMiniGame : public ::MoleMole::ConfigUICommon_UIPage_StreamingPagePauseGameLogic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_STREAMINGPAUSEGAMEMINIGAME__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNoPause(::MoleMole::UIWindowController* baseController, ::MoleMole::UIControllerContextBase* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_STREAMINGPAUSEGAMEMINIGAME_ISNOPAUSE_OFFSET))(this, baseController, context);
		}
	};
}
