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

#define CLASS_1_76D576E4C3921565_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1704BC80)
#define CLASS_1_76D576E4C3921565_METHOD_1_0712E145E7F0DE18_OFFSET UNITYSDK_OFFSET(0x1704E760)
#define CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x1704CF20)
#define CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1704C420)
#define CLASS_1_76D576E4C3921565_METHOD_1_1B3BFD2994634DD8_1_OFFSET UNITYSDK_OFFSET(0x1704D2E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_1B3BFD2994634DD8_OFFSET UNITYSDK_OFFSET(0x1704D060)
#define CLASS_1_76D576E4C3921565_METHOD_1_1F76F28346553EF5_OFFSET UNITYSDK_OFFSET(0x1704C120)
#define CLASS_1_76D576E4C3921565_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1704F940)
#define CLASS_1_76D576E4C3921565_METHOD_1_2746E90F93D616D2_OFFSET UNITYSDK_OFFSET(0x1704D260)
#define CLASS_1_76D576E4C3921565_METHOD_1_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x1704D890)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x1704C390)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_2_OFFSET UNITYSDK_OFFSET(0x1704EB20)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_3_OFFSET UNITYSDK_OFFSET(0x1704E6E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x1704C2B0)
#define CLASS_1_76D576E4C3921565_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1704F820)
#define CLASS_1_76D576E4C3921565_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1704E7F0)
#define CLASS_1_76D576E4C3921565_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1704C960)
#define CLASS_1_76D576E4C3921565_METHOD_1_3D04ABD7A1127841_OFFSET UNITYSDK_OFFSET(0x1704E8E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1704D810)
#define CLASS_1_76D576E4C3921565_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1704C500)
#define CLASS_1_76D576E4C3921565_METHOD_1_4C514722B3933D5D_OFFSET UNITYSDK_OFFSET(0x1704F9B0)
#define CLASS_1_76D576E4C3921565_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1704FA20)
#define CLASS_1_76D576E4C3921565_METHOD_1_594ACB3D93BCCD52_OFFSET UNITYSDK_OFFSET(0x1704CC60)
#define CLASS_1_76D576E4C3921565_METHOD_1_5AB47D2936D3FF40_OFFSET UNITYSDK_OFFSET(0x1704CA50)
#define CLASS_1_76D576E4C3921565_METHOD_1_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x1704E630)
#define CLASS_1_76D576E4C3921565_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x1704F880)
#define CLASS_1_76D576E4C3921565_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x1704D130)
#define CLASS_1_76D576E4C3921565_METHOD_1_69647F4A1A5CADD6_OFFSET UNITYSDK_OFFSET(0x1704F0A0)
#define CLASS_1_76D576E4C3921565_METHOD_1_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x1704DAC0)
#define CLASS_1_76D576E4C3921565_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x1704E3C0)
#define CLASS_1_76D576E4C3921565_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x1704E030)
#define CLASS_1_76D576E4C3921565_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x1704BF70)
#define CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_1_OFFSET UNITYSDK_OFFSET(0x1704EFB0)
#define CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_OFFSET UNITYSDK_OFFSET(0x1704EBB0)
#define CLASS_1_76D576E4C3921565_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1704C780)
#define CLASS_1_76D576E4C3921565_METHOD_1_A1ACE862F725B0BD_OFFSET UNITYSDK_OFFSET(0x1704ECF0)
#define CLASS_1_76D576E4C3921565_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1704E340)
#define CLASS_1_76D576E4C3921565_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x1704E280)
#define CLASS_1_76D576E4C3921565_METHOD_1_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x1704D3D0)
#define CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1704ECA0)
#define CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1704C340)
#define CLASS_1_76D576E4C3921565_METHOD_1_CB75E63F478E74E1_OFFSET UNITYSDK_OFFSET(0x1704C0D0)
#define CLASS_1_76D576E4C3921565_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x1704C580)
#define CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_1_OFFSET UNITYSDK_OFFSET(0x1704C060)
#define CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1704BFF0)
#define CLASS_1_76D576E4C3921565_METHOD_1_E6EAED99E649CAAD_OFFSET UNITYSDK_OFFSET(0x1704D4F0)
#define CLASS_1_76D576E4C3921565_METHOD_1_EDD5825BF4ABFA73_OFFSET UNITYSDK_OFFSET(0x1704F3A0)
#define CLASS_1_76D576E4C3921565__CCTOR_OFFSET UNITYSDK_OFFSET(0x1704FA30)
#define CLASS_1_76D576E4C3921565__CTOR_OFFSET UNITYSDK_OFFSET(0x1704BAF0)

inline static constexpr unsigned int Class_1_76D576E4C3921565_TypeDefinitionIndex = 66087;

class Class_1_76D576E4C3921565 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D576E4C3921565_TypeDefinitionIndex)->GetStaticField(0x41E90);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_1_8; // 0x10
	::System::String* Field_1_9; // 0x18
	::UnityEngine::GameObject* Field_1_10; // 0x20
	::BansheeGz::BGSpline::Components::BGCcMath* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_12; // 0x30
	::UnityEngine::BoxCollider* Field_1_13; // 0x38
	::RPG::GameCore::LodTemplate* Field_1_14; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* Field_1_15; // 0x48
	::RPG::GameCore::ConfigCityTrain* Field_1_16; // 0x50
	::UnityEngine::GameObject* Field_1_17; // 0x58
	::BansheeGz::BGSpline::Curve::BGCurve* Field_1_18; // 0x60
	::System::String* Field_1_19; // 0x68
	::RPG::Client::MonoCityTrain* Field_1_20; // 0x70
	::System::Single Field_1_21; // 0x78
	::System::Single Field_1_22; // 0x7C
	::System::Single Field_1_23; // 0x80
	::RPG::GameCore::EntityLodTemplateName Field_1_24; // 0x84
	::System::Single Field_1_25; // 0x88
	::System::Single Field_1_26; // 0x8C
	::System::Single Field_1_27; // 0x90
	::System::Int32 Field_1_28; // 0x94
	::System::Single Field_1_29; // 0x98
	::System::Single Field_1_30; // 0x9C
	::System::Single Field_1_31; // 0xA0
	::System::Single Field_1_32; // 0xA4
	::Class_1_76D576E4C3921565_StopReason Field_1_33; // 0xA8
	::System::Single Field_1_34; // 0xAC
	::System::Single Field_1_35; // 0xB0
	::System::Single Field_1_36; // 0xB4
	::System::Single Field_1_37; // 0xB8
	::System::Int32 Field_1_38; // 0xBC
	::System::Int32 Field_1_39; // 0xC0
	::System::Single Field_1_40; // 0xC4
	::System::Single Field_1_41; // 0xC8
	::System::Boolean Field_1_42; // 0xCC
	::System::Boolean Field_1_43; // 0xCD
	::System::Boolean Field_1_44; // 0xCE
	::System::Boolean Field_1_45; // 0xCF
	::System::Single Field_1_46; // 0xD0
	::System::Single Field_1_47; // 0xD4
	::System::Single Field_1_48; // 0xD8
	::Class_1_76D576E4C3921565_TravelState Field_1_49; // 0xDC
	::System::Single Field_1_50; // 0xE0
	::System::Boolean Field_1_51; // 0xE4
	::System::Boolean Field_1_52; // 0xE5
	::System::Boolean Field_1_53; // 0xE6
	::System::Boolean Field_1_54; // 0xE7

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

	::System::Void Method_1_EDD5825BF4ABFA73(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_EDD5825BF4ABFA73_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))(this);
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
