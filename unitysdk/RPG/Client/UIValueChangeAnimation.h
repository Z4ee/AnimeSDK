#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIValueChangeMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_UIVALUECHANGEANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DDBB0B0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_CONTINUE_1_OFFSET UNITYSDK_OFFSET(0x1DDBB850)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_CONTINUE_OFFSET UNITYSDK_OFFSET(0x1DDBB610)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1DDBBC20)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1DDBB3C0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x1DDBB300)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDBBAD0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_SETSHIFTRATIO_OFFSET UNITYSDK_OFFSET(0x1DDBB570)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_SETVALUECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DDBBA80)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0x1DDBB940)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DDBB160)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBBC30)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__EVALUATE_OFFSET UNITYSDK_OFFSET(0x1DDBB260)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__GETVALIDPLAYSPEED_OFFSET UNITYSDK_OFFSET(0x1DDBBA10)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__PLAYNEXTANIMCLIP_OFFSET UNITYSDK_OFFSET(0x1DDBBB20)

namespace RPG::Client
{
	inline static constexpr unsigned int UIValueChangeAnimation_TypeDefinitionIndex = 69082;

	class UIValueChangeAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single DEFAULT_PLAY_SPEED; // 0x0
		::System::Single StartValue; // 0x18
		::System::Single EndValue; // 0x1C
		::System::Single Duration; // 0x20
		::UnityEngine::AnimationCurve* AnimationCurve; // 0x28
		::RPG::Client::UIValueChangeMode Mode; // 0x30
		::System::Boolean _IsPlaying; // 0x34
		::System::Single _PlaySpeed; // 0x38
		::System::Single _EndTimeRatio; // 0x3C
		::System::Single _CurTimeRatio; // 0x40
		::System::Single _TimeRatioStep; // 0x44
		::System::Single _ValueChangeMultiper; // 0x48
		::System::Single _CurValue; // 0x4C
		::System::Action_1<::System::Single>* _OnValueChangeCallback; // 0x50
		::System::Action* _OnFnishCallback; // 0x58
		::System::Collections::Generic::Queue_1<::System::Action*>* _AnimSequence; // 0x60
		::System::Collections::Generic::Queue_1<::System::Single>* _EndValueQueue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_PLAY_OFFSET))(this);
		}

		::System::Void Play_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_PLAY_1_OFFSET))(this, a1);
		}

		::System::Void Continue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_CONTINUE_OFFSET))(this, a1);
		}

		::System::Void Continue_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_CONTINUE_1_OFFSET))(this, a1, a2);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_STOP_OFFSET))(this);
		}

		::System::Void SetShiftRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_SETSHIFTRATIO_OFFSET))(this, a1);
		}

		::System::Void SetValueChangeCallback(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_SETVALUECHANGECALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_SETFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _Evaluate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION__EVALUATE_OFFSET))(this);
		}

		::System::Void _PlayNextAnimClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION__PLAYNEXTANIMCLIP_OFFSET))(this);
		}

		static ::System::Single _GetValidPlaySpeed(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION__GETVALIDPLAYSPEED_OFFSET))(a1);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_GET_ISPLAYING_OFFSET))(this);
		}
	};
}
