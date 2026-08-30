#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1086;
class Class_0_16E4307DCC419505_1159;
class Class_0_16E4307DCC419505_1160;
class Class_2_FD4CAB81BEFA440B;
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_34917908B7833130_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A818AF0)
#define CLASS_1_34917908B7833130_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A818D70)
#define CLASS_1_34917908B7833130_GET_MUTEHANDLER_OFFSET UNITYSDK_OFFSET(0x1A818700)
#define CLASS_1_34917908B7833130_GET__ROOT_OFFSET UNITYSDK_OFFSET(0x1A837CC0)
#define CLASS_1_34917908B7833130_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x1A836900)
#define CLASS_1_34917908B7833130_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x1A836650)
#define CLASS_1_34917908B7833130_METHOD_1_0896B79A9E343E83_OFFSET UNITYSDK_OFFSET(0x1A836710)
#define CLASS_1_34917908B7833130_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1A836060)
#define CLASS_1_34917908B7833130_METHOD_1_17CB1CF4F8DDCB81_OFFSET UNITYSDK_OFFSET(0x1A816C20)
#define CLASS_1_34917908B7833130_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1A8354D0)
#define CLASS_1_34917908B7833130_METHOD_1_2379CA8FC73CF2DC_OFFSET UNITYSDK_OFFSET(0x1A835DD0)
#define CLASS_1_34917908B7833130_METHOD_1_2BC47A1A90206138_OFFSET UNITYSDK_OFFSET(0x1A837020)
#define CLASS_1_34917908B7833130_METHOD_1_39076DB8B566935B_OFFSET UNITYSDK_OFFSET(0x1A816A00)
#define CLASS_1_34917908B7833130_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A835790)
#define CLASS_1_34917908B7833130_METHOD_1_393861C56DABFE4E_OFFSET UNITYSDK_OFFSET(0x1A836C80)
#define CLASS_1_34917908B7833130_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x1A8378D0)
#define CLASS_1_34917908B7833130_METHOD_1_3E7178C5ECF017DB_2_OFFSET UNITYSDK_OFFSET(0x1A837920)
#define CLASS_1_34917908B7833130_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1A837880)
#define CLASS_1_34917908B7833130_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A837340)
#define CLASS_1_34917908B7833130_METHOD_1_42E61940F29D91C2_OFFSET UNITYSDK_OFFSET(0x1A837540)
#define CLASS_1_34917908B7833130_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1A835FB0)
#define CLASS_1_34917908B7833130_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A836A70)
#define CLASS_1_34917908B7833130_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x1A8362A0)
#define CLASS_1_34917908B7833130_METHOD_1_4D6D325C865EE52D_OFFSET UNITYSDK_OFFSET(0x1A836AD0)
#define CLASS_1_34917908B7833130_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1A837A00)
#define CLASS_1_34917908B7833130_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x1A835EA0)
#define CLASS_1_34917908B7833130_METHOD_1_65CF685B19AB5EC4_OFFSET UNITYSDK_OFFSET(0x1A834EA0)
#define CLASS_1_34917908B7833130_METHOD_1_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x1A8364C0)
#define CLASS_1_34917908B7833130_METHOD_1_6FEEEF65894B533B_1_OFFSET UNITYSDK_OFFSET(0x1A837190)
#define CLASS_1_34917908B7833130_METHOD_1_6FEEEF65894B533B_OFFSET UNITYSDK_OFFSET(0x1A8370B0)
#define CLASS_1_34917908B7833130_METHOD_1_72A9C35A6067A4C0_OFFSET UNITYSDK_OFFSET(0x1A835820)
#define CLASS_1_34917908B7833130_METHOD_1_74E2789F4C5CBA05_OFFSET UNITYSDK_OFFSET(0x1A835CB0)
#define CLASS_1_34917908B7833130_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x1A836250)
#define CLASS_1_34917908B7833130_METHOD_1_77B35DDF43AFC164_OFFSET UNITYSDK_OFFSET(0x1A836CE0)
#define CLASS_1_34917908B7833130_METHOD_1_7DD66AD8261C01D5_OFFSET UNITYSDK_OFFSET(0x1A835250)
#define CLASS_1_34917908B7833130_METHOD_1_85134B7B20E1588A_1_OFFSET UNITYSDK_OFFSET(0x1A8351B0)
#define CLASS_1_34917908B7833130_METHOD_1_85134B7B20E1588A_OFFSET UNITYSDK_OFFSET(0x1A834E50)
#define CLASS_1_34917908B7833130_METHOD_1_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x1A8363F0)
#define CLASS_1_34917908B7833130_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x1A835650)
#define CLASS_1_34917908B7833130_METHOD_1_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1A8376D0)
#define CLASS_1_34917908B7833130_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1A837B10)
#define CLASS_1_34917908B7833130_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x1A8359B0)
#define CLASS_1_34917908B7833130_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x1A8118F0)
#define CLASS_1_34917908B7833130_METHOD_1_BCBDA32D3E2D3A82_OFFSET UNITYSDK_OFFSET(0x1A837200)
#define CLASS_1_34917908B7833130_METHOD_1_C40C39D308233590_OFFSET UNITYSDK_OFFSET(0x1A834FD0)
#define CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A837760)
#define CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1A8377A0)
#define CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1A8379C0)
#define CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A837690)
#define CLASS_1_34917908B7833130_METHOD_1_CBD3175F635B613A_OFFSET UNITYSDK_OFFSET(0x1A8357D0)
#define CLASS_1_34917908B7833130_METHOD_1_D147751464BA5EBE_1_OFFSET UNITYSDK_OFFSET(0x1A8374D0)
#define CLASS_1_34917908B7833130_METHOD_1_D147751464BA5EBE_OFFSET UNITYSDK_OFFSET(0x1A837460)
#define CLASS_1_34917908B7833130_METHOD_1_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x1A837AB0)
#define CLASS_1_34917908B7833130_METHOD_1_D3D56207AD0AAB7F_OFFSET UNITYSDK_OFFSET(0x1A837120)
#define CLASS_1_34917908B7833130_METHOD_1_D5DFCEDE0C7AB86D_OFFSET UNITYSDK_OFFSET(0x1A836BD0)
#define CLASS_1_34917908B7833130_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A835200)
#define CLASS_1_34917908B7833130_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x1A835530)
#define CLASS_1_34917908B7833130_METHOD_1_EB6CE3A993F4C258_OFFSET UNITYSDK_OFFSET(0x1A835B40)
#define CLASS_1_34917908B7833130_METHOD_1_EC7303699B619A81_OFFSET UNITYSDK_OFFSET(0x1A8367C0)
#define CLASS_1_34917908B7833130_METHOD_1_EE4559E3A2F0A78B_1_OFFSET UNITYSDK_OFFSET(0x1A837620)
#define CLASS_1_34917908B7833130_METHOD_1_EE4559E3A2F0A78B_OFFSET UNITYSDK_OFFSET(0x1A8375B0)
#define CLASS_1_34917908B7833130_METHOD_1_EF63DC3FFA3153D2_OFFSET UNITYSDK_OFFSET(0x1A836B40)
#define CLASS_1_34917908B7833130_METHOD_1_F8EBAFE4624A6F9F_OFFSET UNITYSDK_OFFSET(0x1A837970)
#define CLASS_1_34917908B7833130_METHOD_1_F8F8533555BD67A9_OFFSET UNITYSDK_OFFSET(0x1A8359F0)
#define CLASS_1_34917908B7833130_METHOD_1_FADC1F8DDBE056CA_OFFSET UNITYSDK_OFFSET(0x1A836940)
#define CLASS_1_34917908B7833130_METHOD_1_FB990163A2E62A47_OFFSET UNITYSDK_OFFSET(0x1A811A20)
#define CLASS_1_34917908B7833130_METHOD_1_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0x1A836830)
#define CLASS_1_34917908B7833130_SET__ROOT_OFFSET UNITYSDK_OFFSET(0x1A837CD0)
#define CLASS_1_34917908B7833130__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A837CE0)
#define CLASS_1_34917908B7833130__CTOR_OFFSET UNITYSDK_OFFSET(0x1A811B10)
#define CLASS_1_34917908B7833130__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A837720)
#define CLASS_1_34917908B7833130__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8377E0)
#define CLASS_1_34917908B7833130__ONTICK_OFFSET UNITYSDK_OFFSET(0x1A837820)

