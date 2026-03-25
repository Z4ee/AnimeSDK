#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/AtlasAssetBase.h"

namespace Spine { class Atlas; }
namespace Spine { class TextureLoader; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }

#define SPINE_UNITY_SPINEATLASASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1842DA60)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1842D3E0)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1842D9D0)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1842CF00)
#define SPINE_UNITY_SPINEATLASASSET_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x1842DA70)
#define SPINE_UNITY_SPINEATLASASSET_GETATLAS_OFFSET UNITYSDK_OFFSET(0x1842CFB0)
#define SPINE_UNITY_SPINEATLASASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1842CE90)
#define SPINE_UNITY_SPINEATLASASSET_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1842CEB0)
#define SPINE_UNITY_SPINEATLASASSET_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1842CEA0)
#define SPINE_UNITY_SPINEATLASASSET_GET_PRIMARYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1842CEC0)
#define SPINE_UNITY_SPINEATLASASSET_RESET_OFFSET UNITYSDK_OFFSET(0x1842CFA0)
#define SPINE_UNITY_SPINEATLASASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E2F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAtlasAsset_TypeDefinitionIndex = 34744;

	class SpineAtlasAsset : public ::Spine::Unity::AtlasAssetBase
	{
	public:
		::UnityEngine::TextAsset* atlasFile; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x20
		::Spine::TextureLoader* customTextureLoader; // 0x28
		::Spine::Atlas* atlas; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_ISLOADED_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* get_Materials()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_MATERIALS_OFFSET))(this);
		}

		::System::Int32 get_MaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_MATERIALCOUNT_OFFSET))(this);
		}

		::UnityEngine::Material* get_PrimaryMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GET_PRIMARYMATERIAL_OFFSET))(this);
		}

		static ::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* atlasText, ::Il2CppArray<::UnityEngine::Material*>* materials, ::System::Boolean initialize, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>* newCustomTextureLoader)
		{
			return ((::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(atlasText, materials, initialize, newCustomTextureLoader);
		}

		static ::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance_1(::UnityEngine::TextAsset* atlasText, ::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::UnityEngine::Material* materialPropertySource, ::System::Boolean initialize, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>* newCustomTextureLoader)
		{
			return ((::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::UnityEngine::Material*, ::System::Boolean, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_1_OFFSET))(atlasText, textures, materialPropertySource, initialize, newCustomTextureLoader);
		}

		static ::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance_2(::UnityEngine::TextAsset* atlasText, ::Il2CppArray<::UnityEngine::Texture2D*>* textures, ::UnityEngine::Shader* shader, ::System::Boolean initialize, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>* newCustomTextureLoader)
		{
			return ((::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::UnityEngine::Shader*, ::System::Boolean, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_2_OFFSET))(atlasText, textures, shader, initialize, newCustomTextureLoader);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_RESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CLEAR_OFFSET))(this);
		}

		::Spine::Atlas* GetAtlas(::System::Boolean onlyMetaData)
		{
			return ((::Spine::Atlas*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GETATLAS_OFFSET))(this, onlyMetaData);
		}

		::UnityEngine::Mesh* GenerateMesh(::System::String* name, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material*& material, ::System::Single scale)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::String*, ::UnityEngine::Mesh*, ::UnityEngine::Material*&, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GENERATEMESH_OFFSET))(this, name, mesh, material, scale);
		}
	};
}
