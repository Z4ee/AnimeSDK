#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_MaterialInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_MaterialData_Source.h"
#include "unitysdk/HoudiniEngineUnity/HEU_MaterialSourceWrapper.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_COPYMATERIAL_OFFSET UNITYSDK_OFFSET(0x17F219C0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEHOUDINIMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x17F22540)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEMATERIALINCACHE_1_OFFSET UNITYSDK_OFFSET(0x17F22160)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEMATERIALINCACHE_OFFSET UNITYSDK_OFFSET(0x17F22250)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATENEWHOUDINISTANDARDMATERIAL_OFFSET UNITYSDK_OFFSET(0x17F20310)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEUNITYSUBSTANCEMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x17F21C40)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DELETEASSETMATERIAL_OFFSET UNITYSDK_OFFSET(0x17EFF7F0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DESTROYNONASSETMATERIAL_OFFSET UNITYSDK_OFFSET(0x17F203F0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DOESMATERIALEXISTINASSETCACHE_OFFSET UNITYSDK_OFFSET(0x17F203B0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x17F21980)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREFILE_OFFSET UNITYSDK_OFFSET(0x17F20AC0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREPNGJPEG_OFFSET UNITYSDK_OFFSET(0x17F20940)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTURERAW_OFFSET UNITYSDK_OFFSET(0x17F20480)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDPLUGINSHADER_OFFSET UNITYSDK_OFFSET(0x17F1E1E0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDSHADER_OFFSET UNITYSDK_OFFSET(0x17F1FFC0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GENERATEDEFAULTMATERIALNAME_OFFSET UNITYSDK_OFFSET(0x17F223D0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETDEFAULTSTANDARDMATERIAL_OFFSET UNITYSDK_OFFSET(0x17F219F0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAFROMCACHE_OFFSET UNITYSDK_OFFSET(0x17F22470)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAMAPFROMCACHE_OFFSET UNITYSDK_OFFSET(0x17F22600)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETNEWMATERIALWITHSHADER_OFFSET UNITYSDK_OFFSET(0x17F20120)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETORCREATEDEFAULTMATERIALINCACHE_OFFSET UNITYSDK_OFFSET(0x17F22280)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETUNITYSUBSTANCEMATERIALKEY_OFFSET UNITYSDK_OFFSET(0x17F21760)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHINDEX_OFFSET UNITYSDK_OFFSET(0x17F212E0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHNAME_OFFSET UNITYSDK_OFFSET(0x17F20E90)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x17F21A60)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADUNITYMATERIAL_OFFSET UNITYSDK_OFFSET(0x17F20D20)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALHASGPUINSTANCINGENABLED_OFFSET UNITYSDK_OFFSET(0x17F219A0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALNAMETOKEY_OFFSET UNITYSDK_OFFSET(0x17F218F0)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_RENDERANDEXTRACTIMAGETOTEXTURE_OFFSET UNITYSDK_OFFSET(0x17F1EF60)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x17F21C30)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WRITEMATERIALTOASSETCACHE_OFFSET UNITYSDK_OFFSET(0x17F20330)
#define HOUDINIENGINEUNITY_HEU_MATERIALFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x17F228E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MaterialFactory_TypeDefinitionIndex = 37616;

	class HEU_MaterialFactory : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet__defaultStandardMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(HEU_MaterialFactory_TypeDefinitionIndex)->GetStaticField(0xE120);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Shader* FindShader(::System::String* a1)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDSHADER_OFFSET))(a1);
		}

		static ::UnityEngine::Shader* FindPluginShader(::System::String* a1)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_FINDPLUGINSHADER_OFFSET))(a1);
		}

		static ::UnityEngine::Material* GetNewMaterialWithShader(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETNEWMATERIALWITHSHADER_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Material* CreateNewHoudiniStandardMaterial(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATENEWHOUDINISTANDARDMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void WriteMaterialToAssetCache(::UnityEngine::Material* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WRITEMATERIALTOASSETCACHE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DoesMaterialExistInAssetCache(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DOESMATERIALEXISTINASSETCACHE_OFFSET))(a1);
		}

		static ::System::Void DestroyNonAssetMaterial(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DESTROYNONASSETMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Void DeleteAssetMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_DELETEASSETMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* RenderAndExtractImageToTexture(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_MaterialInfo a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_RENDERANDEXTRACTIMAGETOTEXTURE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Texture2D* ExtractHoudiniImageToTexturePNGJPEG(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_MaterialInfo a2, ::System::String* a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREPNGJPEG_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Texture2D* ExtractHoudiniImageToTextureRaw(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_MaterialInfo a2, ::System::String* a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTURERAW_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Texture2D* ExtractHoudiniImageToTextureFile(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_MaterialInfo a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::UnityEngine::Texture2D*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_MaterialInfo, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_EXTRACTHOUDINIIMAGETOTEXTUREFILE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Material* LoadUnityMaterial(::System::String* a1)
		{
			return ((::UnityEngine::Material*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADUNITYMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Material* LoadSubstanceMaterialWithName(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHNAME_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Material* LoadSubstanceMaterialWithIndex(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADSUBSTANCEMATERIALWITHINDEX_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetUnitySubstanceMaterialKey(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETUNITYSUBSTANCEMATERIALKEY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 MaterialNameToKey(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALNAMETOKEY_OFFSET))(a1);
		}

		static ::System::Void EnableGPUInstancing(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_ENABLEGPUINSTANCING_OFFSET))(a1);
		}

		static ::System::Boolean MaterialHasGPUInstancingEnabled(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_MATERIALHASGPUINSTANCINGENABLED_OFFSET))(a1);
		}

		static ::UnityEngine::Material* CopyMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_COPYMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Material* GetDefaultStandardMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETDEFAULTSTANDARDMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Texture2D* LoadTexture(::System::String* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_LOADTEXTURE_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* WhiteTexture()
		{
			return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_WHITETEXTURE_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateUnitySubstanceMaterialData(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a5, ::System::String* a6)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEUNITYSUBSTANCEMATERIALDATA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateMaterialInCache(::System::Int32 a1, ::System::String* a2, ::HoudiniEngineUnity::HEU_MaterialSourceWrapper a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a5, ::System::String* a6)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::String*, ::HoudiniEngineUnity::HEU_MaterialSourceWrapper, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEMATERIALINCACHE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateMaterialInCache_1(::System::Int32 a1, ::System::String* a2, ::HoudiniEngineUnity::HEU_MaterialData_Source a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a5, ::System::String* a6)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::String*, ::HoudiniEngineUnity::HEU_MaterialData_Source, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEMATERIALINCACHE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* GetOrCreateDefaultMaterialInCache(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a5, ::System::String* a6)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETORCREATEDEFAULTMATERIALINCACHE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* GetMaterialDataFromCache(::System::Int32 a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a2)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAFROMCACHE_OFFSET))(a1, a2);
		}

		static ::System::String* GenerateDefaultMaterialName(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GENERATEDEFAULTMATERIALNAME_OFFSET))(a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_MaterialData* CreateHoudiniMaterialData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a6, ::System::String* a7)
		{
			return ((::HoudiniEngineUnity::HEU_MaterialData*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_CREATEHOUDINIMATERIALDATA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MaterialData*>* GetMaterialDataMapFromCache(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MaterialData*>*(*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MATERIALFACTORY_GETMATERIALDATAMAPFROMCACHE_OFFSET))(a1);
		}
	};
}
