#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIInLevelQTEBtnPanelChildWindowController; }

#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEINOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x164151B0)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x16415330)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTETWEENBARANIMEVENT_OFFSET UNITYSDK_OFFSET(0x16415010)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_SETMONOQTESWITCHAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x16414FC0)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164154D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoQTEBtnAnimEvtsHandler_TypeDefinitionIndex = 42377;

	class MonoQTEBtnAnimEvtsHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::UIInLevelQTEBtnPanelChildWindowController* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void SetMonoQTESwitchAvatarPanel(::MoleMole::UIInLevelQTEBtnPanelChildWindowController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelQTEBtnPanelChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_SETMONOQTESWITCHAVATARPANEL_OFFSET))(this, a1);
		}

		::System::Void PlayQTETweenBarAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTETWEENBARANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeInOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEINOVERANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeOutOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET))(this);
		}
	};
}
