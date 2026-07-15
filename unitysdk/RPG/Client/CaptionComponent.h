#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriManaMovieControllerForUI; }
namespace RPG::Client { class ManaVideoPlayer; }
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CAPTIONCOMPONENT_BIND_OFFSET UNITYSDK_OFFSET(0x1AC5D890)
#define RPG_CLIENT_CAPTIONCOMPONENT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1AC5D3C0)
#define RPG_CLIENT_CAPTIONCOMPONENT_GET__MOVIECONTROLLERFORUI_OFFSET UNITYSDK_OFFSET(0x1AC5D5B0)
#define RPG_CLIENT_CAPTIONCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC5D7A0)
#define RPG_CLIENT_CAPTIONCOMPONENT_REFRESHCAPTION_OFFSET UNITYSDK_OFFSET(0x1AC5D900)
#define RPG_CLIENT_CAPTIONCOMPONENT_SETCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1AC5D840)
#define RPG_CLIENT_CAPTIONCOMPONENT_SETCAPTIONPARAM_OFFSET UNITYSDK_OFFSET(0x1AC5D7F0)
#define RPG_CLIENT_CAPTIONCOMPONENT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0x1AC5CC40)
#define RPG_CLIENT_CAPTIONCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC5CBF0)
#define RPG_CLIENT_CAPTIONCOMPONENT__CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0x1AC5D6E0)
#define RPG_CLIENT_CAPTIONCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5D970)
#define RPG_CLIENT_CAPTIONCOMPONENT__SETCAPTIONALPHA_OFFSET UNITYSDK_OFFSET(0x1AC5D730)
#define RPG_CLIENT_CAPTIONCOMPONENT__SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0x1AC5D630)

namespace RPG::Client
{
	inline static constexpr unsigned int CaptionComponent_TypeDefinitionIndex = 69239;

	class CaptionComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableFadeIn; // 0x18
		::System::Single fadeInTime; // 0x1C
		::System::Single _LastVideoTime; // 0x20
		::RPG::GameCore::VideoCaption* _ActiveCaptionConfig; // 0x28
		::RPG::Client::ManaVideoPlayer* _ManaVideoPlayer; // 0x30
		::RPG::GameCore::VideoCaptionConfig* _VideoCaptionConfig; // 0x38
		::UnityEngine::UI::Text* _TextCaption; // 0x40
		::UnityEngine::CanvasGroup* _CaptionCanvasGroup; // 0x48
		::UnityEngine::Transform* _CaptionRoot; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_UPDATE_OFFSET))(this);
		}

		::System::Void TickCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_TICKCAPTION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ShowCaption(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT__SHOWCAPTION_OFFSET))(this, a1);
		}

		::System::Void _CloseCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT__CLOSECAPTION_OFFSET))(this);
		}

		::System::Void _SetCaptionAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT__SETCAPTIONALPHA_OFFSET))(this, a1);
		}

		::System::Void SetCaptionParam(::RPG::Client::ManaVideoPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ManaVideoPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_SETCAPTIONPARAM_OFFSET))(this, a1);
		}

		::System::Void SetCaptionConfig(::RPG::GameCore::VideoCaptionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VideoCaptionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_SETCAPTIONCONFIG_OFFSET))(this, a1);
		}

		::System::Void Bind(::UnityEngine::UI::Text* a1, ::UnityEngine::CanvasGroup* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::UnityEngine::CanvasGroup*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_BIND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_REFRESHCAPTION_OFFSET))(this);
		}

		::CriWare::CriManaMovieControllerForUI* get__MovieControllerForUI()
		{
			return ((::CriWare::CriManaMovieControllerForUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_GET__MOVIECONTROLLERFORUI_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_currentState()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAPTIONCOMPONENT_GET_CURRENTSTATE_OFFSET))(this);
		}
	};
}
