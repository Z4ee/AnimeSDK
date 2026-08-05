#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/AtlasAssetBase.h"

namespace Spine { class Atlas; }
namespace Spine::Unity { class SpineSpriteAtlasAsset_SavedRegionInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::U2D { class SpriteAtlas; }

#define SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDSPRITES_OFFSET UNITYSDK_OFFSET(0x1C19FBF0)
#define SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C19FBB0)
#define SPINE_UNITY_SPINESPRITEATLASASSET_ASSIGNREGIONSFROMSAVEDREGIONS_OFFSET UNITYSDK_OFFSET(0x1C19F700)
#define SPINE_UNITY_SPINESPRITEATLASASSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C19F1F0)
#define SPINE_UNITY_SPINESPRITEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C19EDC0)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GETATLAS_OFFSET UNITYSDK_OFFSET(0x1C19EE60)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1C19ED50)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C19ED70)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x1C19ED60)
#define SPINE_UNITY_SPINESPRITEATLASASSET_GET_PRIMARYMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C19ED80)
#define SPINE_UNITY_SPINESPRITEATLASASSET_LOADATLAS_OFFSET UNITYSDK_OFFSET(0x1C19F200)
#define SPINE_UNITY_SPINESPRITEATLASASSET_RESET_OFFSET UNITYSDK_OFFSET(0x1C19EE50)
#define SPINE_UNITY_SPINESPRITEATLASASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C19FC70)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineSpriteAtlasAsset_TypeDefinitionIndex = 40101;

	class SpineSpriteAtlasAsset : public ::Spine::Unity::AtlasAssetBase
	{
	public:
		::UnityEngine::U2D::SpriteAtlas* spriteAtlasFile; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x30
		::Spine::Atlas* atlas; // 0x38
		::System::Boolean updateRegionsInPlayMode; // 0x40
		::Il2CppArray<::Spine::Unity::SpineSpriteAtlasAsset_SavedRegionInfo*>* savedRegions; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_ISLOADED_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* get_Materials()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALS_OFFSET))(this);
		}

		::System::Int32 get_MaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_MATERIALCOUNT_OFFSET))(this);
		}

		::UnityEngine::Material* get_PrimaryMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GET_PRIMARYMATERIAL_OFFSET))(this);
		}

		static ::Spine::Unity::SpineSpriteAtlasAsset* CreateRuntimeInstance(::UnityEngine::U2D::SpriteAtlas* spriteAtlasFile, ::Il2CppArray<::UnityEngine::Material*>* materials, ::System::Boolean initialize)
		{
			return ((::Spine::Unity::SpineSpriteAtlasAsset*(*)(::UnityEngine::U2D::SpriteAtlas*, ::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_CREATERUNTIMEINSTANCE_OFFSET))(spriteAtlasFile, materials, initialize);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_RESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_CLEAR_OFFSET))(this);
		}

		::Spine::Atlas* GetAtlas(::System::Boolean onlyMetaData)
		{
			return ((::Spine::Atlas*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_GETATLAS_OFFSET))(this, onlyMetaData);
		}

		::System::Void AssignRegionsFromSavedRegions(::Il2CppArray<::UnityEngine::Sprite*>* sprites, ::Spine::Atlas* usedAtlas)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*, ::Spine::Atlas*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_ASSIGNREGIONSFROMSAVEDREGIONS_OFFSET))(this, sprites, usedAtlas);
		}

		::Spine::Atlas* LoadAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
		{
			return ((::Spine::Atlas*(*)(::PVOID, ::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_LOADATLAS_OFFSET))(this, spriteAtlas);
		}

		static ::UnityEngine::Texture2D* AccessPackedTexture(::Il2CppArray<::UnityEngine::Sprite*>* sprites)
		{
			return ((::UnityEngine::Texture2D*(*)(::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDTEXTURE_OFFSET))(sprites);
		}

		static ::Il2CppArray<::UnityEngine::Sprite*>* AccessPackedSprites(::UnityEngine::U2D::SpriteAtlas* spriteAtlas)
		{
			return ((::Il2CppArray<::UnityEngine::Sprite*>*(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINESPRITEATLASASSET_ACCESSPACKEDSPRITES_OFFSET))(spriteAtlas);
		}
	};
}
