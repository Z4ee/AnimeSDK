#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Canvas_WillRenderCanvases; }

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int UIExtraCallbacks___O_TypeDefinitionIndex = 42342;

	class UIExtraCallbacks___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Canvas_WillRenderCanvases** StaticGet__0___OnAfterCanvasRebuild()
		{
			return (::UnityEngine::Canvas_WillRenderCanvases**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks___O_TypeDefinitionIndex)->GetStaticField(0x11F0);
		}
	};
}
