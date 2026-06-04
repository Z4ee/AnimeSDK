#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIValueChangeMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_UIVALUECHANGEANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0xCBA3AE0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_CONTINUE_OFFSET UNITYSDK_OFFSET(0xCBA3DF0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xCBA42A0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xCBA3D30)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_SETFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xCBA4150)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_SETVALUECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xCBA4100)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0xCBA4030)
#define RPG_CLIENT_UIVALUECHANGEANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xCBA3B90)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA42B0)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__EVALUATE_OFFSET UNITYSDK_OFFSET(0xCBA3C90)
#define RPG_CLIENT_UIVALUECHANGEANIMATION__PLAYNEXTANIMCLIP_OFFSET UNITYSDK_OFFSET(0xCBA41A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIValueChangeAnimation_TypeDefinitionIndex = 64642;

	class UIValueChangeAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single StartValue; // 0x18
		::System::Single EndValue; // 0x1C
		::System::Single Duration; // 0x20
		::UnityEngine::AnimationCurve* AnimationCurve; // 0x28
		::RPG::Client::UIValueChangeMode Mode; // 0x30
		::System::Boolean _IsPlaying; // 0x34
		::System::Single _EndTimeRatio; // 0x38
		::System::Single _CurTimeRatio; // 0x3C
		::System::Single _TimeRatioStep; // 0x40
		::System::Single _ValueChangeMultiper; // 0x44
		::System::Single _CurValue; // 0x48
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

		::System::Void Continue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_CONTINUE_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_STOP_OFFSET))(this);
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

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVALUECHANGEANIMATION_GET_ISPLAYING_OFFSET))(this);
		}
	};
}
