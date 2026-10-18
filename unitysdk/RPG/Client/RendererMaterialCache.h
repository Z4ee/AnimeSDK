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

#define RPG_CLIENT_RENDERERMATERIALCACHE_ADDREF_OFFSET UNITYSDK_OFFSET(0xDEB8380)
#define RPG_CLIENT_RENDERERMATERIALCACHE_CHECKMATERIALSEQUAL_OFFSET UNITYSDK_OFFSET(0xDEB5AB0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0xDEB4E30)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GETORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB7730)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GETSHADERTYPE_OFFSET UNITYSDK_OFFSET(0xDEB80C0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xDEB8570)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB85F0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_ORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB8650)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_RENDERERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xDEB85D0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0xDEB85E0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET_SHADERTYPE_OFFSET UNITYSDK_OFFSET(0xDEB8660)
#define RPG_CLIENT_RENDERERMATERIALCACHE_GET__MGR_OFFSET UNITYSDK_OFFSET(0xDEB86D0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_HASREF_OFFSET UNITYSDK_OFFSET(0xDEB8520)
#define RPG_CLIENT_RENDERERMATERIALCACHE_INIT_OFFSET UNITYSDK_OFFSET(0xDEB4CE0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_ISUSINGMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xDEB74F0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_ISUSINGSHAREDMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xDEB7540)
#define RPG_CLIENT_RENDERERMATERIALCACHE_MATCOPYORIGINPROPERTY_OFFSET UNITYSDK_OFFSET(0xDEB6860)
#define RPG_CLIENT_RENDERERMATERIALCACHE_MATOVERRIDEPARTSHOW_OFFSET UNITYSDK_OFFSET(0xDEB6E50)
#define RPG_CLIENT_RENDERERMATERIALCACHE_OVERRIDEPARTSHOW_OFFSET UNITYSDK_OFFSET(0xDEB6D90)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REMOVEREF_OFFSET UNITYSDK_OFFSET(0xDEB8430)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB5840)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIAL_OFFSET UNITYSDK_OFFSET(0xDEB5710)
#define RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALFLOATPROPERTY_OFFSET UNITYSDK_OFFSET(0xDEB79A0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDEB77B0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_RESETTOORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB7590)
#define RPG_CLIENT_RENDERERMATERIALCACHE_REVERTORIGINMATERIALREPLACE_OFFSET UNITYSDK_OFFSET(0xDEB52E0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0xDEB4B70)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB7180)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xDEB2A60)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_2_OFFSET UNITYSDK_OFFSET(0xDEB2D30)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_3_OFFSET UNITYSDK_OFFSET(0xDEB3100)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_4_OFFSET UNITYSDK_OFFSET(0xDEB3460)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_5_OFFSET UNITYSDK_OFFSET(0xDEB38F0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_6_OFFSET UNITYSDK_OFFSET(0xDEB3C30)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_7_OFFSET UNITYSDK_OFFSET(0xDEB3F90)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_8_OFFSET UNITYSDK_OFFSET(0xDEB4210)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_9_OFFSET UNITYSDK_OFFSET(0xDEB44C0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xDEB27B0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETSHADERPASSENABLED_OFFSET UNITYSDK_OFFSET(0xDEB4A80)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0xDEB4820)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0xDEB4950)
#define RPG_CLIENT_RENDERERMATERIALCACHE_SET_SHADERTYPE_OFFSET UNITYSDK_OFFSET(0xDEB86C0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_TRYGETPROPERTY_OFFSET UNITYSDK_OFFSET(0xDEB2FB0)
#define RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCEIFNEED_OFFSET UNITYSDK_OFFSET(0xDEB7430)
#define RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0xDEB6430)
#define RPG_CLIENT_RENDERERMATERIALCACHE__APPLYORIGINMATERIALSCHANGE_OFFSET UNITYSDK_OFFSET(0xDEB5BA0)
#define RPG_CLIENT_RENDERERMATERIALCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEB8710)
#define RPG_CLIENT_RENDERERMATERIALCACHE__COPYORIGINPROPERTY_OFFSET UNITYSDK_OFFSET(0xDEB6310)
#define RPG_CLIENT_RENDERERMATERIALCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xDEB8700)
#define RPG_CLIENT_RENDERERMATERIALCACHE__DISPOSEKEYWORDCACHE_OFFSET UNITYSDK_OFFSET(0xDEB4EE0)
#define RPG_CLIENT_RENDERERMATERIALCACHE__DISPOSEMATERIALS_OFFSET UNITYSDK_OFFSET(0xDEB5430)
#define RPG_CLIENT_RENDERERMATERIALCACHE__GETPARTSHOWPROPID_OFFSET UNITYSDK_OFFSET(0xDEB70F0)
#define RPG_CLIENT_RENDERERMATERIALCACHE__INITSHADERTYPEIMPL_OFFSET UNITYSDK_OFFSET(0xDEB7C60)

namespace RPG::Client
{
	inline static constexpr unsigned int RendererMaterialCache_TypeDefinitionIndex = 69832;