inline static constexpr unsigned int Class_1_34917908B7833130_TypeDefinitionIndex = 72941;

class Class_1_34917908B7833130 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CFPCILNJAKD()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_34917908B7833130_TypeDefinitionIndex)->GetStaticField(0xD410);
	}
	::RPG::Client::Promises::Promise* AMMPGAEDBKJ; // 0x10
	::System::Collections::Generic::List_1<::Class_1_34917908B7833130*>* NPOEHLAOFJI; // 0x18
	::UnityEngine::Transform* __Root_k__BackingField; // 0x20
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x28
	::RPG::Client::UIController* CFKHNPGEAJA; // 0x30
	::System::Collections::Generic::List_1<::Class_2_FD4CAB81BEFA440B*>* PDDLJCKEPBF; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1159*>* BLIIIFGHHDI; // 0x40
	::Class_1_34917908B7833130* KJMDDAHEODL; // 0x48
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1160*>* HBHFNDKBOLI; // 0x50
	::System::Boolean FMNEEONAMNO; // 0x58
	::System::Boolean NHIGCALGHBM; // 0x59
	::System::Boolean DAAGMAFHNPJ; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130__CCTOR_OFFSET))();
	}

	::System::Void Method_1_85134B7B20E1588A(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_85134B7B20E1588A_OFFSET))(this, a1);
	}

	::System::Void Method_1_65CF685B19AB5EC4(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_65CF685B19AB5EC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C40C39D308233590(::RPG::Client::UIController* a1, ::Class_1_34917908B7833130* a2, ::Struct_2_96F8F0A04B900A9E a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::Class_1_34917908B7833130*, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_C40C39D308233590_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7DD66AD8261C01D5(::Class_0_16E4307DCC419505_1086* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1086*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_7DD66AD8261C01D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CBD3175F635B613A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_CBD3175F635B613A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_F8F8533555BD67A9(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_F8F8533555BD67A9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_1_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0896B79A9E343E83(::Class_1_34917908B7833130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_0896B79A9E343E83_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_39076DB8B566935B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_39076DB8B566935B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_FADC1F8DDBE056CA(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_FADC1F8DDBE056CA_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_4D6D325C865EE52D(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_4D6D325C865EE52D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_74E2789F4C5CBA05(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_74E2789F4C5CBA05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EF63DC3FFA3153D2(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_EF63DC3FFA3153D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EB6CE3A993F4C258(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_EB6CE3A993F4C258_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D5DFCEDE0C7AB86D(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_D5DFCEDE0C7AB86D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_393861C56DABFE4E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_393861C56DABFE4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_77B35DDF43AFC164(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_77B35DDF43AFC164_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2BC47A1A90206138(::System::UInt16 a1, ::RPG::Client::RspHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_2BC47A1A90206138_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_17CB1CF4F8DDCB81(::UnityEngine::UI::Button* a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_17CB1CF4F8DDCB81_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6FEEEF65894B533B(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_6FEEEF65894B533B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3D56207AD0AAB7F(::InControl::InputControlType a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_D3D56207AD0AAB7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6FEEEF65894B533B_1(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_6FEEEF65894B533B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BCBDA32D3E2D3A82(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_BCBDA32D3E2D3A82_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_FB990163A2E62A47(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_FB990163A2E62A47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D147751464BA5EBE(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_D147751464BA5EBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D147751464BA5EBE_1(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_D147751464BA5EBE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_42E61940F29D91C2(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_42E61940F29D91C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE4559E3A2F0A78B(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_EE4559E3A2F0A78B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE4559E3A2F0A78B_1(::UnityEngine::UI::Image* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_EE4559E3A2F0A78B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130__ONBIND_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_3E7178C5ECF017DB_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8EBAFE4624A6F9F(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_F8EBAFE4624A6F9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_85134B7B20E1588A_1(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_85134B7B20E1588A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_34917908B7833130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_34917908B7833130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EC7303699B619A81(::Class_1_34917908B7833130* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_34917908B7833130*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_EC7303699B619A81_OFFSET))(this, a1);
	}

	::System::Void Method_1_2379CA8FC73CF2DC(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_2379CA8FC73CF2DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_72A9C35A6067A4C0(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_72A9C35A6067A4C0_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean get_MuteHandler()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_GET_MUTEHANDLER_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_METHOD_1_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get__Root()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_GET__ROOT_OFFSET))(this);
	}

	::System::Void set__Root(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_34917908B7833130_SET__ROOT_OFFSET))(this, a1);
	}
};
