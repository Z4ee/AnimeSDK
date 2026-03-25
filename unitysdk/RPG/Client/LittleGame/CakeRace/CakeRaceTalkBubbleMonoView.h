#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x9989F90)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_FADEIN_OFFSET UNITYSDK_OFFSET(0x9989F20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x998A040)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_SETTALKTEXTID_OFFSET UNITYSDK_OFFSET(0x9989EB0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_SETTALKTEXT_OFFSET UNITYSDK_OFFSET(0x9989E00)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x998A120)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x998A310)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW__TRYCOMPLETEFADEOUT_OFFSET UNITYSDK_OFFSET(0x998A0C0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW__TRYFADEOUT_OFFSET UNITYSDK_OFFSET(0x998A1A0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW___TRYFADEOUT_B__13_0_OFFSET UNITYSDK_OFFSET(0x998A320)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceTalkBubbleMonoView_TypeDefinitionIndex = 63615;

	class CakeRaceTalkBubbleMonoView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Duration; // 0x18
		::System::String* _FadeInAnimName; // 0x20
		::System::String* _FadeOutAnimName; // 0x28
		::UnityEngine::Animation* _Anim; // 0x30
		::UnityEngine::UI::Text* _Text; // 0x38
		::System::Single _Timer; // 0x40
		::System::Boolean _IsFadeOut; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetTalkText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_SETTALKTEXT_OFFSET))(this, text);
		}

		::System::Void SetTalkTextID(::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_SETTALKTEXTID_OFFSET))(this, textID);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_FADEIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void _TryFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW__TRYFADEOUT_OFFSET))(this);
		}

		::System::Void _TryCompleteFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW__TRYCOMPLETEFADEOUT_OFFSET))(this);
		}

		::System::Void __TryFadeOut_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETALKBUBBLEMONOVIEW___TRYFADEOUT_B__13_0_OFFSET))(this);
		}
	};
}
