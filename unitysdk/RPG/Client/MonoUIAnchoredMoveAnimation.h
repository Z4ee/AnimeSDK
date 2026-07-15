#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoUIAnchoredMoveAnimation_CurveType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }

#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1A362530)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1A362220)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_PLAYATCURPOS_OFFSET UNITYSDK_OFFSET(0x1A362470)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x1A362330)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A361ED0)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A362540)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__GETCURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1A362280)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__PLAY_OFFSET UNITYSDK_OFFSET(0x1A362410)
#define RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__STOP_OFFSET UNITYSDK_OFFSET(0x1A3621B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIAnchoredMoveAnimation_TypeDefinitionIndex = 65895;

	class MonoUIAnchoredMoveAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 _StartPos; // 0x18
		::UnityEngine::Vector2 _PosDelta; // 0x20
		::System::Single _Duration; // 0x28
		::System::Action* _EndCallback; // 0x30
		::System::Boolean _IsPlaying; // 0x38
		::System::Single _Timer; // 0x3C
		::RPG::Client::MonoUIAnchoredMoveAnimation_CurveType Curve; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayAtCurPos(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_PLAYATCURPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__PLAY_OFFSET))(this);
		}

		::System::Void _Stop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__STOP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION_GET_PROGRESS_OFFSET))(this);
		}

		::System::Single _GetCurveValue(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUIANCHOREDMOVEANIMATION__GETCURVEVALUE_OFFSET))(this, a1);
		}
	};
}
