#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B213C739629BB369_State.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_37;
class Class_2_64EE36C1D6143448;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class NamedCurve; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::GameCore { class TeamTowersRobotConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B213C739629BB369_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x169CDEE0)
#define CLASS_1_B213C739629BB369_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x169CE4E0)
#define CLASS_1_B213C739629BB369_METHOD_1_397374046D61F348_OFFSET UNITYSDK_OFFSET(0x169CE810)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x169CDFF0)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x169CE070)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x169CDE60)
#define CLASS_1_B213C739629BB369_METHOD_1_4373A28D9DB718D5_OFFSET UNITYSDK_OFFSET(0x169CDC00)
#define CLASS_1_B213C739629BB369_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x169D01D0)
#define CLASS_1_B213C739629BB369_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x169CDA90)
#define CLASS_1_B213C739629BB369_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x169CEEE0)
#define CLASS_1_B213C739629BB369_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x169CF6C0)
#define CLASS_1_B213C739629BB369_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x169D0AB0)
#define CLASS_1_B213C739629BB369_METHOD_1_753A3CECCA76D6CD_OFFSET UNITYSDK_OFFSET(0x169D02F0)
#define CLASS_1_B213C739629BB369_METHOD_1_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0x169CEC40)
#define CLASS_1_B213C739629BB369_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x169CEDE0)
#define CLASS_1_B213C739629BB369_METHOD_1_797DA3F60D987CC8_OFFSET UNITYSDK_OFFSET(0x169D0400)
#define CLASS_1_B213C739629BB369_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x169CE9B0)
#define CLASS_1_B213C739629BB369_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x169D0C00)
#define CLASS_1_B213C739629BB369_METHOD_1_815FA992A09E827B_OFFSET UNITYSDK_OFFSET(0x169CD4B0)
#define CLASS_1_B213C739629BB369_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x169D0B50)
#define CLASS_1_B213C739629BB369_METHOD_1_881B6DBFF210C6D0_OFFSET UNITYSDK_OFFSET(0x169CE0F0)
#define CLASS_1_B213C739629BB369_METHOD_1_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0x169D0740)
#define CLASS_1_B213C739629BB369_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x169CFEE0)
#define CLASS_1_B213C739629BB369_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x169CF3B0)
#define CLASS_1_B213C739629BB369_METHOD_1_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x169CFC60)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x169CFFA0)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x169D0000)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x169D0060)
#define CLASS_1_B213C739629BB369_METHOD_1_9BA775FA6779D988_OFFSET UNITYSDK_OFFSET(0x169CF5B0)
#define CLASS_1_B213C739629BB369_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0x169CEE30)
#define CLASS_1_B213C739629BB369_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x169CF160)
#define CLASS_1_B213C739629BB369_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x169CE440)
#define CLASS_1_B213C739629BB369_METHOD_1_C03CD642451DA289_OFFSET UNITYSDK_OFFSET(0x169D08F0)
#define CLASS_1_B213C739629BB369_METHOD_1_C11C83AF9E500688_OFFSET UNITYSDK_OFFSET(0x169CE690)
#define CLASS_1_B213C739629BB369_METHOD_1_C154350CD1860109_OFFSET UNITYSDK_OFFSET(0x169D00C0)
#define CLASS_1_B213C739629BB369_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x169CD3F0)
#define CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_1_OFFSET UNITYSDK_OFFSET(0x169D06B0)
#define CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x169D0F10)
#define CLASS_1_B213C739629BB369_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x169CE790)
#define CLASS_1_B213C739629BB369_METHOD_1_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0x169CD4C0)
#define CLASS_1_B213C739629BB369_METHOD_1_D7B5D20B6674C9BD_OFFSET UNITYSDK_OFFSET(0x169CD5B0)
#define CLASS_1_B213C739629BB369_METHOD_1_E3092075506D7C0F_OFFSET UNITYSDK_OFFSET(0x169CD1D0)
#define CLASS_1_B213C739629BB369_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x169CF640)
#define CLASS_1_B213C739629BB369_METHOD_1_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0x169CF7E0)
#define CLASS_1_B213C739629BB369__CCTOR_OFFSET UNITYSDK_OFFSET(0x169D0FA0)
#define CLASS_1_B213C739629BB369__CTOR_OFFSET UNITYSDK_OFFSET(0x169CD250)

inline static constexpr unsigned int Class_1_B213C739629BB369_TypeDefinitionIndex = 75143;

