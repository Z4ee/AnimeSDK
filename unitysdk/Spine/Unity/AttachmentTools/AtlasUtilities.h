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

#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1E630C10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET UNITYSDK_OFFSET(0x1E635D50)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET UNITYSDK_OFFSET(0x1E6345B0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E635F10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET UNITYSDK_OFFSET(0x1E6313C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E635B60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_1_OFFSET UNITYSDK_OFFSET(0x1E632490)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1E632320)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_1_OFFSET UNITYSDK_OFFSET(0x1E634C60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET UNITYSDK_OFFSET(0x1E634B60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET UNITYSDK_OFFSET(0x1E6361D0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1E635CD0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E6362F0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_1_OFFSET UNITYSDK_OFFSET(0x1E636230)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET UNITYSDK_OFFSET(0x1E635C20)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INIT_OFFSET UNITYSDK_OFFSET(0x1E630BE0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x1E631180)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET UNITYSDK_OFFSET(0x1E636190)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET UNITYSDK_OFFSET(0x1E632230)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET UNITYSDK_OFFSET(0x1E632250)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_1_OFFSET UNITYSDK_OFFSET(0x1E631200)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_2_OFFSET UNITYSDK_OFFSET(0x1E631B60)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_3_OFFSET UNITYSDK_OFFSET(0x1E631BD0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET UNITYSDK_OFFSET(0x1E631190)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_1_OFFSET UNITYSDK_OFFSET(0x1E630E30)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_2_OFFSET UNITYSDK_OFFSET(0x1E6315A0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_3_OFFSET UNITYSDK_OFFSET(0x1E631B10)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_4_OFFSET UNITYSDK_OFFSET(0x1E631630)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET UNITYSDK_OFFSET(0x1E630DD0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET UNITYSDK_OFFSET(0x1E631010)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET UNITYSDK_OFFSET(0x1E635A40)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1E631D80)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E634030)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET UNITYSDK_OFFSET(0x1E634640)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1E6362C0)
#define SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E636390)

namespace Spine::Unity::AttachmentTools
{
	inline static constexpr unsigned int AtlasUtilities_TypeDefinitionIndex = 43920;

