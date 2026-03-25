#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Rendering { class VolumeProxy; }

#define RPG_CLIENT_UIMAPCUTSCENETWEEN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA708A80)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA708860)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_RESET_OFFSET UNITYSDK_OFFSET(0xA7088B0)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_SETMAPCUTSCENE_OFFSET UNITYSDK_OFFSET(0xA708AD0)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA708A40)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_UPDATECOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0xA708D70)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_UPDATERADIALBLURPARAMS_OFFSET UNITYSDK_OFFSET(0xA708F20)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA7090B0)
#define RPG_CLIENT_UIMAPCUTSCENETWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0xA709100)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMapCutSceneTween_TypeDefinitionIndex = 59894;

	class UIMapCutSceneTween : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _TweenDuration; // 0x18
		::System::Boolean _ColorGradingTweening; // 0x1C
		::System::Single _ColorGradingTweenFactor; // 0x20
		::UnityEngine::Color _LevelColorBegin; // 0x24
		::UnityEngine::Color _LevelColorEnd; // 0x34
		::System::Boolean _RadialBlurTweening; // 0x44
		::System::Single _RadialBlurTweenFactor; // 0x48
		::System::Single _BlurRadiusBegin; // 0x4C
		::System::Single _BlurRadiusEnd; // 0x50
		::UnityEngine::Rendering::VolumeProxy* _VolumeProxy; // 0x58
		::UnityEngine::Events::UnityEvent* OnCutSceneEnd; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetMapCutScene(::System::Single radialBlurX, ::System::Single radialBlurY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_SETMAPCUTSCENE_OFFSET))(this, radialBlurX, radialBlurY);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateColorGradingParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_UPDATECOLORGRADINGPARAMS_OFFSET))(this);
		}

		::System::Void UpdateRadialBlurParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMAPCUTSCENETWEEN_UPDATERADIALBLURPARAMS_OFFSET))(this);
		}
	};
}
