#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_AfterImageNew_MaterialColorProperty.h"
#include "unitysdk/RPG/Client/Effect_AfterImageNew_MaterialProperty.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1018;
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x17736990)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDOFFSET_OFFSET UNITYSDK_OFFSET(0x177375F0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ADDWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x177378D0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ALLOWBAKEIMAGE_OFFSET UNITYSDK_OFFSET(0x17735E50)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x17735020)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_BAKEMESHIMAGE_OFFSET UNITYSDK_OFFSET(0x17736950)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_DEACTIVATEAFTERIMAGE_OFFSET UNITYSDK_OFFSET(0x17735220)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17735370)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_GET_CURRENTIMAGECOUNT_OFFSET UNITYSDK_OFFSET(0x17736120)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_LATETICK_OFFSET UNITYSDK_OFFSET(0x17735730)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_3ABEC8F14503754E_OFFSET UNITYSDK_OFFSET(0x177353C0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_82020AC4BCE8251D_OFFSET UNITYSDK_OFFSET(0x17737CF0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_C3FAEDDB7D84362E_OFFSET UNITYSDK_OFFSET(0x17736180)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17737EA0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17737E50)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x17736B60)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_METHOD_5_E250BBB8026CD6B5_OFFSET UNITYSDK_OFFSET(0x17736040)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x177356C0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17735180)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x177350F0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x17737FB0)
#define RPG_CLIENT_EFFECT_AFTERIMAGENEW__CTOR_OFFSET UNITYSDK_OFFSET(0x17737EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AfterImageNew_TypeDefinitionIndex = 67269;

	class Effect_AfterImageNew : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x147B0);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x147B4);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x147B8);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x147BC);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_AfterImageNew_TypeDefinitionIndex)->GetStaticField(0x147C0);
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
		::RPG::Client::MonoEffect* Field_5_21; // 0x68
		::UnityEngine::GameObject* Field_5_22; // 0x70
		::Il2CppArray<::System::Single>* Field_5_23; // 0x78
		::Il2CppArray<::System::Single>* Field_5_24; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_25; // 0x88
		::System::Single Field_5_26; // 0x90
		::System::Boolean Field_5_27; // 0x94
		::System::Int32 Field_5_28; // 0x98
		::System::Int32 Field_5_29; // 0x9C
		::System::Int32 Field_5_30; // 0xA0
		::Il2CppArray<::UnityEngine::Mesh*>* Field_5_31; // 0xA8
		::Il2CppArray<::UnityEngine::Matrix4x4>* Field_5_32; // 0xB0
		::Il2CppArray<::UnityEngine::Transform*>* Field_5_33; // 0xB8
		::UnityEngine::MaterialPropertyBlock* Field_5_34; // 0xC0
		::Il2CppArray<::System::Single>* Field_5_35; // 0xC8
		::Il2CppArray<::UnityEngine::Matrix4x4>* Field_5_36; // 0xD0
		::Il2CppArray<::UnityEngine::MeshFilter*>* Field_5_37; // 0xD8
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* Field_5_38; // 0xE0
		::Il2CppArray<::UnityEngine::MeshFilter*>* Field_5_39; // 0xE8
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* Field_5_40; // 0xF0
		::System::Int32 Field_5_41; // 0xF8
		::UnityEngine::Material* Field_5_42; // 0x100
		::Class_0_16E4307DCC419505_1018* Field_5_43; // 0x108
		::System::Boolean Field_5_44; // 0x110

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