	class AtlasUtilities : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>** StaticGet_texturesToPackAtParam()
		{
			return (::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19000);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_regionIndices()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19008);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>** StaticGet_CachedRegionTexturesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19010);
		}
		static ::System::Collections::Generic::Dictionary_2<::Spine::AtlasRegion*, ::System::Int32>** StaticGet_existingRegions()
		{
			return (::System::Collections::Generic::Dictionary_2<::Spine::AtlasRegion*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19018);
		}
		static ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>** StaticGet_originalRegions()
		{
			return (::System::Collections::Generic::List_1<::Spine::AtlasRegion*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19020);
		}
		static ::System::Collections::Generic::List_1<::Spine::Attachment*>** StaticGet_inoutAttachments()
		{
			return (::System::Collections::Generic::List_1<::Spine::Attachment*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19028);
		}
		static ::System::Collections::Generic::Dictionary_2<::Spine::Unity::AttachmentTools::AtlasUtilities_IntAndAtlasRegionKey, ::UnityEngine::Texture2D*>** StaticGet_CachedRegionTextures()
		{
			return (::System::Collections::Generic::Dictionary_2<::Spine::Unity::AttachmentTools::AtlasUtilities_IntAndAtlasRegionKey, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19030);
		}
		static ::System::Collections::Generic::List_1<::Spine::AtlasRegion*>** StaticGet_repackedRegions()
		{
			return (::System::Collections::Generic::List_1<::Spine::AtlasRegion*>**)Il2CppClass::FromTypeDefinitionIndex(AtlasUtilities_TypeDefinitionIndex)->GetStaticField(0x19038);
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

		static ::Spine::AtlasRegion* ToAtlasRegion(::UnityEngine::Texture2D* a1, ::UnityEngine::Material* a2, ::System::Single a3)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_OFFSET))(a1, a2, a3);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_1(::UnityEngine::Texture2D* a1, ::UnityEngine::Shader* a2, ::System::Single a3, ::UnityEngine::Material* a4)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone(::UnityEngine::Texture2D* a1, ::UnityEngine::Material* a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone_1(::UnityEngine::Texture2D* a1, ::UnityEngine::Shader* a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::UnityEngine::Material* a5)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Spine::AtlasPage* ToSpineAtlasPage(::UnityEngine::Material* a1)
		{
			return ((::Spine::AtlasPage*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPINEATLASPAGE_OFFSET))(a1);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_2(::UnityEngine::Sprite* a1, ::Spine::AtlasPage* a2)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::Spine::AtlasPage*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_2_OFFSET))(a1, a2);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_3(::UnityEngine::Sprite* a1, ::UnityEngine::Material* a2)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_3_OFFSET))(a1, a2);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone_2(::UnityEngine::Sprite* a1, ::UnityEngine::Material* a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Material*, ::UnityEngine::TextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::Spine::AtlasRegion* ToAtlasRegionPMAClone_3(::UnityEngine::Sprite* a1, ::UnityEngine::Shader* a2, ::UnityEngine::TextureFormat a3, ::System::Boolean a4, ::UnityEngine::Material* a5)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::UnityEngine::Shader*, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGIONPMACLONE_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Spine::AtlasRegion* ToAtlasRegion_4(::UnityEngine::Sprite* a1, ::System::Boolean a2)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOATLASREGION_4_OFFSET))(a1, a2);
		}

		static ::System::Void GetRepackedAttachments(::System::Collections::Generic::List_1<::Spine::Attachment*>* a1, ::System::Collections::Generic::List_1<::Spine::Attachment*>* a2, ::UnityEngine::Material* a3, ::UnityEngine::Material*& a4, ::UnityEngine::Texture2D*& a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::TextureFormat a8, ::System::Boolean a9, ::System::String* a10, ::System::Boolean a11, ::System::Boolean a12, ::Il2CppArray<::System::Int32>* a13, ::Il2CppArray<::UnityEngine::Texture2D*>* a14, ::Il2CppArray<::UnityEngine::TextureFormat>* a15, ::Il2CppArray<::System::Boolean>* a16)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::UnityEngine::Material*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		static ::System::Void GetRepackedAttachments_1(::System::Collections::Generic::List_1<::Spine::Attachment*>* a1, ::System::Collections::Generic::List_1<::Spine::Attachment*>* a2, ::UnityEngine::Shader* a3, ::UnityEngine::Material*& a4, ::UnityEngine::Texture2D*& a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::TextureFormat a8, ::System::Boolean a9, ::System::String* a10, ::UnityEngine::Material* a11, ::System::Boolean a12, ::System::Boolean a13, ::Il2CppArray<::System::Int32>* a14, ::Il2CppArray<::UnityEngine::Texture2D*>* a15, ::Il2CppArray<::UnityEngine::TextureFormat>* a16, ::Il2CppArray<::System::Boolean>* a17)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::System::Collections::Generic::List_1<::Spine::Attachment*>*, ::UnityEngine::Shader*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::String*, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDATTACHMENTS_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		static ::Spine::Skin* GetRepackedSkin(::Spine::Skin* a1, ::System::String* a2, ::UnityEngine::Material* a3, ::UnityEngine::Material*& a4, ::UnityEngine::Texture2D*& a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::TextureFormat a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::Il2CppArray<::System::Int32>* a12, ::Il2CppArray<::UnityEngine::Texture2D*>* a13, ::Il2CppArray<::UnityEngine::TextureFormat>* a14, ::Il2CppArray<::System::Boolean>* a15)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		static ::Spine::Skin* GetRepackedSkin_1(::Spine::Skin* a1, ::System::String* a2, ::UnityEngine::Shader* a3, ::UnityEngine::Material*& a4, ::UnityEngine::Texture2D*& a5, ::System::Int32 a6, ::System::Int32 a7, ::UnityEngine::TextureFormat a8, ::System::Boolean a9, ::UnityEngine::Material* a10, ::System::Boolean a11, ::System::Boolean a12, ::Il2CppArray<::System::Int32>* a13, ::Il2CppArray<::UnityEngine::Texture2D*>* a14, ::Il2CppArray<::UnityEngine::TextureFormat>* a15, ::Il2CppArray<::System::Boolean>* a16)
		{
			return ((::Spine::Skin*(*)(::Spine::Skin*, ::System::String*, ::UnityEngine::Shader*, ::UnityEngine::Material*&, ::UnityEngine::Texture2D*&, ::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat, ::System::Boolean, ::UnityEngine::Material*, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::Texture2D*>*, ::Il2CppArray<::UnityEngine::TextureFormat>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETREPACKEDSKIN_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		static ::UnityEngine::Sprite* ToSprite(::Spine::AtlasRegion* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Sprite*(*)(::Spine::AtlasRegion*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOSPRITE_OFFSET))(a1, a2);
		}

		static ::System::Void ClearCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_CLEARCACHE_OFFSET))();
		}

		static ::UnityEngine::Texture2D* ToTexture(::Spine::AtlasRegion* a1, ::UnityEngine::TextureFormat a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Texture2D* ToTexture_1(::UnityEngine::Sprite* a1, ::UnityEngine::TextureFormat a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Sprite*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TOTEXTURE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Texture2D* GetClone(::UnityEngine::Texture2D* a1, ::UnityEngine::TextureFormat a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Texture2D*, ::UnityEngine::TextureFormat, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETCLONE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CopyTexture(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTURE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CopyTextureApplyPMA(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREAPPLYPMA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsRenderable(::Spine::Attachment* a1)
		{
			return ((::System::Boolean(*)(::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_ISRENDERABLE_OFFSET))(a1);
		}

		static ::UnityEngine::Rect SpineUnityFlipRect(::UnityEngine::Rect a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_SPINEUNITYFLIPRECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect GetUnityRect(::Spine::AtlasRegion* a1)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetUnityRect_1(::Spine::AtlasRegion* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETUNITYRECT_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect GetSpineAtlasRect(::Spine::AtlasRegion* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Rect(*)(::Spine::AtlasRegion*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETSPINEATLASRECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect UVRectToTextureRect(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOTEXTURERECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rect TextureRectToUVRect(::UnityEngine::Rect a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_TEXTURERECTTOUVRECT_OFFSET))(a1, a2, a3);
		}

		static ::Spine::AtlasRegion* UVRectToAtlasRegion(::UnityEngine::Rect a1, ::Spine::AtlasRegion* a2, ::Spine::AtlasPage* a3)
		{
			return ((::Spine::AtlasRegion*(*)(::UnityEngine::Rect, ::Spine::AtlasRegion*, ::Spine::AtlasPage*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_UVRECTTOATLASREGION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Texture2D* GetMainTexture(::Spine::AtlasRegion* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETMAINTEXTURE_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* GetTexture(::Spine::AtlasRegion* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2D* GetTexture_1(::Spine::AtlasRegion* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Texture2D*(*)(::Spine::AtlasRegion*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_GETTEXTURE_1_OFFSET))(a1, a2);
		}

		static ::System::Void CopyTextureAttributesFrom(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_COPYTEXTUREATTRIBUTESFROM_OFFSET))(a1, a2);
		}

		static ::System::Single InverseLerp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATTACHMENTTOOLS_ATLASUTILITIES_INVERSELERP_OFFSET))(a1, a2, a3);
		}
	};
}
