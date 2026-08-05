#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoQTESwitchAvatarPanel; }

#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEINOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x1909BD90)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x1909BF10)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTETWEENBARANIMEVENT_OFFSET UNITYSDK_OFFSET(0x1909BBF0)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_SETMONOQTESWITCHAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x1909BBA0)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1909C0B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoQTEBtnCountdown_TypeDefinitionIndex = 50469;

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
