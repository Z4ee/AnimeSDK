#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/NESDataCacheBase.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace Coffee::UIExtensions { class UIParticleRendererDataIniter; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define MOLEMOLE_EFFECTSIMULATE_NESUIDATACACHE_METHOD_2_96D58F367387B136_OFFSET UNITYSDK_OFFSET(0x153EB7D0)
#define MOLEMOLE_EFFECTSIMULATE_NESUIDATACACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x153EBDA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int NESUIDataCache_TypeDefinitionIndex = 39641;

	class NESUIDataCache : public ::MoleMole::EffectSimulate::NESDataCacheBase
	{
	public:
		::Coffee::UIExtensions::UIParticleRenderer* UIParticleRendererComCache; // 0x10
		::UnityEngine::RectTransform* rectTransformCache; // 0x18
		::UnityEngine::CanvasRenderer* canvasRenderCache; // 0x20
		::UnityEngine::UI::Image* imageComCache; // 0x28
		::UnityEngine::UI::MaskableGraphic* maskableGraphicCache; // 0x30
		::Coffee::UIExtensions::UIParticle* UIParticleCache; // 0x38
		::Coffee::UIExtensions::UIParticleRendererDataIniter* UIParticleRendererDataIniterCache; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NESUIDATACACHE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_96D58F367387B136(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_NESUIDATACACHE_METHOD_2_96D58F367387B136_OFFSET))(this, a1);
		}
	};
}
