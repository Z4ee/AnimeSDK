#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_AfterImageNew_MaterialColorProperty.h"
#include "unitysdk/RPG/Client/Effect_AfterImageNew_MaterialProperty.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1072;
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x15E4DAD0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDOFFSET_OFFSET UNITYSDK_OFFSET(0x15E4E730)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x15E4EA10)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ALLOWBAKEIMAGE_OFFSET UNITYSDK_OFFSET(0x15E4CF90)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x15E4C160)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_BAKEMESHIMAGE_OFFSET UNITYSDK_OFFSET(0x15E4DA90)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_DEACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x15E4C360)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15E4C4B0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_GET_CURRENTIMAGECOUNT_OFFSET UNITYSDK_OFFSET(0x15E4D260)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_LATETICK_OFFSET UNITYSDK_OFFSET(0x15E4C870)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_3ABEC8F14503754E_OFFSET UNITYSDK_OFFSET(0x15E4C500)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_82020AC4BCE8251D_OFFSET UNITYSDK_OFFSET(0x15E4EE30)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_C3FAEDDB7D84362E_OFFSET UNITYSDK_OFFSET(0x15E4D2C0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15E4EFE0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E4EF90)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x15E4DCA0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_E250BBB8026CD6B5_OFFSET UNITYSDK_OFFSET(0x15E4D180)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15E4C800)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15E4C2C0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15E4C230)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E4F0F0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4F030)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AfterImageNew_TypeDefinitionIndex = 70391;

	class Effect_AfterImageNew : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_GOEIGKDDJOH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x137B0);
		}
		static ::System::Int32* StaticGet_EBJGHNFJLLF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x137B4);
		}
		static ::System::Int32* StaticGet_PPBOELILJKN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x137B8);
		}
		static ::System::Int32* StaticGet_PMMMMOLGEAG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x137BC);
		}
		static ::System::Int32* StaticGet_JIOEPBGDDNJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x137C0);
		}
		// static const ::System::Int32 ImageLimit = 0x14; // 0x0
		::System::Int32 MaxCount; // 0x18
		::System::Single TimeLimit; // 0x1C
		::System::Single TimeDelay; // 0x20
		::System::Single ImageBakeDeltaTime; // 0x24
		::UnityEngine::Transform* BoneRoot; // 0x28
		::System::Boolean UseFrameMode; // 0x30
		::System::Boolean FetchMeshFromEffect; // 0x31
		::Il2CppArray<::System::String*>* MeshFilters; // 0x38
		::Il2CppArray<::System::String*>* SkinnedMeshRenderers; // 0x40
		::Il2CppArray<::RPG::Client::Effect_AfterImageNew_MaterialProperty>* MaterialProperties; // 0x48
		::Il2CppArray<::RPG::Client::Effect_AfterImageNew_MaterialColorProperty>* MaterialColorProperties; // 0x50
		::UnityEngine::Material* FixedMaterial; // 0x58
		::System::Boolean AlwaysBehindCharacter; // 0x60
		::System::Boolean Actived; // 0x61
		::System::Boolean _Init; // 0x62
		::RPG::Client::MonoEffect* LBNBPMIFDHI; // 0x68
		::UnityEngine::GameObject* KGCFHPOMNLJ; // 0x70
		::Il2CppArray<::System::Single>* FGPOADGIMMJ; // 0x78
		::Il2CppArray<::System::Single>* HOEFAFMAEGA; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* CFPOFBLILMM; // 0x88
		::System::Single FFPHEOCGFFF; // 0x90
		::System::Boolean HOCLHDEPAAB; // 0x94
		::System::Int32 APLPHBHFIIC; // 0x98
		::System::Int32 LDOCFAIGGKD; // 0x9C
		::System::Int32 DINGKKIBKIE; // 0xA0
		::Il2CppArray<::UnityEngine::Mesh*>* MJMFFKCOLDB; // 0xA8
		::Il2CppArray<::UnityEngine::Matrix4x4>* LKOINBLJGHL; // 0xB0
		::Il2CppArray<::UnityEngine::Transform*>* KKALAJFMLFL; // 0xB8
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0xC0
		::Il2CppArray<::System::Single>* KPBLOMGEEOL; // 0xC8
		::Il2CppArray<::UnityEngine::Matrix4x4>* AKAIGBJLFAD; // 0xD0
		::Il2CppArray<::UnityEngine::MeshFilter*>* NALCLNBGGMB; // 0xD8
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* BKFBBLCEEEO; // 0xE0
		::Il2CppArray<::UnityEngine::MeshFilter*>* CDPBNBDNPMM; // 0xE8
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* MBIPABEDICH; // 0xF0
		::System::Int32 CJJIFIGMHHB; // 0xF8
		::UnityEngine::Material* CBBBEOKELHN; // 0x100
		::Class_0_16E4307DCC419505_1072* LKAGBKODCOF; // 0x108
		::System::Boolean PIPBEKLBFMJ; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_LATETICK_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentImageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_GET_CURRENTIMAGECOUNT_OFFSET))(this);
		}

		::System::Void BakeMeshImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_BAKEMESHIMAGE_OFFSET))(this);
		}

		::System::Boolean AllowBakeImage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ALLOWBAKEIMAGE_OFFSET))(this);
		}

		::System::Void ActivateAfterImage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ACTIVATEAFTERIMAGE_OFFSET))(this, a1);
		}

		::System::Void DeactivateAfterImage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_DEACTIVATEAFTERIMAGE_OFFSET))(this, a1);
		}

		::System::Void AddWorldOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDOFFSET_OFFSET))(this, a1);
		}

		::System::Void AddWorldRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_E250BBB8026CD6B5(::RPG::Client::MonoEffect* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_E250BBB8026CD6B5_OFFSET))(this, a1);
		}

		::System::Void Method_5_DC715239B8B98D9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_DC715239B8B98D9C_OFFSET))(this);
		}

		::System::Void Method_5_3ABEC8F14503754E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_3ABEC8F14503754E_OFFSET))(this);
		}

		::System::Void Method_5_82020AC4BCE8251D(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_82020AC4BCE8251D_OFFSET))(this, a1);
		}

		::System::Void Method_5_C3FAEDDB7D84362E(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_C3FAEDDB7D84362E_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
