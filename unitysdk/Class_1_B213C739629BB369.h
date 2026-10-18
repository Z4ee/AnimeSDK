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

#define CLASS_1_B213C739629BB369_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xCC91C00)
#define CLASS_1_B213C739629BB369_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xCC92200)
#define CLASS_1_B213C739629BB369_METHOD_1_397374046D61F348_OFFSET UNITYSDK_OFFSET(0xCC92530)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCC91D10)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCC91D90)
#define CLASS_1_B213C739629BB369_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCC91B80)
#define CLASS_1_B213C739629BB369_METHOD_1_4373A28D9DB718D5_OFFSET UNITYSDK_OFFSET(0xCC91910)
#define CLASS_1_B213C739629BB369_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xCC93F00)
#define CLASS_1_B213C739629BB369_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0xCC917A0)
#define CLASS_1_B213C739629BB369_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xCC92C00)
#define CLASS_1_B213C739629BB369_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xCC933D0)
#define CLASS_1_B213C739629BB369_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0xCC947E0)
#define CLASS_1_B213C739629BB369_METHOD_1_5892D030B127E82F_OFFSET UNITYSDK_OFFSET(0xCC93970)
#define CLASS_1_B213C739629BB369_METHOD_1_753A3CECCA76D6CD_OFFSET UNITYSDK_OFFSET(0xCC94020)
#define CLASS_1_B213C739629BB369_METHOD_1_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0xCC92960)
#define CLASS_1_B213C739629BB369_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xCC92B00)
#define CLASS_1_B213C739629BB369_METHOD_1_797DA3F60D987CC8_OFFSET UNITYSDK_OFFSET(0xCC94130)
#define CLASS_1_B213C739629BB369_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0xCC926D0)
#define CLASS_1_B213C739629BB369_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xCC94930)
#define CLASS_1_B213C739629BB369_METHOD_1_815FA992A09E827B_OFFSET UNITYSDK_OFFSET(0xCC911C0)
#define CLASS_1_B213C739629BB369_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0xCC94880)
#define CLASS_1_B213C739629BB369_METHOD_1_881B6DBFF210C6D0_OFFSET UNITYSDK_OFFSET(0xCC91E10)
#define CLASS_1_B213C739629BB369_METHOD_1_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0xCC94470)
#define CLASS_1_B213C739629BB369_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCC93C10)
#define CLASS_1_B213C739629BB369_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xCC930C0)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xCC93CD0)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xCC93D30)
#define CLASS_1_B213C739629BB369_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC93D90)
#define CLASS_1_B213C739629BB369_METHOD_1_9BA775FA6779D988_OFFSET UNITYSDK_OFFSET(0xCC932C0)
#define CLASS_1_B213C739629BB369_METHOD_1_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0xCC92B50)
#define CLASS_1_B213C739629BB369_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xCC92E70)
#define CLASS_1_B213C739629BB369_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCC92160)
#define CLASS_1_B213C739629BB369_METHOD_1_C03CD642451DA289_OFFSET UNITYSDK_OFFSET(0xCC94620)
#define CLASS_1_B213C739629BB369_METHOD_1_C11C83AF9E500688_OFFSET UNITYSDK_OFFSET(0xCC923B0)
#define CLASS_1_B213C739629BB369_METHOD_1_C154350CD1860109_OFFSET UNITYSDK_OFFSET(0xCC93DF0)
#define CLASS_1_B213C739629BB369_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xCC91100)
#define CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_1_OFFSET UNITYSDK_OFFSET(0xCC943E0)
#define CLASS_1_B213C739629BB369_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0xCC94C40)
#define CLASS_1_B213C739629BB369_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xCC924B0)
#define CLASS_1_B213C739629BB369_METHOD_1_CD762BD492FAC131_OFFSET UNITYSDK_OFFSET(0xCC911D0)
#define CLASS_1_B213C739629BB369_METHOD_1_D7B5D20B6674C9BD_OFFSET UNITYSDK_OFFSET(0xCC912C0)
#define CLASS_1_B213C739629BB369_METHOD_1_E3092075506D7C0F_OFFSET UNITYSDK_OFFSET(0xCC90F20)
#define CLASS_1_B213C739629BB369_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xCC93350)
#define CLASS_1_B213C739629BB369_METHOD_1_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0xCC934F0)
#define CLASS_1_B213C739629BB369__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC94CD0)
#define CLASS_1_B213C739629BB369__CTOR_OFFSET UNITYSDK_OFFSET(0xCC90FA0)

