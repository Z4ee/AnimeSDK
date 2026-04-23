#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class AttachPointSet;
class Class_1_5F51D4049EA87B7B;
class Class_1_9CBC71DC5240DC00;
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

#define CLASS_2_BE2531E8103A0E9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D4BED0)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_0C0A3218A683115F_OFFSET UNITYSDK_OFFSET(0x11D4E330)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11D4C290)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_3368F1CBCE68D2D1_OFFSET UNITYSDK_OFFSET(0x11D4EE60)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_347814AF53FFFDEF_OFFSET UNITYSDK_OFFSET(0x11D4EB20)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_4D5E094CBA8FF21F_OFFSET UNITYSDK_OFFSET(0x11D4F280)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x11D4ECD0)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x11D4C240)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_6792BDDE0B7A8419_OFFSET UNITYSDK_OFFSET(0x11D4F730)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_6A704A44799D4069_OFFSET UNITYSDK_OFFSET(0x11D4BD10)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_8735D14C38F2A99E_OFFSET UNITYSDK_OFFSET(0x11D4F7E0)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x11D50090)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x11D50020)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_96E44500D1F491E7_OFFSET UNITYSDK_OFFSET(0x11D4C420)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_9E035F4BAE220AC2_OFFSET UNITYSDK_OFFSET(0x11D4ED30)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_A4F4A9B75254E92D_OFFSET UNITYSDK_OFFSET(0x11D4E9A0)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_A745463C7F86C829_OFFSET UNITYSDK_OFFSET(0x11D4BE80)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x11D50010)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0x11D4BF40)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_F41C701CD6A228A5_OFFSET UNITYSDK_OFFSET(0x11D4E7D0)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x11D4FD80)
#define CLASS_2_BE2531E8103A0E9A_METHOD_2_FD2A5158841A130C_OFFSET UNITYSDK_OFFSET(0x11D4FF70)
#define CLASS_2_BE2531E8103A0E9A__CTOR_OFFSET UNITYSDK_OFFSET(0x11D50080)
#define CLASS_2_BE2531E8103A0E9A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D50100)

inline static constexpr unsigned int Class_2_BE2531E8103A0E9A_TypeDefinitionIndex = 64571;

class Class_2_BE2531E8103A0E9A : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_2_18()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE2531E8103A0E9A_TypeDefinitionIndex)->GetStaticField(0x54AC0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>** StaticGet_Field_2_16()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE2531E8103A0E9A_TypeDefinitionIndex)->GetStaticField(0x54AC8);
	}
	static ::System::Collections::Generic::List_1<::AttachPointSet*>** StaticGet_Field_2_17()
	{
		return (::System::Collections::Generic::List_1<::AttachPointSet*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BE2531E8103A0E9A_TypeDefinitionIndex)->GetStaticField(0x54AD0);
	}
	::Class_1_A0302E9AE0B8A2B9* Field_2_0; // 0x18
	::Class_1_9CBC71DC5240DC00* Field_2_4; // 0x20
	::RPG::Client::FollowPointMapping* Field_2_14; // 0x28
	::UnityEngine::Animator* Field_2_3; // 0x30
	::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* Field_2_15; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_2_7; // 0x40
	::UnityEngine::Transform* Field_2_5; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_6; // 0x50
	::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* Field_2_2; // 0x58
	::RPG::Client::AttachPointMapping* Field_2_13; // 0x60
	::UnityEngine::GameObject* Field_2_1; // 0x68
	::RPG::GameCore::GameEntity* Field_2_12; // 0x70
	::System::Int32 Field_2_9; // 0x78
	::System::Single Field_2_10; // 0x7C
	::System::Boolean Field_2_8; // 0x80
	::System::Boolean Field_2_11; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6A704A44799D4069(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_6A704A44799D4069_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_0C0A3218A683115F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_0C0A3218A683115F_OFFSET))(this, a1);
	}

	::System::Void Method_2_96E44500D1F491E7(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_96E44500D1F491E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_347814AF53FFFDEF(::UnityEngine::MonoBehaviour* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_347814AF53FFFDEF_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Transform* Method_2_9E035F4BAE220AC2(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_9E035F4BAE220AC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Method_2_3368F1CBCE68D2D1()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_3368F1CBCE68D2D1_OFFSET))(this);
	}

	::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* Method_2_4D5E094CBA8FF21F()
	{
		return ((::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_4D5E094CBA8FF21F_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_2_A4F4A9B75254E92D(::RPG::Client::CharacterArtModelConfig* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_A4F4A9B75254E92D_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_6792BDDE0B7A8419(::Class_1_5F51D4049EA87B7B* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_1_5F51D4049EA87B7B*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_6792BDDE0B7A8419_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_8735D14C38F2A99E(::Class_3_FA4469B9FB916D4B* a1, ::RPG::Client::AttachPointMapping* a2)
	{
		return ((::System::Void(*)(::Class_3_FA4469B9FB916D4B*, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_8735D14C38F2A99E_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F41C701CD6A228A5(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_F41C701CD6A228A5_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_2_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_B15E763C95CF0A5B_OFFSET))(this);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	static ::System::Void Method_2_FD2A5158841A130C(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_FD2A5158841A130C_OFFSET))(a1);
	}

	::RPG::Client::MonoEffectPluginCharacterModelCapture* Method_2_A745463C7F86C829()
	{
		return ((::RPG::Client::MonoEffectPluginCharacterModelCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_A745463C7F86C829_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE2531E8103A0E9A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
