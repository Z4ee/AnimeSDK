#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BAT/BATRendererBehavior_CullingMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace RPG::Client::BAT { class BATControllerBase; }
namespace RPG::Client::BAT { class BATPrototype; }
namespace RPG::Client::BAT { class BATRendererBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_BAT_BATRENDERER_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xB39E5C0)
#define RPG_CLIENT_BAT_BATRENDERER_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xB39E510)
#define RPG_CLIENT_BAT_BATRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xB39E6F0)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATRenderer_TypeDefinitionIndex = 68765;

	class BATRenderer : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::BAT::BATRendererBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BAT::BATPrototype*>* Prototypes; // 0x30
		::RPG::Client::BAT::BATControllerBase* Controller; // 0x38
		::RPG::Client::BAT::BATRendererBehavior_CullingMode Culling; // 0x40
		::System::Single CullingSafetyPadding; // 0x44
		::UnityEngine::Rendering::ShadowCastingMode CastShadows; // 0x48
		::System::Boolean ReceiveShadows; // 0x4C
		::UnityEngine::Camera* Camera; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERER__CTOR_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERER_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATRENDERER_GET_ARTBOUNDFULL_OFFSET))(this);
		}
	};
}
