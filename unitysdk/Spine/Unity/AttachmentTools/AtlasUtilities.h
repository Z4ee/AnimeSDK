#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/AttachmentTools/AtlasUtilities_IntAndAtlasRegionKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }
namespace Spine { class Attachment; }
namespace Spine { class Skin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1C156330)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET UNITYSDK_OFFSET(0x1C15BE00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET UNITYSDK_OFFSET(0x1C15A950)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C15BFD0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET UNITYSDK_OFFSET(0x1C157170)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C15BB60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_1_OFFSET UNITYSDK_OFFSET(0x1C1587D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1C158560)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_1_OFFSET UNITYSDK_OFFSET(0x1C15B0C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET UNITYSDK_OFFSET(0x1C15AFA0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET UNITYSDK_OFFSET(0x1C15C2F0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C15BD50)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C15C380)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET UNITYSDK_OFFSET(0x1C15BC60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET UNITYSDK_OFFSET(0x1C1562D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1C156C20)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET UNITYSDK_OFFSET(0x1C15C2B0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET UNITYSDK_OFFSET(0x1C158470)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET UNITYSDK_OFFSET(0x1C158490)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_1_OFFSET UNITYSDK_OFFSET(0x1C156CC0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_2_OFFSET UNITYSDK_OFFSET(0x1C1579E0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_3_OFFSET UNITYSDK_OFFSET(0x1C157A70)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET UNITYSDK_OFFSET(0x1C156C30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_1_OFFSET UNITYSDK_OFFSET(0x1C156640)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_2_OFFSET UNITYSDK_OFFSET(0x1C157380)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_3_OFFSET UNITYSDK_OFFSET(0x1C157970)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_4_OFFSET UNITYSDK_OFFSET(0x1C157410)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x1C1565C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET UNITYSDK_OFFSET(0x1C156A00)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET UNITYSDK_OFFSET(0x1C15B9D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1C157F10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C15A2F0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET UNITYSDK_OFFSET(0x1C15A9E0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1C15C350)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C15C440)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_TypeDefinitionIndex = 40202;

	class AtlasUtilities : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Spine::AtlasRegion*, ::System::Int32>** StaticGet_existingRegions()
		{
			return (::System::Collections::Generic::Dictionary_2<::Spine::AtlasRegion*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C930);
		}
		static ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>** StaticGet_repackedRegions()
		{
			return (::System::Collections::Generic::List_1<::Spine::AtlasRegion*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C938);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_regionIndices()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C940);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_CachedRegionTexturesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C948);
		}
		static ::System::Collections::Generic::List_1<::Spine::Attachment*>** StaticGet_inoutAttachments()
		{
			return (::System::Collections::Generic::List_1<::Spine::Attachment*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C950);
		}
		static ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>** StaticGet_originalRegions()
		{
			return (::System::Collections::Generic::List_1<::Spine::AtlasRegion*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C958);
		}
		static ::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>** StaticGet_texturesToPackAtParam()
		{
			return (::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C960);
		}
		static ::System::Collections::Generic::Dictionary_2<::Spine::Unity::AttachmentTools::AtlasUtilities_IntAndAtlasRegionKey, ::UnityEngine::Texture2D*>** StaticGet_CachedRegionTextures()
		{
			return (::System::Collections::Generic::Dictionary_2<::Spine::Unity::AttachmentTools::AtlasUtilities_IntAndAtlasRegionKey, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x2C968);
		}
		// static const ::UnityEngine::TextureFormat SpineTextureFormat; // 0x0
		// static const ::System::Single DefaultMipmapBias; // 0x0
		// static const ::System::Boolean UseMipMaps; // 0x0
		// static const ::System::Single DefaultScale; // 0x0
		// static const ::System::Int32 NonrenderingRegion = 0xFFFFFFFF; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET))();
		}

		static ::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Texture2D* t, ::UnityEngine::Material* materialPropertySource, ::System::Single scale)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(t, materialPropertySource, scale);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_1(::UnityEngine::Texture2D* t, ::UnityEngine::Shader* shader, ::System::Single scale, ::UnityEngine::Material* materialPropertySource)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_1_OFFSET))(t, shader, scale, materialPropertySource);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone(::UnityEngine::Texture2D* t, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET))(t, materialPropertySource, textureFormat, mipmaps);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone_1(::UnityEngine::Texture2D* t, ::UnityEngine::Shader* shader, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_1_OFFSET))(t, shader, textureFormat, mipmaps, materialPropertySource);
		}

		static ::Spine::AtlasPage* ToSpineAtlasPage(::UnityEngine::Material* m)
		{
			return ((::Spine::AtlasPage*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET))(m);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_2(::UnityEngine::Sprite* s, ::Spine::AtlasPage* page)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_2_OFFSET))(s, page);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_3(::UnityEngine::Sprite* s, ::UnityEngine::Material* material)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_3_OFFSET))(s, material);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone_2(::UnityEngine::Sprite* s, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_2_OFFSET))(s, materialPropertySource, textureFormat, mipmaps);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone_3(::UnityEngine::Sprite* s, ::UnityEngine::Shader* shader, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_3_OFFSET))(s, shader, textureFormat, mipmaps, materialPropertySource);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_4(::UnityEngine::Sprite* s, ::System::Boolean isolatedTexture)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_4_OFFSET))(s, isolatedTexture);
		}

		static ::System::Void GetRepackedAttachments(::System::Collections::Generic::List_1<::Spine::Attachment*>* sourceAttachments, ::System::Collections::Generic::List_1<::Spine::Attachment*>* outputAttachments, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::String* newAssetName, ::System::Boolean clearCache, ::System::Boolean useOriginalNonrenderables, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::UnityEngine::Material*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET))(sourceAttachments, outputAttachments, materialPropertySource, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, newAssetName, clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::System::Void GetRepackedAttachments_1(::System::Collections::Generic::List_1<::Spine::Attachment*>* sourceAttachments, ::System::Collections::Generic::List_1<::Spine::Attachment*>* outputAttachments, ::UnityEngine::Shader* shader, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::String* newAssetName, ::UnityEngine::Material* materialPropertySource, ::System::Boolean clearCache, ::System::Boolean useOriginalNonrenderables, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::UnityEngine::Shader*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::String*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_1_OFFSET))(sourceAttachments, outputAttachments, shader, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, newAssetName, materialPropertySource, clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::Spine::Skin* GetRepackedSkin(::Spine::Skin* o, ::System::String* newName, ::UnityEngine::Material* materialPropertySource, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Boolean useOriginalNonrenderables, ::System::Boolean clearCache, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET))(o, newName, materialPropertySource, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, useOriginalNonrenderables, clearCache, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::Spine::Skin* GetRepackedSkin_1(::Spine::Skin* o, ::System::String* newName, ::UnityEngine::Shader* shader, ::UnityEngine::Material*& outputMaterial, ::UnityEngine::Texture2D*& outputTexture, ::System::Int32 maxAtlasSize, ::System::Int32 padding, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::UnityEngine::Material* materialPropertySource, ::System::Boolean clearCache, ::System::Boolean useOriginalNonrenderables, ::Il2CppArray<::System::Int32>* additionalTexturePropertyIDsToCopy, ::Il2CppArray<::UnityEngine::Texture2D*>* additionalOutputTextures, ::Il2CppArray<::UnityEngine::TextureFormat>* additionalTextureFormats, ::Il2CppArray<::System::Boolean>* additionalTextureIsLinear)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Shader*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_1_OFFSET))(o, newName, shader, outputMaterial, outputTexture, maxAtlasSize, padding, textureFormat, mipmaps, materialPropertySource, clearCache, useOriginalNonrenderables, additionalTexturePropertyIDsToCopy, additionalOutputTextures, additionalTextureFormats, additionalTextureIsLinear);
		}

		static ::UnityEngine::Sprite* ToSprite(::Spine::AtlasRegion* ar, ::System::Single pixelsPerUnit)
		{
			return ((::UnityEngine::Sprite*(*)(::Spine::AtlasRegion*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET))(ar, pixelsPerUnit);
		}

		static ::System::Void ClearCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* ToTexture(::Spine::AtlasRegion* ar, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Int32 texturePropertyId, ::System::Boolean linear, ::System::Boolean applyPMA)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET))(ar, textureFormat, mipmaps, texturePropertyId, linear, applyPMA);
		}

		static ::UnityEngine::Texture2D* ToTexture_1(::UnityEngine::Sprite* s, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Boolean linear, ::System::Boolean applyPMA)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Sprite*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_1_OFFSET))(s, textureFormat, mipmaps, linear, applyPMA);
		}

		static ::UnityEngine::Texture2D* GetClone(::UnityEngine::Texture2D* t, ::UnityEngine::TextureFormat textureFormat, ::System::Boolean mipmaps, ::System::Boolean linear, ::System::Boolean applyPMA)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET))(t, textureFormat, mipmaps, linear, applyPMA);
		}

		static ::System::Void CopyTexture(::UnityEngine::Texture2D* source, ::UnityEngine::Rect sourceRect, ::UnityEngine::Texture2D* destination)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET))(source, sourceRect, destination);
		}

		static ::System::Void CopyTextureApplyPMA(::UnityEngine::Texture2D* source, ::UnityEngine::Rect sourceRect, ::UnityEngine::Texture2D* destination)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET))(source, sourceRect, destination);
		}

		static ::System::Boolean IsRenderable(::Spine::Attachment* a)
		{
			return ((::System::Boolean(*)(::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET))(a);
		}

		static ::UnityEngine::Rect SpineUnityFlipRect(::UnityEngine::Rect rect, ::System::Int32 textureHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET))(rect, textureHeight);
		}

		static ::UnityEngine::Rect GetUnityRect(::Spine::AtlasRegion* region)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET))(region);
		}

		static ::UnityEngine::Rect GetSpineAtlasRect(::Spine::AtlasRegion* region, ::System::Boolean includeRotate)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET))(region, includeRotate);
		}

		static ::UnityEngine::Rect UVRectToTextureRect(::UnityEngine::Rect uvRect, ::System::Int32 texWidth, ::System::Int32 texHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET))(uvRect, texWidth, texHeight);
		}

		static ::UnityEngine::Rect TextureRectToUVRect(::UnityEngine::Rect textureRect, ::System::Int32 texWidth, ::System::Int32 texHeight)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET))(textureRect, texWidth, texHeight);
		}

		static ::Spine::AtlasRegion* UVRectToAtlasRegion(::UnityEngine::Rect uvRect, ::Spine::AtlasRegion* referenceRegion, ::Spine::AtlasPage* page)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Rect, ::Spine::AtlasRegion*, ::Spine::AtlasPage*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET))(uvRect, referenceRegion, page);
		}

		static ::UnityEngine::Texture2D* GetMainTexture(::Spine::AtlasRegion* region)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET))(region);
		}

		static ::UnityEngine::Texture2D* GetTexture(::Spine::AtlasRegion* region, ::System::String* texturePropertyName)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET))(region, texturePropertyName);
		}

		static ::UnityEngine::Texture2D* GetTexture_1(::Spine::AtlasRegion* region, ::System::Int32 texturePropertyId)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_1_OFFSET))(region, texturePropertyId);
		}

		static ::System::Void CopyTextureAttributesFrom(::UnityEngine::Texture2D* destination, ::UnityEngine::Texture2D* source)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET))(destination, source);
		}

		static ::System::Single InverseLerp(::System::Single a, ::System::Single b, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET))(a, b, value);
		}
	};
}
