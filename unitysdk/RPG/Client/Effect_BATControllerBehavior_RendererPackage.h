#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_RENDERERPACKAGE_METHOD_1_2BAD32BC896505A6_OFFSET UNITYSDK_OFFSET(0xCDCE850)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_RENDERERPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDCEB40)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BATControllerBehavior_RendererPackage_TypeDefinitionIndex = 70396;

	class Effect_BATControllerBehavior_RendererPackage : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x10
		::System::Int32 VertexCount; // 0x18
		::UnityEngine::Texture* BoneIndicesWeightsTexture; // 0x20
		::UnityEngine::MaterialPropertyBlock* _PropertyBlock; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_RENDERERPACKAGE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_2BAD32BC896505A6(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_RENDERERPACKAGE_METHOD_1_2BAD32BC896505A6_OFFSET))(this, a1, a2, a3);
		}
	};
}