class Class_1_B213C739629BB369 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0xEF60);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0xEF64);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0xEF68);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0xEF6C);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0xEF70);
	}
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::Single Field_1_9; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	::RPG::Client::NamedCurve* Field_1_16; // 0x10
	::RPG::Client::UIPrefabLoader* Field_1_17; // 0x18
	::UnityEngine::Animator* Field_1_18; // 0x20
	::UnityEngine::GameObject* Field_1_19; // 0x28
	::UnityEngine::Transform* Field_1_20; // 0x30
	::UnityEngine::GameObject* Field_1_21; // 0x38
	::UnityEngine::Transform* Field_1_22; // 0x40
	::RPG::Client::NamedCurve* Field_1_23; // 0x48
	::RPG::Client::NamedCurve* Field_1_24; // 0x50
	::RPG::Client::MonoAnimationTrigger* Field_1_25; // 0x58
	::UnityEngine::Transform* Field_1_26; // 0x60
	::UnityEngine::Transform* Field_1_27; // 0x68
	::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_28; // 0x70
	::Class_0_16E4307DCC419505_37* Field_1_29; // 0x78
	::UnityEngine::GameObject* Field_1_30; // 0x80
	::System::Single Field_1_31; // 0x88
	::UnityEngine::Vector3 Field_1_32; // 0x8C
	::System::Single Field_1_33; // 0x98
	::System::Single Field_1_34; // 0x9C
	::System::Single Field_1_35; // 0xA0
	::System::Single Field_1_36; // 0xA4
	::System::Single Field_1_37; // 0xA8
	::System::Boolean Field_1_38; // 0xAC
	::System::Boolean Field_1_39; // 0xAD
	::System::Single Field_1_40; // 0xB0
	::UnityEngine::Vector3 Field_1_41; // 0xB4
	::System::Single Field_1_42; // 0xC0
	::UnityEngine::Vector3 Field_1_43; // 0xC4
	::System::Single Field_1_44; // 0xD0
	::System::Single Field_1_45; // 0xD4
	::UnityEngine::Vector3 Field_1_46; // 0xD8
	::System::Single Field_1_47; // 0xE4
	::UnityEngine::Vector3 Field_1_48; // 0xE8
	::System::Single Field_1_49; // 0xF4
	::System::Single Field_1_50; // 0xF8
	::Class_1_B213C739629BB369_State Field_1_51; // 0xFC
	::System::Single Field_1_52; // 0x100
	::UnityEngine::Vector3 Field_1_53; // 0x104
	::System::Single Field_1_54; // 0x110
	::System::Single Field_1_55; // 0x114
	::System::Single Field_1_56; // 0x118
	::System::Single Field_1_57; // 0x11C
	::UnityEngine::Vector3 Field_1_58; // 0x120
	::UnityEngine::Vector3 Field_1_59; // 0x12C
	::System::Single Field_1_60; // 0x138
	::System::Single Field_1_61; // 0x13C

	::System::Void _ctor(::System::Boolean a1, ::RPG::GameCore::TeamTowersRobotConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::TeamTowersRobotConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369__CCTOR_OFFSET))();
	}

	::Class_2_64EE36C1D6143448* Method_1_E3092075506D7C0F()
	{
		return ((::Class_2_64EE36C1D6143448*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_E3092075506D7C0F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::Class_1_B213C739629BB369_State Method_1_815FA992A09E827B()
	{
		return ((::Class_1_B213C739629BB369_State(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_815FA992A09E827B_OFFSET))(this);
	}

	::System::Void Method_1_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7B5D20B6674C9BD(::System::String* a1, ::UnityEngine::Transform* a2, ::Class_0_16E4307DCC419505_37* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_37*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_D7B5D20B6674C9BD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C11C83AF9E500688(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C11C83AF9E500688_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_A03C765EBC5D1677(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_C154350CD1860109()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C154350CD1860109_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F675341C48ED6437()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_F675341C48ED6437_OFFSET))(this);
	}

	::System::Void Method_1_397374046D61F348(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_397374046D61F348_OFFSET))(this, a1);
	}

	::System::Void Method_1_797DA3F60D987CC8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_797DA3F60D987CC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_899EC372DEC6EBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_899EC372DEC6EBDF_OFFSET))(this, a1);
	}

	::System::Single Method_1_C03CD642451DA289()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C03CD642451DA289_OFFSET))(this);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	::System::Void Method_1_4373A28D9DB718D5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4373A28D9DB718D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BA775FA6779D988(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9BA775FA6779D988_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Single Method_1_753A3CECCA76D6CD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_753A3CECCA76D6CD_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_C5F9823D509784CD_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_881B6DBFF210C6D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_881B6DBFF210C6D0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_7619D212F4D762A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_7619D212F4D762A1_OFFSET))(this, a1);
	}
};
