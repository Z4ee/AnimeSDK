#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/AtlasAssetBase_LoadingMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine { class Atlas; }
namespace Spine::Unity { class OnDemandTextureLoader; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_ATLASASSETBASE_BEGINCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x1C155CD0)
#define SPINE_UNITY_ATLASASSETBASE_ENDCUSTOMTEXTURELOADING_OFFSET UNITYSDK_OFFSET(0x1C155E30)
#define SPINE_UNITY_ATLASASSETBASE_GET_ONDEMANDTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x1C155CB0)
#define SPINE_UNITY_ATLASASSETBASE_GET_TEXTURELOADINGMODE_OFFSET UNITYSDK_OFFSET(0x1C155C90)
#define SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1C156100)
#define SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURESLOADED_OFFSET UNITYSDK_OFFSET(0x1C155F90)
#define SPINE_UNITY_ATLASASSETBASE_SET_ONDEMANDTEXTURELOADER_OFFSET UNITYSDK_OFFSET(0x1C155CC0)
#define SPINE_UNITY_ATLASASSETBASE_SET_TEXTURELOADINGMODE_OFFSET UNITYSDK_OFFSET(0x1C155CA0)
#define SPINE_UNITY_ATLASASSETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C156270)

namespace Spine::Unity
{
	inline static constexpr unsigned int AtlasAssetBase_TypeDefinitionIndex = 40084;

	class AtlasAssetBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::Spine::Unity::AtlasAssetBase_LoadingMode textureLoadingMode; // 0x18
		::Spine::Unity::OnDemandTextureLoader* onDemandTextureLoader; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE__CTOR_OFFSET))(this);
		}

		::Spine::Unity::AtlasAssetBase_LoadingMode get_TextureLoadingMode()
		{
			return ((::Spine::Unity::AtlasAssetBase_LoadingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_TEXTURELOADINGMODE_OFFSET))(this);
		}

		::System::Void set_TextureLoadingMode(::Spine::Unity::AtlasAssetBase_LoadingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::AtlasAssetBase_LoadingMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_SET_TEXTURELOADINGMODE_OFFSET))(this, value);
		}

		::Spine::Unity::OnDemandTextureLoader* get_OnDemandTextureLoader()
		{
			return ((::Spine::Unity::OnDemandTextureLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_GET_ONDEMANDTEXTURELOADER_OFFSET))(this);
		}

		::System::Void set_OnDemandTextureLoader(::Spine::Unity::OnDemandTextureLoader* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_SET_ONDEMANDTEXTURELOADER_OFFSET))(this, value);
		}

		::System::Void BeginCustomTextureLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_BEGINCUSTOMTEXTURELOADING_OFFSET))(this);
		}

		::System::Void EndCustomTextureLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_ENDCUSTOMTEXTURELOADING_OFFSET))(this);
		}

		::System::Void RequireTexturesLoaded(::UnityEngine::Material* material, ::UnityEngine::Material*& overrideMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURESLOADED_OFFSET))(this, material, overrideMaterial);
		}

		::System::Void RequireTextureLoaded(::UnityEngine::Texture* placeholderTexture, ::UnityEngine::Texture*& replacementTexture, ::System::Action_1<::UnityEngine::Texture*>* onTextureLoaded)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*&, ::System::Action_1<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE_REQUIRETEXTURELOADED_OFFSET))(this, placeholderTexture, replacementTexture, onTextureLoaded);
		}
	};
}
