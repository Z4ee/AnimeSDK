#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_88E412E73F87E712_State.h"
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

#define CLASS_1_88E412E73F87E712_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xCC96F90)
#define CLASS_1_88E412E73F87E712_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xCC975D0)
#define CLASS_1_88E412E73F87E712_METHOD_1_397374046D61F348_OFFSET UNITYSDK_OFFSET(0xCC97900)
#define CLASS_1_88E412E73F87E712_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCC970A0)
#define CLASS_1_88E412E73F87E712_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCC97130)
#define CLASS_1_88E412E73F87E712_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCC96F10)
#define CLASS_1_88E412E73F87E712_METHOD_1_4373A28D9DB718D5_OFFSET UNITYSDK_OFFSET(0xCC96CB0)
#define CLASS_1_88E412E73F87E712_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xCC992D0)
#define CLASS_1_88E412E73F87E712_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xCC96B40)
#define CLASS_1_88E412E73F87E712_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xCC97FE0)
#define CLASS_1_88E412E73F87E712_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xCC987B0)
#define CLASS_1_88E412E73F87E712_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0xCC99BB0)
#define CLASS_1_88E412E73F87E712_METHOD_1_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0xCC98D50)
#define CLASS_1_88E412E73F87E712_METHOD_1_753A3CECCA76D6CD_OFFSET UNITYSDK_OFFSET(0xCC993F0)
#define CLASS_1_88E412E73F87E712_METHOD_1_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0xCC97D40)
#define CLASS_1_88E412E73F87E712_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xCC97EE0)
#define CLASS_1_88E412E73F87E712_METHOD_1_7829C51DA0CC822B_OFFSET UNITYSDK_OFFSET(0xCC971B0)
#define CLASS_1_88E412E73F87E712_METHOD_1_782FFE70056E1222_OFFSET UNITYSDK_OFFSET(0xCC96640)
#define CLASS_1_88E412E73F87E712_METHOD_1_797DA3F60D987CC8_OFFSET UNITYSDK_OFFSET(0xCC99500)
#define CLASS_1_88E412E73F87E712_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0xCC97AB0)
#define CLASS_1_88E412E73F87E712_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xCC99D00)
#define CLASS_1_88E412E73F87E712_METHOD_1_815FA992A09E827B_OFFSET UNITYSDK_OFFSET(0xCC96540)
#define CLASS_1_88E412E73F87E712_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xCC99C50)
#define CLASS_1_88E412E73F87E712_METHOD_1_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0xCC99840)
#define CLASS_1_88E412E73F87E712_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCC98FE0)
#define CLASS_1_88E412E73F87E712_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xCC984A0)
#define CLASS_1_88E412E73F87E712_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xCC990A0)
#define CLASS_1_88E412E73F87E712_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xCC99100)
#define CLASS_1_88E412E73F87E712_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC99160)
#define CLASS_1_88E412E73F87E712_METHOD_1_9BA775FA6779D988_OFFSET UNITYSDK_OFFSET(0xCC986A0)
#define CLASS_1_88E412E73F87E712_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0xCC97F30)
#define CLASS_1_88E412E73F87E712_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xCC98250)
#define CLASS_1_88E412E73F87E712_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCC97530)
#define CLASS_1_88E412E73F87E712_METHOD_1_C03CD642451DA289_OFFSET UNITYSDK_OFFSET(0xCC999F0)
#define CLASS_1_88E412E73F87E712_METHOD_1_C11C83AF9E500688_OFFSET UNITYSDK_OFFSET(0xCC97780)
#define CLASS_1_88E412E73F87E712_METHOD_1_C154350CD1860109_OFFSET UNITYSDK_OFFSET(0xCC991C0)
#define CLASS_1_88E412E73F87E712_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xCC96480)
#define CLASS_1_88E412E73F87E712_METHOD_1_C5F9823D509784CD_1_OFFSET UNITYSDK_OFFSET(0xCC997B0)
#define CLASS_1_88E412E73F87E712_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0xCC9A010)
#define CLASS_1_88E412E73F87E712_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xCC97880)
#define CLASS_1_88E412E73F87E712_METHOD_1_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0xCC96550)
#define CLASS_1_88E412E73F87E712_METHOD_1_E3092075506D7C0F_OFFSET UNITYSDK_OFFSET(0xCC96260)
#define CLASS_1_88E412E73F87E712_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xCC98730)
#define CLASS_1_88E412E73F87E712_METHOD_1_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0xCC988D0)
#define CLASS_1_88E412E73F87E712__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC9A0A0)
#define CLASS_1_88E412E73F87E712__CTOR_OFFSET UNITYSDK_OFFSET(0xCC962E0)

