#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_2898945DE6487BDA;
class Class_1_36816D4DE394D200;
class Class_1_8DDC457C49061FD1;
class Class_1_945ACFB1FEBC7A2C_15;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x109BD7F0)
#define CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x109BD940)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x109BB150)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x109BC7A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_3931D2D928836DDF_OFFSET UNITYSDK_OFFSET(0x109BBB70)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x109BB760)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET UNITYSDK_OFFSET(0x109BCDA0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x109BDC90)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x109BDBC0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_58697E0809231066_OFFSET UNITYSDK_OFFSET(0x109BC740)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET UNITYSDK_OFFSET(0x109BBE20)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_66CC9828DB1F478F_1_OFFSET UNITYSDK_OFFSET(0x109BB990)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_66CC9828DB1F478F_2_OFFSET UNITYSDK_OFFSET(0x109BBDD0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x109BB940)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7D7DE6E1DDD77BDA_OFFSET UNITYSDK_OFFSET(0x109BADB0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET UNITYSDK_OFFSET(0x109BC860)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_88963178C0E476A6_OFFSET UNITYSDK_OFFSET(0x109BB9E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_8FEE1A53D46320A6_OFFSET UNITYSDK_OFFSET(0x109BD1A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x109BD5E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x109BD6A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x109BD730)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x109BD550)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_AF0D9CA060A829A6_OFFSET UNITYSDK_OFFSET(0x109BD280)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_B5208F3D9208631B_1_OFFSET UNITYSDK_OFFSET(0x109BCBB0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_B5208F3D9208631B_OFFSET UNITYSDK_OFFSET(0x109BC9C0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BAB7C14A41799CF3_OFFSET UNITYSDK_OFFSET(0x109BC800)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x109BB8C0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x109BDC20)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_1_OFFSET UNITYSDK_OFFSET(0x109BC530)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_OFFSET UNITYSDK_OFFSET(0x109BC460)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_1_OFFSET UNITYSDK_OFFSET(0x109BC1B0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_OFFSET UNITYSDK_OFFSET(0x109BBF00)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F648831EC8B2A5C0_OFFSET UNITYSDK_OFFSET(0x109BBC00)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_1_OFFSET UNITYSDK_OFFSET(0x109BC6A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_OFFSET UNITYSDK_OFFSET(0x109BC600)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x109BCFD0)
#define CLASS_2_BDAC180F4F27C7EC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x109BB0B0)
#define CLASS_2_BDAC180F4F27C7EC_ONRETURN_OFFSET UNITYSDK_OFFSET(0x109BAD60)
#define CLASS_2_BDAC180F4F27C7EC__CTOR_OFFSET UNITYSDK_OFFSET(0x109BDA60)
#define CLASS_2_BDAC180F4F27C7EC__ONBIND_OFFSET UNITYSDK_OFFSET(0x109BA890)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x109BDCF0)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x109BDD50)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x109BDB60)

inline static constexpr unsigned int Class_2_BDAC180F4F27C7EC_TypeDefinitionIndex = 58983;

class Class_2_BDAC180F4F27C7EC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_7; // 0x60
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_3; // 0x68
	::Class_1_8DDC457C49061FD1* Field_2_6; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_8; // 0x78
	::RPG::GameCore::GameEntity* Field_2_4; // 0x80
	::UnityEngine::Transform* Field_2_2; // 0x88
	::System::Int32 Field_2_0; // 0x90
	::System::Int32 Field_2_5; // 0x94
	::System::Boolean Field_2_1; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_ONRETURN_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_2_66CC9828DB1F478F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_66CC9828DB1F478F_1_OFFSET))(this);
	}

	::System::Void Method_2_88963178C0E476A6(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_88963178C0E476A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CC9828DB1F478F_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_66CC9828DB1F478F_2_OFFSET))(this);
	}

	::System::Void Method_2_5C48CEB9104412C2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3931D2D928836DDF(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_3931D2D928836DDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_F648831EC8B2A5C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F648831EC8B2A5C0_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_CBFC4C5C2FE89949(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_CBFC4C5C2FE89949_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_F887CFE58B75AD0E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_OFFSET))(this, a1);
	}

	::System::String* Method_2_F887CFE58B75AD0E_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_F014BA0503249756(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_F014BA0503249756_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D7DE6E1DDD77BDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7D7DE6E1DDD77BDA_OFFSET))(this);
	}

	::System::Void Method_2_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_11A5396029C33A57_OFFSET))(this);
	}

	::System::Void Method_2_7FD7BDD5DEE836E5(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B5208F3D9208631B(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_B5208F3D9208631B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_547E7659834BBCB0(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B5208F3D9208631B_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_B5208F3D9208631B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8FEE1A53D46320A6(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_8FEE1A53D46320A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AF0D9CA060A829A6(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_AF0D9CA060A829A6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_BAB7C14A41799CF3()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BAB7C14A41799CF3_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_1_2898945DE6487BDA* Method_2_58697E0809231066()
	{
		return ((::Class_1_2898945DE6487BDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_58697E0809231066_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
