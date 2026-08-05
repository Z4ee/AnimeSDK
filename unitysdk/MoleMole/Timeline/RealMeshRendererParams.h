#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingMode.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS_LAYERSELECT_OFFSET UNITYSDK_OFFSET(0x1F1A0B50)
#define MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS_SETSKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1F1A12B0)
#define MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS_TRACINGLAYERSELECT_OFFSET UNITYSDK_OFFSET(0x1F1A0C70)
#define MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A1060)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RealMeshRendererParams_TypeDefinitionIndex = 32840;

	class RealMeshRendererParams : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0x10
		::System::Boolean highShadingRate; // 0x14
		::System::Boolean allowOcclusionWhenDynamic; // 0x15
		::UnityEngine::Experimental::Rendering::RayTracingMode rayTracingMode; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* rayTracingLayerMash; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* renderingLayers; // 0x28

		::System::Void _ctor(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS__CTOR_OFFSET))(this, meshRenderer);
		}

		::System::Collections::IEnumerable* LayerSelect()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS_LAYERSELECT_OFFSET))(this);
		}

		::System::Collections::IEnumerable* TracingLayerSelect()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS_TRACINGLAYERSELECT_OFFSET))(this);
		}

		::System::Void SetSkinnedMeshRenderer(::UnityEngine::Renderer* meshRenderer, ::System::Boolean isAuthoredApply)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_REALMESHRENDERERPARAMS_SETSKINNEDMESHRENDERER_OFFSET))(this, meshRenderer, isAuthoredApply);
		}
	};
}
