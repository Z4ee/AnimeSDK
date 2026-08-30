#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL_PLAY_OFFSET UNITYSDK_OFFSET(0xCEFAE40)
#define RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFB1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlyControl_TypeDefinitionIndex = 64022;

	class ExpeditionBattleFlyControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _StartTransform; // 0x18
		::UnityEngine::RectTransform* _ControlTransform; // 0x20
		::UnityEngine::RectTransform* _EndTransform; // 0x28
		::UnityEngine::Animation* _Animation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLYCONTROL_PLAY_OFFSET))(this, a1);
		}
	};
}
