#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIMeta_UIBlurMode.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DOFMethod.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIPartialBlur; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UIMETA_ADDBLURPARTIALAREA_OFFSET UNITYSDK_OFFSET(0x17B62700)
#define RPG_CLIENT_UIMETA_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x17B634C0)
#define RPG_CLIENT_UIMETA_GET_ENABLEBLURFULL_OFFSET UNITYSDK_OFFSET(0x17B62660)
#define RPG_CLIENT_UIMETA_GET_ENABLEBLURPARTIAL_OFFSET UNITYSDK_OFFSET(0x17B626B0)
#define RPG_CLIENT_UIMETA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17B63200)
#define RPG_CLIENT_UIMETA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17B63130)
#define RPG_CLIENT_UIMETA_REMOVEBLURPARTIALAREA_OFFSET UNITYSDK_OFFSET(0x17B629A0)
#define RPG_CLIENT_UIMETA_SETUPBLURPARTIALAREA_OFFSET UNITYSDK_OFFSET(0x17B62D50)
#define RPG_CLIENT_UIMETA_SPAWNED_OFFSET UNITYSDK_OFFSET(0x17B63480)
#define RPG_CLIENT_UIMETA_SWITCHBLURPARTIALAREALAYER_OFFSET UNITYSDK_OFFSET(0x17B62F50)
#define RPG_CLIENT_UIMETA_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x17B632D0)
#define RPG_CLIENT_UIMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B63530)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMeta_TypeDefinitionIndex = 72992;

	class UIMeta : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single MaxFocusDistance; // 0x0
		// static const ::System::Single MinFocusDistance; // 0x0
		// static const ::System::Single MaxFStop; // 0x0
		// static const ::System::Single MinFStop; // 0x0
		// static const ::System::Single MaxSensorWidth; // 0x0
		// static const ::System::Single MinSensorWidth; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::UIPartialBlur*>* BlurPartialAreas; // 0x18
		::RPG::Client::UIMeta_UIBlurMode BlurBackground; // 0x20
		::System::Single BlurScale; // 0x24
		::System::Single Brightness; // 0x28
		::System::Single BlurPartialAlpha; // 0x2C
		::System::Boolean EnableVignette; // 0x30
		::UnityEngine::Color VignetteColor; // 0x34
		::UnityEngine::Vector2 VignetteCenter; // 0x44
		::System::Single VignetteIntensity; // 0x4C
		::System::Single VignetteSmoothness; // 0x50
		::System::Boolean VignetteRounded; // 0x54
		::System::Boolean EnableDOF; // 0x55
		::RPG::CustomRP::RPGDepthOfField_CoCMethod CoCMethod; // 0x58
		::RPG::CustomRP::RPGDepthOfField_DOFMethod DOFMethod; // 0x5C
		::System::Single FocusDistance; // 0x60
		::System::Single fStop; // 0x64
		::System::Single SensorWidth; // 0x68
		::System::Single NearFocalRegion; // 0x6C
		::System::Single FarFocalRegion; // 0x70
		::System::Single NearTransitionRegion; // 0x74
		::System::Single FarTransitionRegion; // 0x78
		::System::Boolean DisableMainCamera; // 0x7C
		::System::Boolean BlurFullDisableUI3DCamera; // 0x7D
		::System::Boolean SetFilteringAudio; // 0x7E
		::System::String* AudioEventOnStart; // 0x80
		::System::String* AudioEventOnExit; // 0x88
		::System::Boolean BlurPartialAreasDirty; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableBlurFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_GET_ENABLEBLURFULL_OFFSET))(this);
		}

		::System::Boolean get_EnableBlurPartial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_GET_ENABLEBLURPARTIAL_OFFSET))(this);
		}

		::System::Void AddBlurPartialArea(::RPG::Client::UIPartialBlur* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPartialBlur*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_ADDBLURPARTIALAREA_OFFSET))(this, a1);
		}

		::System::Void RemoveBlurPartialArea(::RPG::Client::UIPartialBlur* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPartialBlur*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_REMOVEBLURPARTIALAREA_OFFSET))(this, a1);
		}

		::System::Void SetupBlurPartialArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_SETUPBLURPARTIALAREA_OFFSET))(this);
		}

		::System::Void SwitchBlurPartialAreaLayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_SWITCHBLURPARTIALAREALAYER_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_ONDISABLE_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_TRIGGERAUDIOEVENT_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMETA_DESPAWNED_OFFSET))(this);
		}
	};
}