inline static constexpr unsigned int Class_1_B213C739629BB369_TypeDefinitionIndex = 79111;

class Class_1_B213C739629BB369 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_AOLONKKFAGP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x8080);
	}
	static ::System::Int32* StaticGet_OFEPLACCJPF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x8084);
	}
	static ::System::Int32* StaticGet_IFPLMHIOAPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x8088);
	}
	static ::System::Int32* StaticGet_DKJPHIKLIKJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x808C);
	}
	static ::System::Int32* StaticGet_DJJNGGBOPPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B213C739629BB369_TypeDefinitionIndex)->GetStaticField(0x8090);
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
	::UnityEngine::Animator* APPGGMLEPLN; // 0x10
	::UnityEngine::Transform* FONIIPOKFBC; // 0x18
	::RPG::Client::NamedCurve* DKBKFGAJDLJ; // 0x20
	::UnityEngine::GameObject* PEDCCCBPFOM; // 0x28
	::UnityEngine::Transform* OFNKMNBNPFB; // 0x30
	::RPG::Client::NamedCurve* IHPJAMCDEFP; // 0x38
	::Class_0_16E4307DCC419505_37* MPJPDNHHENK; // 0x40
	::UnityEngine::Transform* CEIICMEKDNE; // 0x48
	::UnityEngine::GameObject* PFFFHDNFGKB; // 0x50
	::RPG::Client::NamedCurve* OOFILFNOJPG; // 0x58
	::UnityEngine::Transform* KNDPLAOCEKG; // 0x60
	::UnityEngine::GameObject* DMJGAFPPJCB; // 0x68
	::RPG::Client::MonoAnimationTrigger* GOLLNCJAPJC; // 0x70
	::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* JEPGOJGADHI; // 0x78
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x80
	::System::Single AADPCFNNGNM; // 0x88
	::System::Single EEEOMMJEGCC; // 0x8C
	::System::Single LMINLHJNCPH; // 0x90
	::System::Single KOEMDJNFMKI; // 0x94
	::UnityEngine::Vector3 ADGHBKGNONA; // 0x98
	::UnityEngine::Vector3 MHINNKLHMFJ; // 0xA4
	::System::Single OJPNEIEIHEA; // 0xB0
	::UnityEngine::Vector3 CNFABNFAINN; // 0xB4
	::UnityEngine::Vector3 ENMOJPCNPCO; // 0xC0
	::System::Single MJFIPPMLHEA; // 0xCC
	::UnityEngine::Vector3 BJNKIKNBFOJ; // 0xD0
	::System::Single KPIGLDIFOAO; // 0xDC
	::System::Single PELGNOEPMEP; // 0xE0
	::Class_1_B213C739629BB369_State JJBOPOPCOCH; // 0xE4
	::UnityEngine::Vector3 IKKNJMJCDOJ; // 0xE8
	::System::Single FJDBLCBNNHF; // 0xF4
	::System::Single FNDLONENDNP; // 0xF8
	::System::Single BMOALGGJNCL; // 0xFC
	::System::Single LMMGCJKEHOF; // 0x100
	::System::Boolean AMJCALKDCDH; // 0x104
	::System::Boolean ACICALCCILD; // 0x105
	::System::Single HGAPOBNBKBJ; // 0x108
	::System::Single NAGOFNDKGDB; // 0x10C
	::System::Single FNICEFKGJAF; // 0x110
	::System::Single DMBFACIJPKN; // 0x114
	::System::Single NGDEHDOMDGG; // 0x118
	::UnityEngine::Vector3 BMMLIDOCCKB; // 0x11C
	::System::Single BPHIMOFKKGD; // 0x128
	::System::Single HHBAMKJNMDC; // 0x12C
	::UnityEngine::Vector3 KODEKFOLOAC; // 0x130
	::System::Single JOPEIKFEFLJ; // 0x13C

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

	::System::Void Method_1_5892D030B127E82F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213C739629BB369_METHOD_1_5892D030B127E82F_OFFSET))(this);
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
