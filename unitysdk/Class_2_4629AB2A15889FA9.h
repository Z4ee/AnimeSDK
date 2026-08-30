#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class AttachPointSet;
class Class_1_1342B57709FD7AC5;
class Class_1_5F51D4049EA87B7B;
class Class_1_A0302E9AE0B8A2B9;
class Class_3_FA4469B9FB916D4B;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::Client { class FollowPointMapping; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client { class MonoEffectPluginCharacterModelCapture; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4629AB2A15889FA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16415EF0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_04614C8577B9CBA7_OFFSET UNITYSDK_OFFSET(0x1641A530)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_0C0A3218A683115F_OFFSET UNITYSDK_OFFSET(0x16418A50)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_2233B4E123DC1DDC_OFFSET UNITYSDK_OFFSET(0x164194C0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_2417C60F698028CC_OFFSET UNITYSDK_OFFSET(0x1641A470)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_3135A9ED542D4190_OFFSET UNITYSDK_OFFSET(0x16419840)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_39B767C5ADFEA9A8_OFFSET UNITYSDK_OFFSET(0x16419BF0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x16416340)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x16419050)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x16419A40)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x1641AD50)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_99F4734274043F32_OFFSET UNITYSDK_OFFSET(0x1641A010)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_9E035F4BAE220AC2_OFFSET UNITYSDK_OFFSET(0x16419AC0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x16416390)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_A874B8D50E15661E_OFFSET UNITYSDK_OFFSET(0x16415CE0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_AC66361361CE73AE_OFFSET UNITYSDK_OFFSET(0x16415E80)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_ACF26DFF0EC20E9A_OFFSET UNITYSDK_OFFSET(0x164196B0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1641AD40)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_C15A9F455BC461DE_OFFSET UNITYSDK_OFFSET(0x16416610)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_DF5D3BC3B2604D3A_OFFSET UNITYSDK_OFFSET(0x16419310)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x16415F60)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x1641AAB0)
#define CLASS_2_4629AB2A15889FA9_METHOD_2_FD2A5158841A130C_OFFSET UNITYSDK_OFFSET(0x1641ACA0)
#define CLASS_2_4629AB2A15889FA9__CTOR_OFFSET UNITYSDK_OFFSET(0x1641ADB0)

inline static constexpr unsigned int Class_2_4629AB2A15889FA9_TypeDefinitionIndex = 70012;

class Class_2_4629AB2A15889FA9 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>** StaticGet_LFOKLJNOFBP()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4629AB2A15889FA9_TypeDefinitionIndex)->GetStaticField(0x5B0F0);
	}
	static ::System::Collections::Generic::List_1<::AttachPointSet*>** StaticGet_BGOBEFIFMJJ()
	{
		return (::System::Collections::Generic::List_1<::AttachPointSet*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4629AB2A15889FA9_TypeDefinitionIndex)->GetStaticField(0x5B0F8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_POFDHALAIMC()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4629AB2A15889FA9_TypeDefinitionIndex)->GetStaticField(0x5B100);
	}
	::Class_1_A0302E9AE0B8A2B9* IGABAMILIDM; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GPFNBKEBJII; // 0x20
	::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x28
	::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* HFCELNDHIIH; // 0x30
	::UnityEngine::Transform* HKJLEHMGONC; // 0x38
	::RPG::Client::AttachPointMapping* KFDNFOFPLII; // 0x40
	::UnityEngine::GameObject* JIAPNIHGPJA; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* GHKPEACJIAD; // 0x50
	::UnityEngine::Animator* APPGGMLEPLN; // 0x58
	::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* FEIFBICKDIJ; // 0x60
	::RPG::Client::FollowPointMapping* AMIAMLBIEEN; // 0x68
	::RPG::GameCore::GameEntity* NDDEIKDADAH; // 0x70
	::System::Int32 KNHPPBIMEGF; // 0x78
	::System::Boolean HHIBIFHGOBL; // 0x7C
	::System::Boolean DIMECBLLOGB; // 0x7D
	::System::Single HFEBKEBJLME; // 0x80
	::System::Single ODBGLBMLOJD; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A874B8D50E15661E(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_A874B8D50E15661E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_2_0C0A3218A683115F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_0C0A3218A683115F_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_DF5D3BC3B2604D3A(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_DF5D3BC3B2604D3A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C15A9F455BC461DE(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_C15A9F455BC461DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3135A9ED542D4190(::UnityEngine::MonoBehaviour* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_3135A9ED542D4190_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Transform* Method_2_9E035F4BAE220AC2(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_9E035F4BAE220AC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Method_2_39B767C5ADFEA9A8()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_39B767C5ADFEA9A8_OFFSET))(this);
	}

	::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* Method_2_99F4734274043F32()
	{
		return ((::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_99F4734274043F32_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_2_ACF26DFF0EC20E9A(::RPG::Client::CharacterArtModelConfig* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_ACF26DFF0EC20E9A_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_2417C60F698028CC(::Class_1_5F51D4049EA87B7B* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_1_5F51D4049EA87B7B*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_2417C60F698028CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_04614C8577B9CBA7(::Class_3_FA4469B9FB916D4B* a1, ::RPG::Client::AttachPointMapping* a2)
	{
		return ((::System::Void(*)(::Class_3_FA4469B9FB916D4B*, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_04614C8577B9CBA7_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2233B4E123DC1DDC(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_2233B4E123DC1DDC_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	static ::System::Void Method_2_FD2A5158841A130C(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_FD2A5158841A130C_OFFSET))(a1);
	}

	::RPG::Client::MonoEffectPluginCharacterModelCapture* Method_2_AC66361361CE73AE()
	{
		return ((::RPG::Client::MonoEffectPluginCharacterModelCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_AC66361361CE73AE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4629AB2A15889FA9_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}
};
