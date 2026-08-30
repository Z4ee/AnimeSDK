#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_BAT_BATPROTOTYPE_RENDERERPACKAGE_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0xC8B68E0)
#define RPG_CLIENT_BAT_BATPROTOTYPE_RENDERERPACKAGE_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xC8B6880)
#define RPG_CLIENT_BAT_BATPROTOTYPE_RENDERERPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B6960)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATPrototype_RendererPackage_TypeDefinitionIndex = 73565;

	class BATPrototype_RendererPackage : public ::System::Object
	{
	public:
		::System::String* identifier; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18
		::System::UInt32 renderingLayerMask; // 0x20
		::UnityEngine::Texture2D* boneIndicesWeightsTexture; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* materialProxies; // 0x30
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATPROTOTYPE_RENDERERPACKAGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATPROTOTYPE_RENDERERPACKAGE_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Boolean get_validForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATPROTOTYPE_RENDERERPACKAGE_GET_VALIDFORRENDERING_OFFSET))(this);
		}
	};
}