	class RendererMaterialCache : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableMaterialMergeTest()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RendererMaterialCache_TypeDefinitionIndex)->GetStaticField(0x2E50);
		}
		static ::System::Boolean* StaticGet_EnableSetSharedProperty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RendererMaterialCache_TypeDefinitionIndex)->GetStaticField(0x2E51);
		}
		::UnityEngine::Renderer* _Renderer; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* _SharedMatInsts; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* _OriginMats; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* _OriginMatsBak; // 0x28
		::Il2CppArray<::UnityEngine::Material*>* _InstMats; // 0x30
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_F0D462198B262603_Class_1_9BBA7E2AAEF1A44B*>* RendererKeywordCacheDict; // 0x38
		::RPG::Client::MaterialCacheShaderType _ShaderType; // 0x40
		::System::Int32 _RendererInstanceID; // 0x44
		::System::Int32 _RefCount; // 0x48
		::System::Boolean DitherStateDirty; // 0x4C
		::System::Byte _OriginMatIsInstMask; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__CCTOR_OFFSET))();
		}

		::System::Void SetProperty(::System::Int32 a1, ::UnityEngine::Color a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_1(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Color>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_2(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryGetProperty(::System::Int32 a1, ::System::Single& a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_TRYGETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_3(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::Il2CppArray<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetProperty_5(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_6(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_7(::System::Int32 a1, ::UnityEngine::Texture* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_8(::System::Int32 a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetProperty_9(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETPROPERTY_9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTextureOffset(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTUREOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTextureScale(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETTEXTURESCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetShaderPassEnabled(::UnityEngine::PassTagID& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PassTagID&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETSHADERPASSENABLED_OFFSET))(this, a1, a2);
		}

		::System::Void SetKeyword(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETKEYWORD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init(::Class_1_F0D462198B262603* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0D462198B262603*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_INIT_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void ReplaceOriginMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIAL_OFFSET))(this, a1);
		}

		::System::Void ReplaceOriginMaterials(::Il2CppArray<::UnityEngine::Material*>* a1, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REPLACEORIGINMATERIALS_OFFSET))(this, a1, a2);
		}

		::System::Void _CopyOriginProperty(::RPG::GameCore::CharacterReplaceMaterialOriginProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__COPYORIGINPROPERTY_OFFSET))(this, a1);
		}

		static ::System::Void MatCopyOriginProperty(::RPG::GameCore::CharacterReplaceMaterialOriginProperty* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterReplaceMaterialOriginProperty*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_MATCOPYORIGINPROPERTY_OFFSET))(a1, a2, a3);
		}

		::System::Void OverridePartShow(::RPG::GameCore::CharacterReplaceMaterialPartShow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialPartShow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_OVERRIDEPARTSHOW_OFFSET))(this, a1);
		}

		static ::System::Void MatOverridePartShow(::RPG::GameCore::CharacterReplaceMaterialPartShow* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterReplaceMaterialPartShow*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_MATOVERRIDEPARTSHOW_OFFSET))(a1, a2);
		}

		static ::System::Int32 _GetPartShowPropID(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__GETPARTSHOWPROPID_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void RevertOriginMaterialReplace(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REVERTORIGINMATERIALREPLACE_OFFSET))(this, a1);
		}

		::System::Void SetOriginMaterials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SETORIGINMATERIALS_OFFSET))(this, a1);
		}

		::System::Void _ApplyOriginMaterialsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__APPLYORIGINMATERIALSCHANGE_OFFSET))(this);
		}

		::System::Void UseMaterialInstanceIfNeed(::RPG::Client::MaterialProppertySetWay a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialProppertySetWay))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_USEMATERIALINSTANCEIFNEED_OFFSET))(this, a1);
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

		::System::Void ResetToOriginMaterials(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_RESETTOORIGINMATERIALS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetOriginMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GETORIGINMATERIALS_OFFSET))(this);
		}

		::System::Void ResetMaterialProperties(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void ResetMaterialFloatProperty(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_RESETMATERIALFLOATPROPERTY_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean CheckMaterialsEqual(::Il2CppArray<::UnityEngine::Material*>* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_CHECKMATERIALSEQUAL_OFFSET))(a1, a2);
		}

		::System::Void _InitShaderTypeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE__INITSHADERTYPEIMPL_OFFSET))(this);
		}

		static ::RPG::Client::MaterialCacheShaderType GetShaderType(::UnityEngine::Material* a1)
		{
			return ((::RPG::Client::MaterialCacheShaderType(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GETSHADERTYPE_OFFSET))(a1);
		}

		::System::Void AddRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_ADDREF_OFFSET))(this);
		}

		::System::Void RemoveRef(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_REMOVEREF_OFFSET))(this, a1);
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

		::System::Void set_ShaderType(::RPG::Client::MaterialCacheShaderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialCacheShaderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_SET_SHADERTYPE_OFFSET))(this, a1);
		}

		::Class_1_F0D462198B262603* get__Mgr()
		{
			return ((::Class_1_F0D462198B262603*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RENDERERMATERIALCACHE_GET__MGR_OFFSET))(this);
		}
	};
}
