#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoQTESwitchAvatarPanel; }

#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEINOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x15B3FB60)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x15B3FCE0)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTETWEENBARANIMEVENT_OFFSET UNITYSDK_OFFSET(0x15B3F9C0)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_SETMONOQTESWITCHAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x15B3F970)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3FE80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoQTEBtnCountdown_TypeDefinitionIndex = 39797;

	class MonoQTEBtnCountdown : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoQTESwitchAvatarPanel* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Void SetMonoQTESwitchAvatarPanel(::MoleMole::MonoQTESwitchAvatarPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoQTESwitchAvatarPanel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_SETMONOQTESWITCHAVATARPANEL_OFFSET))(this, a1);
		}

		::System::Void PlayQTETweenBarAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTETWEENBARANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeInOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEINOVERANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeOutOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET))(this);
		}
	};
}
