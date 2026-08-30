#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace RPG::Client { class ScalableRendererBehavior; }
namespace RPG::Client { class ScalableRendererBehavior_RendererPackage; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_SCALABLERENDERER_GET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0xE058BD0)
#define RPG_CLIENT_SCALABLERENDERER_SET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0xE058C40)
#define RPG_CLIENT_SCALABLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xE058C50)

namespace RPG::Client
{
	inline static constexpr unsigned int ScalableRenderer_TypeDefinitionIndex = 70272;

	class ScalableRenderer : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ScalableRendererBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ScalableRendererBehavior_RendererPackage*>* RendererPackages; // 0x30
		::UnityEngine::Bounds Bounds; // 0x38
		::UnityEngine::Rendering::ShadowCastingMode CastShadows; // 0x50
		::System::Boolean ReceiveShadows; // 0x54
		::UnityEngine::Camera* Camera; // 0x58
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get_MaterialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERER_GET_MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void set_MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERER_SET_MATERIALPROPERTYBLOCK_OFFSET))(this, a1);
		}
	};
}
