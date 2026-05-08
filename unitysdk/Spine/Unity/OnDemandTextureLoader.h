#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine::Unity { class AtlasAssetBase; }
namespace Spine::Unity { class OnDemandTextureLoader_TextureLoadDelegate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x18B46DC0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x18B46CC0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x18B46EC0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x18B470C0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x18B46FC0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x18B471C0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_HASNULLMAINTEXTURESASSIGNED_OFFSET UNITYSDK_OFFSET(0x18B466B0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x18B47900)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x18B472C0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x18B47920)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x18B46E40)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x18B46D40)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x18B46F40)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x18B47140)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x18B47040)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x18B47240)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B47940)

namespace Spine::Unity
{
	inline static constexpr unsigned int OnDemandTextureLoader_TypeDefinitionIndex = 37796;

	class OnDemandTextureLoader : public ::UnityEngine::ScriptableObject
	{
	public:
		::Spine::Unity::AtlasAssetBase* atlasAsset; // 0x18
		::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* onTextureRequested; // 0x20
		::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* onTextureLoaded; // 0x28
		::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* onTextureUnloaded; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER__CTOR_OFFSET))(this);
		}

		::System::Boolean HasNullMainTexturesAssigned(::System::Collections::Generic::List_1<::UnityEngine::Material*>*& nullTextureMaterials)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_HASNULLMAINTEXTURESASSIGNED_OFFSET))(this, nullTextureMaterials);
		}

		::System::Void add_onTextureRequested(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREREQUESTED_OFFSET))(this, value);
		}

		::System::Void remove_onTextureRequested(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREREQUESTED_OFFSET))(this, value);
		}

		::System::Void add_onTextureLoaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADED_OFFSET))(this, value);
		}

		::System::Void remove_onTextureLoaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADED_OFFSET))(this, value);
		}

		::System::Void add_onTextureUnloaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREUNLOADED_OFFSET))(this, value);
		}

		::System::Void remove_onTextureUnloaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREUNLOADED_OFFSET))(this, value);
		}

		::System::Void add_TextureRequested(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREREQUESTED_OFFSET))(this, value);
		}

		::System::Void remove_TextureRequested(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREREQUESTED_OFFSET))(this, value);
		}

		::System::Void add_TextureLoaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADED_OFFSET))(this, value);
		}

		::System::Void remove_TextureLoaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADED_OFFSET))(this, value);
		}

		::System::Void add_TextureUnloaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREUNLOADED_OFFSET))(this, value);
		}

		::System::Void remove_TextureUnloaded(::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader_TextureLoadDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREUNLOADED_OFFSET))(this, value);
		}

		::System::Void OnTextureRequested(::UnityEngine::Material* material, ::System::Int32 textureIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREREQUESTED_OFFSET))(this, material, textureIndex);
		}

		::System::Void OnTextureLoaded(::UnityEngine::Material* material, ::System::Int32 textureIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADED_OFFSET))(this, material, textureIndex);
		}

		::System::Void OnTextureUnloaded(::UnityEngine::Material* material, ::System::Int32 textureIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREUNLOADED_OFFSET))(this, material, textureIndex);
		}
	};
}
