#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialCacheShaderType.h"
#include "unitysdk/RPG/Client/MaterialProppertySetWay.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_F0D462198B262603;
class Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialPartShow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_RENDERERMATERIALCACHE_ADDREF_OFFSET UNITYSDK_OFFSET(0xA2D9DD0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_CHECKMATERIALSEQUAL_OFFSET UNITYSDK_OFFSET(0xA2D7550)
#define RPG_CLIENT_RENDERERMATERIALCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2D6640)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GETORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xA2D94B0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GETSHADERTYPE_OFFSET UNITYSDK_OFFSET(0xA2D9C70)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA2D9FC0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xA2DA040)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_ORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xA2DA0A0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_RENDERERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA2DA020)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0xA2DA030)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_SHADERTYPE_OFFSET UNITYSDK_OFFSET(0xA2DA0B0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET__MGR_OFFSET UNITYSDK_OFFSET(0xA2DA120)
#define RPG_CLIENT_RENDERERMATERIALCACHE_HASREF_OFFSET UNITYSDK_OFFSET(0xA2D9F70)
#define RPG_CLIENT_RENDERERMATERIALCACHE_INIT_OFFSET UNITYSDK_OFFSET(0xA2D64F0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_ISUSINGMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2D9280)
#define RPG_CLIENT_RENDERERMATERIALCACHE_ISUSINGSHAREDMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2D92D0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_MATCOPYORIGINPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2D8440)
#define RPG_CLIENT_RENDERERMATERIALCACHE_MATOVERRIDEPARTSHOW_OFFSET UNITYSDK_OFFSET(0xA2D8A80)
#define RPG_CLIENT_RENDERERMATERIALCACHE_OVERRIDEPARTSHOW_OFFSET UNITYSDK_OFFSET(0xA2D89C0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REMOVEREF_OFFSET UNITYSDK_OFFSET(0xA2D9E80)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xA2D71B0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D7080)
#define RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALFLOATPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2D96E0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA2D9530)
#define RPG_CLIENT_RENDERERMATERIALCACHE_RESETTOORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xA2D9320)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REVERTORIGINMATERIALREPLACE_OFFSET UNITYSDK_OFFSET(0xA2D6BE0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0xA2D6380)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xA2D8DC0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xA2D4130)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_2_OFFSET UNITYSDK_OFFSET(0xA2D4410)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_3_OFFSET UNITYSDK_OFFSET(0xA2D4810)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_4_OFFSET UNITYSDK_OFFSET(0xA2D4B80)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_5_OFFSET UNITYSDK_OFFSET(0xA2D5060)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_6_OFFSET UNITYSDK_OFFSET(0xA2D53C0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_7_OFFSET UNITYSDK_OFFSET(0xA2D5730)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_8_OFFSET UNITYSDK_OFFSET(0xA2D59D0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_9_OFFSET UNITYSDK_OFFSET(0xA2D5C90)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2D3E70)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETSHADERPASSENABLED_OFFSET UNITYSDK_OFFSET(0xA2D6280)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0xA2D6000)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0xA2D6140)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SET_SHADERTYPE_OFFSET UNITYSDK_OFFSET(0xA2DA110)
#define RPG_CLIENT_RENDERERMATERIALCACHE_TRYGETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2D46B0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCEIFNEED_OFFSET UNITYSDK_OFFSET(0xA2D91C0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2D7F80)
#define RPG_CLIENT_RENDERERMATERIALCACHE__APPLYORIGINMATERIALSCHANGE_OFFSET UNITYSDK_OFFSET(0xA2D7650)
#define RPG_CLIENT_RENDERERMATERIALCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA2DA160)
#define RPG_CLIENT_RENDERERMATERIALCACHE__COPYORIGINPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2D7E40)
#define RPG_CLIENT_RENDERERMATERIALCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DA150)
#define RPG_CLIENT_RENDERERMATERIALCACHE__DISPOSEKEYWORDCACHE_OFFSET UNITYSDK_OFFSET(0xA2D66F0)
#define RPG_CLIENT_RENDERERMATERIALCACHE__DISPOSEMATERIALS_OFFSET UNITYSDK_OFFSET(0xA2D6D70)
#define RPG_CLIENT_RENDERERMATERIALCACHE__GETPARTSHOWPROPID_OFFSET UNITYSDK_OFFSET(0xA2D8D30)
#define RPG_CLIENT_RENDERERMATERIALCACHE__INITSHADERTYPEIMPL_OFFSET UNITYSDK_OFFSET(0xA2D99C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RendererMaterialCache_TypeDefinitionIndex = 57114;

	class RendererMaterialCache : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableSetSharedProperty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RendererMaterialCache_TypeDefinitionIndex)->GetStaticField(0x37C0);
		}
		static ::System::Boolean* StaticGet_EnableMaterialMergeTest()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RendererMaterialCache_TypeDefinitionIndex)->GetStaticField(0x37C1);
		}
		::Il2CppArray<::UnityEngine::Material*>* _SharedMatInsts; // 0x10
		::UnityEngine::Renderer* _Renderer; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _OriginMatsBak; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* _OriginMats; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* _InstMats; // 0x30
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B*>* RendererKeywordCacheDict; // 0x38
		::System::Int32 _RendererInstanceID; // 0x40
		::System::Boolean DitherStateDirty; // 0x44
		::System::Byte _OriginMatIsInstMask; // 0x45
		::System::Int32 _RefCount; // 0x48
		::RPG::Client::MaterialCacheShaderType _ShaderType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__CCTOR_OFFSET))();
		}

		::System::Void SetProperty(::System::Int32 sPropertyNameID, ::UnityEngine::Color propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_1(::System::Int32 sPropertyNameID, ::Il2CppArray<::UnityEngine::Color>* propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_1_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_2(::System::Int32 sPropertyNameID, ::System::Single propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_2_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Boolean TryGetProperty(::System::Int32 sPropertyNameID, ::System::Single& propertyValue, ::System::Boolean useMpb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_TRYGETPROPERTY_OFFSET))(this, sPropertyNameID, propertyValue, useMpb);
		}

		::System::Void SetProperty_3(::System::Int32 sPropertyNameID, ::Il2CppArray<::System::Single>* propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_3_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_4(::System::Int32 sPropertyNameID, ::System::Int32 propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb, ::System::Boolean isShaderRefValue, ::Il2CppArray<::System::Int32>* materialIndices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_4_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb, isShaderRefValue, materialIndices);
		}

		::System::Void SetProperty_5(::System::Int32 sPropertyNameID, ::UnityEngine::Matrix4x4 propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_5_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_6(::System::Int32 sPropertyNameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_6_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_7(::System::Int32 sPropertyNameID, ::UnityEngine::Texture* propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_7_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_8(::System::Int32 sPropertyNameID, ::UnityEngine::Vector4 propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_8_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetProperty_9(::System::Int32 sPropertyNameID, ::Il2CppArray<::UnityEngine::Vector4>* propertyValue, ::System::Boolean bIsForceSet, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_9_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet, useMpb);
		}

		::System::Void SetTextureOffset(::System::Int32 sPropertyNameID, ::UnityEngine::Vector2 propertyValue, ::System::Boolean bIsForceSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTUREOFFSET_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet);
		}

		::System::Void SetTextureScale(::System::Int32 sPropertyNameID, ::UnityEngine::Vector2 propertyValue, ::System::Boolean bIsForceSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTURESCALE_OFFSET))(this, sPropertyNameID, propertyValue, bIsForceSet);
		}

		::System::Void SetShaderPassEnabled(::UnityEngine::PassTagID& passTagID, ::System::Boolean bEnable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PassTagID&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETSHADERPASSENABLED_OFFSET))(this, passTagID, bEnable);
		}

		::System::Void SetKeyword(::System::String* keywordName, ::System::Boolean enable, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETKEYWORD_OFFSET))(this, keywordName, enable, useMpb);
		}

		::System::Void Init(::Class_1_F0D462198B262603* mgr, ::UnityEngine::Renderer* renderer, ::System::Int32 instId, ::System::Boolean addRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0D462198B262603*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_INIT_OFFSET))(this, mgr, renderer, instId, addRef);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_CLEAR_OFFSET))(this);
		}

		::System::Void _DisposeKeywordCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__DISPOSEKEYWORDCACHE_OFFSET))(this);
		}

		::System::Void _DisposeMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__DISPOSEMATERIALS_OFFSET))(this);
		}

		::System::Void ReplaceOriginMaterial(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIAL_OFFSET))(this, mat);
		}

		::System::Void ReplaceOriginMaterials(::Il2CppArray<::UnityEngine::Material*>* mats, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty* originPropertyNames)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIALS_OFFSET))(this, mats, originPropertyNames);
		}

		::System::Void _CopyOriginProperty(::RPG::GameCore::CharacterReplaceMaterialOriginProperty* originPropertyNames)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__COPYORIGINPROPERTY_OFFSET))(this, originPropertyNames);
		}

		static ::System::Void MatCopyOriginProperty(::RPG::GameCore::CharacterReplaceMaterialOriginProperty* originPropertyNames, ::UnityEngine::Material* from, ::UnityEngine::Material* to)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterReplaceMaterialOriginProperty*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_MATCOPYORIGINPROPERTY_OFFSET))(originPropertyNames, from, to);
		}

		::System::Void OverridePartShow(::RPG::GameCore::CharacterReplaceMaterialPartShow* partShow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialPartShow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_OVERRIDEPARTSHOW_OFFSET))(this, partShow);
		}

		static ::System::Void MatOverridePartShow(::RPG::GameCore::CharacterReplaceMaterialPartShow* partShow, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterReplaceMaterialPartShow*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_MATOVERRIDEPARTSHOW_OFFSET))(partShow, mat);
		}

		static ::System::Int32 _GetPartShowPropID(::UnityEngine::Material* mat, ::System::Boolean showIDProp, ::System::Int32 propertyID, ::System::UInt32 curID)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__GETPARTSHOWPROPID_OFFSET))(mat, showIDProp, propertyID, curID);
		}

		::System::Void RevertOriginMaterialReplace(::Il2CppArray<::System::UInt32>* indexList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REVERTORIGINMATERIALREPLACE_OFFSET))(this, indexList);
		}

		::System::Void SetOriginMaterials(::Il2CppArray<::UnityEngine::Material*>* mats)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETORIGINMATERIALS_OFFSET))(this, mats);
		}

		::System::Void _ApplyOriginMaterialsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__APPLYORIGINMATERIALSCHANGE_OFFSET))(this);
		}

		::System::Void UseMaterialInstanceIfNeed(::RPG::Client::MaterialProppertySetWay propSetWay)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCEIFNEED_OFFSET))(this, propSetWay);
		}

		::System::Void UseMaterialInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCE_OFFSET))(this);
		}

		::System::Boolean IsUsingMaterialInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_ISUSINGMATERIALINSTANCE_OFFSET))(this);
		}

		::System::Boolean IsUsingSharedMaterialInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_ISUSINGSHAREDMATERIALINSTANCE_OFFSET))(this);
		}

		::System::Void ResetToOriginMaterials(::UnityEngine::GameObject* actorGo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_RESETTOORIGINMATERIALS_OFFSET))(this, actorGo);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetOriginMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GETORIGINMATERIALS_OFFSET))(this);
		}

		::System::Void ResetMaterialProperties(::UnityEngine::GameObject* actorGo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALPROPERTIES_OFFSET))(this, actorGo);
		}

		::System::Void ResetMaterialFloatProperty(::System::Int32 nameID, ::System::Boolean useMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALFLOATPROPERTY_OFFSET))(this, nameID, useMpb);
		}

		static ::System::Boolean CheckMaterialsEqual(::Il2CppArray<::UnityEngine::Material*>* mats1, ::Il2CppArray<::UnityEngine::Material*>* mats2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_CHECKMATERIALSEQUAL_OFFSET))(mats1, mats2);
		}

		::System::Void _InitShaderTypeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__INITSHADERTYPEIMPL_OFFSET))(this);
		}

		static ::RPG::Client::MaterialCacheShaderType GetShaderType(::UnityEngine::Material* mat)
		{
			return ((::RPG::Client::MaterialCacheShaderType(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GETSHADERTYPE_OFFSET))(mat);
		}

		::System::Void AddRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_ADDREF_OFFSET))(this);
		}

		::System::Void RemoveRef(::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REMOVEREF_OFFSET))(this, autoRelease);
		}

		::System::Boolean HasRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_HASREF_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_RendererInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET_RENDERERINSTANCEID_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_Renderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET_RENDERER_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_Materials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET_MATERIALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_OriginMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET_ORIGINMATERIALS_OFFSET))(this);
		}

		::RPG::Client::MaterialCacheShaderType get_ShaderType()
		{
			return ((::RPG::Client::MaterialCacheShaderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET_SHADERTYPE_OFFSET))(this);
		}

		::System::Void set_ShaderType(::RPG::Client::MaterialCacheShaderType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialCacheShaderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SET_SHADERTYPE_OFFSET))(this, value);
		}

		::Class_1_F0D462198B262603* get__Mgr()
		{
			return ((::Class_1_F0D462198B262603*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET__MGR_OFFSET))(this);
		}
	};
}
