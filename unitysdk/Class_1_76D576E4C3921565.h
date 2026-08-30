#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76D576E4C3921565_StopReason.h"
#include "unitysdk/Class_1_76D576E4C3921565_TravelState.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_76D576E4C3921565_Class_3_95F370961AEDDA1E;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoCityTrain; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ConfigCityTrain; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstantiateRequest; }

#define CLASS_1_76D576E4C3921565_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179B3A90)
#define CLASS_1_76D576E4C3921565_METHOD_1_0712E145E7F0DE18_OFFSET UNITYSDK_OFFSET(0x179B65E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x179B4D30)
#define CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x179B4240)
#define CLASS_1_76D576E4C3921565_METHOD_1_1B3BFD2994634DD8_1_OFFSET UNITYSDK_OFFSET(0x179B50E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_1B3BFD2994634DD8_OFFSET UNITYSDK_OFFSET(0x179B4E70)
#define CLASS_1_76D576E4C3921565_METHOD_1_1F76F28346553EF5_OFFSET UNITYSDK_OFFSET(0x179B3F30)
#define CLASS_1_76D576E4C3921565_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x179B77E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_2746E90F93D616D2_OFFSET UNITYSDK_OFFSET(0x179B5060)
#define CLASS_1_76D576E4C3921565_METHOD_1_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x179B56A0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x179B41A0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_2_OFFSET UNITYSDK_OFFSET(0x179B69B0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_3_OFFSET UNITYSDK_OFFSET(0x179B6560)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x179B40C0)
#define CLASS_1_76D576E4C3921565_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x179B76B0)
#define CLASS_1_76D576E4C3921565_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x179B6670)
#define CLASS_1_76D576E4C3921565_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x179B4770)
#define CLASS_1_76D576E4C3921565_METHOD_1_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0x179B61E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_3D04ABD7A1127841_OFFSET UNITYSDK_OFFSET(0x179B6760)
#define CLASS_1_76D576E4C3921565_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179B5620)
#define CLASS_1_76D576E4C3921565_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x179B4320)
#define CLASS_1_76D576E4C3921565_METHOD_1_4C514722B3933D5D_OFFSET UNITYSDK_OFFSET(0x179B7850)
#define CLASS_1_76D576E4C3921565_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x179B78C0)
#define CLASS_1_76D576E4C3921565_METHOD_1_594ACB3D93BCCD52_OFFSET UNITYSDK_OFFSET(0x179B4A70)
#define CLASS_1_76D576E4C3921565_METHOD_1_5AB47D2936D3FF40_OFFSET UNITYSDK_OFFSET(0x179B4860)
#define CLASS_1_76D576E4C3921565_METHOD_1_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x179B64C0)
#define CLASS_1_76D576E4C3921565_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x179B7710)
#define CLASS_1_76D576E4C3921565_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x179B4F40)
#define CLASS_1_76D576E4C3921565_METHOD_1_69647F4A1A5CADD6_OFFSET UNITYSDK_OFFSET(0x179B6F30)
#define CLASS_1_76D576E4C3921565_METHOD_1_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x179B58E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x179B5E50)
#define CLASS_1_76D576E4C3921565_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x179B3D80)
#define CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_1_OFFSET UNITYSDK_OFFSET(0x179B6E40)
#define CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_OFFSET UNITYSDK_OFFSET(0x179B6A40)
#define CLASS_1_76D576E4C3921565_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x179B4590)
#define CLASS_1_76D576E4C3921565_METHOD_1_A1ACE862F725B0BD_OFFSET UNITYSDK_OFFSET(0x179B6B80)
#define CLASS_1_76D576E4C3921565_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x179B6160)
#define CLASS_1_76D576E4C3921565_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x179B60A0)
#define CLASS_1_76D576E4C3921565_METHOD_1_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x179B51D0)
#define CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x179B6B30)
#define CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179B4150)
#define CLASS_1_76D576E4C3921565_METHOD_1_CB75E63F478E74E1_OFFSET UNITYSDK_OFFSET(0x179B3EE0)
#define CLASS_1_76D576E4C3921565_METHOD_1_CD246366B86B3771_OFFSET UNITYSDK_OFFSET(0x179B7230)
#define CLASS_1_76D576E4C3921565_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x179B43A0)
#define CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_1_OFFSET UNITYSDK_OFFSET(0x179B3E70)
#define CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x179B3E00)
#define CLASS_1_76D576E4C3921565_METHOD_1_E6EAED99E649CAAD_OFFSET UNITYSDK_OFFSET(0x179B52F0)
#define CLASS_1_76D576E4C3921565__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B78D0)
#define CLASS_1_76D576E4C3921565__CTOR_OFFSET UNITYSDK_OFFSET(0x179B3900)

inline static constexpr unsigned int Class_1_76D576E4C3921565_TypeDefinitionIndex = 69126;

