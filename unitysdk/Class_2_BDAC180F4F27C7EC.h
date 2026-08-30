#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_02E912740C419AD3;
class Class_1_36816D4DE394D200;
class Class_1_945ACFB1FEBC7A2C_15;
class Class_1_ACDBC0A3CD89B5C3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC462220)
#define CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC4623C0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0xC45FB00)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC4611A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xC460210)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_2D444D75288B6C4F_OFFSET UNITYSDK_OFFSET(0xC461140)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_322305E263B00C3F_OFFSET UNITYSDK_OFFSET(0xC45F6A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_3A758F965E6B0C45_OFFSET UNITYSDK_OFFSET(0xC461D50)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET UNITYSDK_OFFSET(0xC461820)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET UNITYSDK_OFFSET(0xC460990)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7CC63CFE66C55887_1_OFFSET UNITYSDK_OFFSET(0xC461610)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7CC63CFE66C55887_OFFSET UNITYSDK_OFFSET(0xC461400)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET UNITYSDK_OFFSET(0xC4612A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_8EA91B93B34817EA_OFFSET UNITYSDK_OFFSET(0xC461220)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A26E815EE2AA9047_OFFSET UNITYSDK_OFFSET(0xC4604B0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0xC461A30)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xC460390)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC461FB0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_1_OFFSET UNITYSDK_OFFSET(0xC460F40)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_OFFSET UNITYSDK_OFFSET(0xC460E80)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_DC32A2CC2252EB57_OFFSET UNITYSDK_OFFSET(0xC461C30)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E4862AA9115CA55D_1_OFFSET UNITYSDK_OFFSET(0xC460C70)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E4862AA9115CA55D_OFFSET UNITYSDK_OFFSET(0xC460A60)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E876C8B6D3B840A6_1_OFFSET UNITYSDK_OFFSET(0xC460460)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E876C8B6D3B840A6_2_OFFSET UNITYSDK_OFFSET(0xC460940)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xC460410)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_EAE3A6573AC54BE1_OFFSET UNITYSDK_OFFSET(0xC4606E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xC4620A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xC462160)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC461EF0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_1_OFFSET UNITYSDK_OFFSET(0xC4610A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_OFFSET UNITYSDK_OFFSET(0xC461000)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_FC9F9AEA2C96BD9B_OFFSET UNITYSDK_OFFSET(0xC460770)
#define CLASS_2_BDAC180F4F27C7EC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC45FA60)
#define CLASS_2_BDAC180F4F27C7EC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC45F650)
#define CLASS_2_BDAC180F4F27C7EC__CTOR_OFFSET UNITYSDK_OFFSET(0xC462530)
#define CLASS_2_BDAC180F4F27C7EC__ONBIND_OFFSET UNITYSDK_OFFSET(0xC45F1F0)

inline static constexpr unsigned int Class_2_BDAC180F4F27C7EC_TypeDefinitionIndex = 71958;

class Class_2_BDAC180F4F27C7EC : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::UnityEngine::Transform* OPOHDNFKLPP; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* FLDMNAOOFMO; // 0x70
	::Il2CppArray<::UnityEngine::Transform*>* HKADBKEKLIG; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* ODNKOFLEIAN; // 0x80
	::Class_1_02E912740C419AD3* MLOCFFBKKPA; // 0x88
	::System::Int32 LMNBMOIEJJH; // 0x90
	::System::Boolean NIFEBDLPDLD; // 0x94
	::System::Int32 PKKAFKENEDF; // 0x98

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

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_E876C8B6D3B840A6_1_OFFSET))(this);
	}

	::System::Void Method_2_A26E815EE2AA9047(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A26E815EE2AA9047_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_E876C8B6D3B840A6_2_OFFSET))(this);
	}

	::System::Void Method_2_5C48CEB9104412C2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAE3A6573AC54BE1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_EAE3A6573AC54BE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC9F9AEA2C96BD9B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_FC9F9AEA2C96BD9B_OFFSET))(this, a1);
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

	::UnityEngine::GameObject* Method_2_E4862AA9115CA55D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_E4862AA9115CA55D_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_E4862AA9115CA55D_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_E4862AA9115CA55D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_322305E263B00C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_322305E263B00C3F_OFFSET))(this);
	}

	::System::Void Method_2_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_11A5396029C33A57_OFFSET))(this);
	}

	::System::Void Method_2_7FD7BDD5DEE836E5(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7CC63CFE66C55887(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7CC63CFE66C55887_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_547E7659834BBCB0(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7CC63CFE66C55887_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7CC63CFE66C55887_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DC32A2CC2252EB57(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_DC32A2CC2252EB57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B19D178EAF5F28EA(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_B19D178EAF5F28EA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_3A758F965E6B0C45(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_3A758F965E6B0C45_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_8EA91B93B34817EA()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_8EA91B93B34817EA_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_2_2D444D75288B6C4F()
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_2D444D75288B6C4F_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
