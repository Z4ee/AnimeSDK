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

#define SPINE_UNITY_SPINEATLASASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACDED30)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1ACDE750)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x1ACDECA0)
#define SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1ACDE2D0)
#define SPINE_UNITY_SPINEATLASASSET_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x1ACDED40)
#define SPINE_UNITY_SPINEATLASASSET_GETATLAS_OFFSET UNITYSDK_OFFSET(0x1ACDE380)
#define SPINE_UNITY_SPINEATLASASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1ACDE270)
#define SPINE_UNITY_SPINEATLASASSET_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACDE290)
#define SPINE_UNITY_SPINEATLASASSET_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1ACDE280)
#define SPINE_UNITY_SPINEATLASASSET_GET_PRIMARYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACDE2A0)
#define SPINE_UNITY_SPINEATLASASSET_RESET_OFFSET UNITYSDK_OFFSET(0x1ACDE370)
#define SPINE_UNITY_SPINEATLASASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDF4A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAtlasAsset_TypeDefinitionIndex = 41390;

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

		static ::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance(::UnityEngine::TextAsset* a1, ::Il2CppArray<::UnityEngine::Material*>* a2, ::System::Boolean a3, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>* a4)
		{
			return ((::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance_1(::UnityEngine::TextAsset* a1, ::Il2CppArray<::UnityEngine::Texture2D*>* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>* a5)
		{
			return ((::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::UnityEngine::Material*, ::System::Boolean, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Spine::Unity::SpineAtlasAsset* CreateRuntimeInstance_2(::UnityEngine::TextAsset* a1, ::Il2CppArray<::UnityEngine::Texture2D*>* a2, ::UnityEngine::Shader* a3, ::System::Boolean a4, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>* a5)
		{
			return ((::Spine::Unity::SpineAtlasAsset*(*)(::UnityEngine::TextAsset*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::UnityEngine::Shader*, ::System::Boolean, ::System::Func_2<::Spine::Unity::SpineAtlasAsset*, ::Spine::TextureLoader*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CREATERUNTIMEINSTANCE_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_RESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_CLEAR_OFFSET))(this);
		}

		::Spine::Atlas* GetAtlas(::System::Boolean a1)
		{
			return ((::Spine::Atlas*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GETATLAS_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* GenerateMesh(::System::String* a1, ::UnityEngine::Mesh* a2, ::UnityEngine::Material*& a3, ::System::Single a4)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::String*, ::UnityEngine::Mesh*, ::UnityEngine::Material*&, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASASSET_GENERATEMESH_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
