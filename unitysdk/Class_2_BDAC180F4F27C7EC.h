#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_02E912740C419AD3;
class Class_1_2898945DE6487BDA;
class Class_1_36816D4DE394D200;
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

#define CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFFEDF0)
#define CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAFFEF90)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xAFFCEF0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAFFDDD0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_2D444D75288B6C4F_OFFSET UNITYSDK_OFFSET(0xAFFDD70)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_322305E263B00C3F_OFFSET UNITYSDK_OFFSET(0xAFFC3D0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_3472F4ECEE2A533D_OFFSET UNITYSDK_OFFSET(0xAFFD310)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET UNITYSDK_OFFSET(0xAFFE3D0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAFFF320)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAFFF260)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET UNITYSDK_OFFSET(0xAFFD5C0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAFFF2C0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7CC63CFE66C55887_1_OFFSET UNITYSDK_OFFSET(0xAFFE1E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7CC63CFE66C55887_OFFSET UNITYSDK_OFFSET(0xAFFDFF0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET UNITYSDK_OFFSET(0xAFFDE90)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0xAFFC820)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xAFFEC20)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xAFFECC0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xAFFED50)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAFFEB90)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A7B4F93D0319005D_OFFSET UNITYSDK_OFFSET(0xAFFD180)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_AF0D9CA060A829A6_OFFSET UNITYSDK_OFFSET(0xAFFE8C0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BAB7C14A41799CF3_OFFSET UNITYSDK_OFFSET(0xAFFDE30)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xAFFD060)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BF622B900A7F3625_1_OFFSET UNITYSDK_OFFSET(0xAFFD130)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BF622B900A7F3625_2_OFFSET UNITYSDK_OFFSET(0xAFFD570)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BF622B900A7F3625_OFFSET UNITYSDK_OFFSET(0xAFFD0E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_1_OFFSET UNITYSDK_OFFSET(0xAFFDB70)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_OFFSET UNITYSDK_OFFSET(0xAFFDAB0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_DC32A2CC2252EB57_OFFSET UNITYSDK_OFFSET(0xAFFE7A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E4862AA9115CA55D_1_OFFSET UNITYSDK_OFFSET(0xAFFD8A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_E4862AA9115CA55D_OFFSET UNITYSDK_OFFSET(0xAFFD690)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F0894B421008D021_OFFSET UNITYSDK_OFFSET(0xAFFD3A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_1_OFFSET UNITYSDK_OFFSET(0xAFFDCD0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_OFFSET UNITYSDK_OFFSET(0xAFFDC30)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0xAFFE5E0)
#define CLASS_2_BDAC180F4F27C7EC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xAFFC780)
#define CLASS_2_BDAC180F4F27C7EC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xAFFC380)
#define CLASS_2_BDAC180F4F27C7EC__CTOR_OFFSET UNITYSDK_OFFSET(0xAFFF100)
#define CLASS_2_BDAC180F4F27C7EC__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFFBF20)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAFFF380)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAFFF3E0)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAFFF200)

inline static constexpr unsigned int Class_2_BDAC180F4F27C7EC_TypeDefinitionIndex = 67293;

class Class_2_BDAC180F4F27C7EC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_2; // 0x70
	::RPG::GameCore::GameEntity* Field_2_3; // 0x78
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_4; // 0x80
	::Class_1_02E912740C419AD3* Field_2_5; // 0x88
	::System::Int32 Field_2_6; // 0x90
	::System::Int32 Field_2_7; // 0x94
	::System::Boolean Field_2_8; // 0x98

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

	::System::Void Method_2_BF622B900A7F3625()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BF622B900A7F3625_OFFSET))(this);
	}

	::System::Void Method_2_BF622B900A7F3625_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BF622B900A7F3625_1_OFFSET))(this);
	}

	::System::Void Method_2_A7B4F93D0319005D(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A7B4F93D0319005D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF622B900A7F3625_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BF622B900A7F3625_2_OFFSET))(this);
	}

	::System::Void Method_2_5C48CEB9104412C2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3472F4ECEE2A533D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_3472F4ECEE2A533D_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0894B421008D021(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F0894B421008D021_OFFSET))(this, a1);
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

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
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

	::Class_1_2898945DE6487BDA* Method_2_2D444D75288B6C4F()
	{
		return ((::Class_1_2898945DE6487BDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_2D444D75288B6C4F_OFFSET))(this);
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

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
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