inline static constexpr unsigned int Class_1_88E412E73F87E712_TypeDefinitionIndex = 79112;

class Class_1_88E412E73F87E712 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_DKJPHIKLIKJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E412E73F87E712_TypeDefinitionIndex)->GetStaticField(0x8420);
	}
	static ::System::Int32* StaticGet_IFPLMHIOAPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E412E73F87E712_TypeDefinitionIndex)->GetStaticField(0x8424);
	}
	static ::System::Int32* StaticGet_OFEPLACCJPF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E412E73F87E712_TypeDefinitionIndex)->GetStaticField(0x8428);
	}
	static ::System::Int32* StaticGet_DJJNGGBOPPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E412E73F87E712_TypeDefinitionIndex)->GetStaticField(0x842C);
	}
	static ::System::Int32* StaticGet_AOLONKKFAGP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E412E73F87E712_TypeDefinitionIndex)->GetStaticField(0x8430);
	}
	// static const ::System::String* CNEFNNNIHDF; // 0x0
	// static const ::System::Single GDPICIAKMLF; // 0x0
	// static const ::System::String* PGOLNMDJIMO; // 0x0
	// static const ::System::String* BAPLKKPKLCB; // 0x0
	// static const ::System::Single HCEPNMIDKKH; // 0x0
	// static const ::System::Single JPNBMNMPFBB; // 0x0
	// static const ::System::String* LHBENJIEIBO; // 0x0
	// static const ::System::String* KBEFDBCMHLN; // 0x0
	// static const ::System::String* OBBBHGDHBLJ; // 0x0
	// static const ::System::String* CACDLKPPNPN; // 0x0
	// static const ::System::Single PNCHJDLKHPJ; // 0x0
	::UnityEngine::Transform* OFNKMNBNPFB; // 0x10
	::UnityEngine::Transform* FONIIPOKFBC; // 0x18
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x20
	::RPG::Client::NamedCurve* OOFILFNOJPG; // 0x28
	::RPG::Client::NamedCurve* IHPJAMCDEFP; // 0x30
	::RPG::Client::MonoAnimationTrigger* GOLLNCJAPJC; // 0x38
	::UnityEngine::GameObject* PEDCCCBPFOM; // 0x40
	::UnityEngine::Transform* KNDPLAOCEKG; // 0x48
	::UnityEngine::GameObject* DMJGAFPPJCB; // 0x50
	::Class_0_16E4307DCC419505_37* MPJPDNHHENK; // 0x58
	::UnityEngine::Transform* CEIICMEKDNE; // 0x60
	::UnityEngine::Animator* APPGGMLEPLN; // 0x68
	::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* JEPGOJGADHI; // 0x70
	::UnityEngine::GameObject* PFFFHDNFGKB; // 0x78
	::RPG::Client::NamedCurve* DKBKFGAJDLJ; // 0x80
	::System::Single HHBAMKJNMDC; // 0x88
	::System::Single FNDLONENDNP; // 0x8C
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x90
	::System::Single KOEMDJNFMKI; // 0x9C
	::System::Single OJPNEIEIHEA; // 0xA0
	::UnityEngine::Vector3 CNFABNFAINN; // 0xA4
	::System::Single LMINLHJNCPH; // 0xB0
	::UnityEngine::Vector3 ADGHBKGNONA; // 0xB4
	::System::Single KPIGLDIFOAO; // 0xC0
	::System::Single BMOALGGJNCL; // 0xC4
	::System::Single NGDEHDOMDGG; // 0xC8
	::System::Single MJFIPPMLHEA; // 0xCC
	::UnityEngine::Vector3 IKKNJMJCDOJ; // 0xD0
	::System::Single HGAPOBNBKBJ; // 0xDC
	::Class_1_88E412E73F87E712_State JJBOPOPCOCH; // 0xE0
	::System::Single FNICEFKGJAF; // 0xE4
	::System::Single NAGOFNDKGDB; // 0xE8
	::System::Boolean ACICALCCILD; // 0xEC
	::System::Boolean AMJCALKDCDH; // 0xED
	::System::Single DMBFACIJPKN; // 0xF0
	::System::Single AADPCFNNGNM; // 0xF4
	::UnityEngine::Vector3 BMMLIDOCCKB; // 0xF8
	::System::Single BPHIMOFKKGD; // 0x104
	::System::Single FJDBLCBNNHF; // 0x108
	::System::Single JOPEIKFEFLJ; // 0x10C
	::UnityEngine::Vector3 MHINNKLHMFJ; // 0x110
	::UnityEngine::Vector3 KODEKFOLOAC; // 0x11C
	::System::Single EEEOMMJEGCC; // 0x128
	::UnityEngine::Vector3 ENMOJPCNPCO; // 0x12C
	::System::Single PELGNOEPMEP; // 0x138
	::System::Single LMMGCJKEHOF; // 0x13C

	::System::Void _ctor(::System::Boolean a1, ::RPG::GameCore::TeamTowersRobotConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::TeamTowersRobotConfig*))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712__CCTOR_OFFSET))();
	}

	::Class_2_64EE36C1D6143448* Method_1_E3092075506D7C0F()
	{
		return ((::Class_2_64EE36C1D6143448*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_E3092075506D7C0F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::Class_1_88E412E73F87E712_State Method_1_815FA992A09E827B()
	{
		return ((::Class_1_88E412E73F87E712_State(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_815FA992A09E827B_OFFSET))(this);
	}

	::System::Void Method_1_CD762BD492FAC131(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_CD762BD492FAC131_OFFSET))(this, a1);
	}

	::System::Void Method_1_782FFE70056E1222(::System::String* a1, ::UnityEngine::Transform* a2, ::Class_0_16E4307DCC419505_37* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::Class_0_16E4307DCC419505_37*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_782FFE70056E1222_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_C11C83AF9E500688(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_C11C83AF9E500688_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_A03C765EBC5D1677(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_5892D030B127E82F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_5892D030B127E82F_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_C154350CD1860109()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_C154350CD1860109_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F675341C48ED6437()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_F675341C48ED6437_OFFSET))(this);
	}

	::System::Void Method_1_397374046D61F348(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_397374046D61F348_OFFSET))(this, a1);
	}

	::System::Void Method_1_797DA3F60D987CC8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_797DA3F60D987CC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_899EC372DEC6EBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_899EC372DEC6EBDF_OFFSET))(this, a1);
	}

	::System::Single Method_1_C03CD642451DA289()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_C03CD642451DA289_OFFSET))(this);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	::System::Void Method_1_4373A28D9DB718D5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_4373A28D9DB718D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BA775FA6779D988(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_9BA775FA6779D988_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Single Method_1_753A3CECCA76D6CD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_753A3CECCA76D6CD_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_C5F9823D509784CD_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_C5F9823D509784CD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7829C51DA0CC822B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_7829C51DA0CC822B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_7619D212F4D762A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88E412E73F87E712_METHOD_1_7619D212F4D762A1_OFFSET))(this, a1);
	}
};