class Class_1_76D576E4C3921565 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_AGDADAPFPBE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D576E4C3921565_TypeDefinitionIndex)->GetStaticField(0x66BD0);
	}
	// static const ::System::Int32 FNFEHNLHDJN = 0xA; // 0x0
	// static const ::System::Single DGNGIDCMMNL; // 0x0
	// static const ::System::Single DFEEKDNFPKD; // 0x0
	// static const ::System::String* JGAPDEIJOLB; // 0x0
	// static const ::System::String* BJNFEMPCGBL; // 0x0
	// static const ::System::Single GDEOFMLHKCL; // 0x0
	// static const ::System::String* GOCFKILINEN; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* NEMJAFALHIE; // 0x10
	::BansheeGz::BGSpline::Components::BGCcMath* BNNLFDDGHHA; // 0x18
	::System::String* LLPIMMJKHPP; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* AJGGGLMIAGP; // 0x28
	::System::String* NJCPCENOBOM; // 0x30
	::RPG::GameCore::LodTemplate* OPBAHDCJCGA; // 0x38
	::BansheeGz::BGSpline::Curve::BGCurve* MPEHPIEBCEL; // 0x40
	::UnityEngine::GameObject* IMAEIABEALM; // 0x48
	::RPG::GameCore::ConfigCityTrain* OIMIBHGODOB; // 0x50
	::RPG::Client::MonoCityTrain* DAJBMOLOMCM; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* LLPGGNMPLGG; // 0x60
	::UnityEngine::BoxCollider* DNMCEMOEIPL; // 0x68
	::UnityEngine::GameObject* MIPHDALEONG; // 0x70
	::System::Single HJAOFMNOJIG; // 0x78
	::Class_1_76D576E4C3921565_TravelState MDBEEJOPDEF; // 0x7C
	::System::Single ONBJBPMGGJN; // 0x80
	::System::Single BFGEAKMHCMB; // 0x84
	::System::Single JAKFLDHPDGD; // 0x88
	::System::Single JGLHCCKAEKC; // 0x8C
	::System::Int32 EGIDDJHIOBK; // 0x90
	::RPG::GameCore::EntityLodTemplateName OFDBCCKEJNC; // 0x94
	::System::Single IGOAKAEKCPJ; // 0x98
	::System::Single NPPHEDDHJCO; // 0x9C
	::System::Single FJLGEJNOCIN; // 0xA0
	::System::Single KPCHMBHELBE; // 0xA4
	::System::Single FFDIBDPNOLP; // 0xA8
	::System::Single BGKPMPJJMDA; // 0xAC
	::System::Single DJCODABCGIJ; // 0xB0
	::System::Single HHBLNIKLOEH; // 0xB4
	::System::Single IDJNBEMGEID; // 0xB8
	::Class_1_76D576E4C3921565_StopReason LPDJMPCOIAC; // 0xBC
	::System::Single MFKKONHPEAL; // 0xC0
	::System::Single NEDBKGOLFPM; // 0xC4
	::System::Boolean IBNKINLMJCE; // 0xC8
	::System::Boolean FIKMGFKPNBH; // 0xC9
	::System::Boolean MDEMEIIFKNA; // 0xCA
	::System::Boolean PDKPDFHKEID; // 0xCB
	::System::Single OFGFDJBKBAO; // 0xCC
	::System::Single FKCIBFBHGIL; // 0xD0
	::System::Single NBBLJJABFPI; // 0xD4
	::System::Single LBOAINDMOGM; // 0xD8
	::System::Int32 HGMKIECNDNG; // 0xDC
	::System::Int32 IIJFDEMJECE; // 0xE0
	::System::Boolean MHCEEDIDFOE; // 0xE4
	::System::Boolean DFDCMIJNPCJ; // 0xE5
	::System::Boolean KEKIJFPNIGK; // 0xE6
	::System::Boolean JICPJJMAGIL; // 0xE7

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ConfigCityTrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ConfigCityTrain*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_1_OFFSET))(this);
	}

	::System::Void Method_1_CB75E63F478E74E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_CB75E63F478E74E1_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_1_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_1B3BFD2994634DD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_1B3BFD2994634DD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2746E90F93D616D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_2746E90F93D616D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B3BFD2994634DD8_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_1B3BFD2994634DD8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF653AC3FD8A315F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_BF653AC3FD8A315F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6EAED99E649CAAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_E6EAED99E649CAAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_70459B7C790C82DB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_70459B7C790C82DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0712E145E7F0DE18(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_0712E145E7F0DE18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D04ABD7A1127841(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_3D04ABD7A1127841_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_8DF47EF45ABD2A6C_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_2_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_3_OFFSET))(this);
	}

	::System::Void Method_1_5AB47D2936D3FF40(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_5AB47D2936D3FF40_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1F76F28346553EF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_1F76F28346553EF5_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_967B758F81D642AF()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_967B758F81D642AF_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_1_OFFSET))(this);
	}

	::System::Void Method_1_69647F4A1A5CADD6(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_69647F4A1A5CADD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD246366B86B3771(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_CD246366B86B3771_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1ACE862F725B0BD(::System::String* a1, ::Class_1_76D576E4C3921565_Class_3_95F370961AEDDA1E* a2, ::RPG::Client::Promises::Promise* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_76D576E4C3921565_Class_3_95F370961AEDDA1E*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_A1ACE862F725B0BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_39A9FE040505BFA5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_39A9FE040505BFA5_OFFSET))(this);
	}

	::System::Void Method_1_5B94350BBAC6A35E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_5B94350BBAC6A35E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_2898E3EC91BCF259_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_594ACB3D93BCCD52(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_594ACB3D93BCCD52_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C514722B3933D5D(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_4C514722B3933D5D_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}
};
