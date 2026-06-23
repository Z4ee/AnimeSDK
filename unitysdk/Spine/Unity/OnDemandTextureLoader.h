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

#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1AD23B90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x1AD23A90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AD23C90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1AD23E90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x1AD23D90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ADD_TEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AD23F90)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_HASNULLMAINTEXTURESASSIGNED_OFFSET UNITYSDK_OFFSET(0x1AD23480)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1AD246D0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x1AD24090)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AD246F0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1AD23C10)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x1AD23B10)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_ONTEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AD23D10)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTURELOADED_OFFSET UNITYSDK_OFFSET(0x1AD23F10)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREREQUESTED_OFFSET UNITYSDK_OFFSET(0x1AD23E10)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_REMOVE_TEXTUREUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AD24010)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD24710)

namespace Spine::Unity
{
	inline static constexpr unsigned int OnDemandTextureLoader_TypeDefinitionIndex = 39424;

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
