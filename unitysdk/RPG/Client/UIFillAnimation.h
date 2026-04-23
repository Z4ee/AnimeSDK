#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_UIFILLANIMATION_GET_CURFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xB3E92E0)
#define RPG_CLIENT_UIFILLANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB3E92D0)
#define RPG_CLIENT_UIFILLANIMATION_PLAY_1_OFFSET UNITYSDK_OFFSET(0xB3E91A0)
#define RPG_CLIENT_UIFILLANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0xB3E9140)
#define RPG_CLIENT_UIFILLANIMATION_START_OFFSET UNITYSDK_OFFSET(0xB3E8DB0)
#define RPG_CLIENT_UIFILLANIMATION_STOP_OFFSET UNITYSDK_OFFSET(0xB3E9240)
#define RPG_CLIENT_UIFILLANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xB3E8EE0)
#define RPG_CLIENT_UIFILLANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E92F0)
#define RPG_CLIENT_UIFILLANIMATION__SETUPCMPTVALUE_OFFSET UNITYSDK_OFFSET(0xB3E90C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFillAnimation_TypeDefinitionIndex = 63700;

	class UIFillAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FullFillTime; // 0x18
		::System::Single WaitTime; // 0x1C
		::System::Single FillMin; // 0x20
		::System::Single FillMax; // 0x24
		::System::Action_1<::System::Single>* TickCallback; // 0x28
		::System::Action* FillEndCallback; // 0x30
		::System::Action* WaitEndCallback; // 0x38
		::UnityEngine::UI::Slider* _Slider; // 0x40
		::UnityEngine::UI::Image* _Image; // 0x48
		::System::Single _FillTime; // 0x50
		::System::Boolean _IsPlaying; // 0x54
		::System::Single _Timer; // 0x58
		::System::Single _CurFillAmount; // 0x5C
		::System::Boolean _IsFillEndCallbackInvoked; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_UPDATE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_PLAY_OFFSET))(this);
		}

		::System::Void Play_1(::System::Single fillMin, ::System::Single fillMax, ::System::Single fillTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_PLAY_1_OFFSET))(this, fillMin, fillMax, fillTime);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_STOP_OFFSET))(this);
		}

		::System::Void _SetupCmptValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION__SETUPCMPTVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Single get_CurFillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFILLANIMATION_GET_CURFILLAMOUNT_OFFSET))(this);
		}
	};
}
