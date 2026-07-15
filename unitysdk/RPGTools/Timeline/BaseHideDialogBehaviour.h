#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_GET_CLOSENOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1B346400)
#define RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_GET_UINAME_OFFSET UNITYSDK_OFFSET(0x1B3463E0)
#define RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B346420)
#define RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_SET_CLOSENOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1B346410)
#define RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_SET_UINAME_OFFSET UNITYSDK_OFFSET(0x1B3463F0)
#define RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3464B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BaseHideDialogBehaviour_TypeDefinitionIndex = 46509;

	class BaseHideDialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* _UIName_k__BackingField; // 0x10
		::RPG::Client::NotifyType _CloseNotifyType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_GET_UINAME_OFFSET))(this);
		}

		::System::Void set_UIName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_SET_UINAME_OFFSET))(this, a1);
		}

		::RPG::Client::NotifyType get_CloseNotifyType()
		{
			return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_GET_CLOSENOTIFYTYPE_OFFSET))(this);
		}

		::System::Void set_CloseNotifyType(::RPG::Client::NotifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_SET_CLOSENOTIFYTYPE_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BASEHIDEDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
