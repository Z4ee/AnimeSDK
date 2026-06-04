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

#define CLASS_1_76D576E4C3921565_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136DBB30)
#define CLASS_1_76D576E4C3921565_METHOD_1_0712E145E7F0DE18_OFFSET UNITYSDK_OFFSET(0x136DE930)
#define CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x136DCE50)
#define CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x136DC2E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_1F76F28346553EF5_OFFSET UNITYSDK_OFFSET(0x136DBFD0)
#define CLASS_1_76D576E4C3921565_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x136DFD10)
#define CLASS_1_76D576E4C3921565_METHOD_1_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x136DD7D0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x136DC240)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_2_OFFSET UNITYSDK_OFFSET(0x136DECE0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_3_OFFSET UNITYSDK_OFFSET(0x136DE8B0)
#define CLASS_1_76D576E4C3921565_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x136DC160)
#define CLASS_1_76D576E4C3921565_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x136DFBE0)
#define CLASS_1_76D576E4C3921565_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x136DE9C0)
#define CLASS_1_76D576E4C3921565_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x136DC890)
#define CLASS_1_76D576E4C3921565_METHOD_1_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0x136DE520)
#define CLASS_1_76D576E4C3921565_METHOD_1_3D04ABD7A1127841_OFFSET UNITYSDK_OFFSET(0x136DEAB0)
#define CLASS_1_76D576E4C3921565_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x136DD750)
#define CLASS_1_76D576E4C3921565_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x136DC3C0)
#define CLASS_1_76D576E4C3921565_METHOD_1_4C514722B3933D5D_OFFSET UNITYSDK_OFFSET(0x136DFD80)
#define CLASS_1_76D576E4C3921565_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x136DFDF0)
#define CLASS_1_76D576E4C3921565_METHOD_1_581A0DBA7E94E916_OFFSET UNITYSDK_OFFSET(0x136DF510)
#define CLASS_1_76D576E4C3921565_METHOD_1_594ACB3D93BCCD52_OFFSET UNITYSDK_OFFSET(0x136DCB90)
#define CLASS_1_76D576E4C3921565_METHOD_1_5AB47D2936D3FF40_OFFSET UNITYSDK_OFFSET(0x136DC980)
#define CLASS_1_76D576E4C3921565_METHOD_1_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x136DE800)
#define CLASS_1_76D576E4C3921565_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x136DFC40)
#define CLASS_1_76D576E4C3921565_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x136DD060)
#define CLASS_1_76D576E4C3921565_METHOD_1_69647F4A1A5CADD6_OFFSET UNITYSDK_OFFSET(0x136DF210)
#define CLASS_1_76D576E4C3921565_METHOD_1_7EDA82E1A56BE1B3_1_OFFSET UNITYSDK_OFFSET(0x136DD300)
#define CLASS_1_76D576E4C3921565_METHOD_1_7EDA82E1A56BE1B3_OFFSET UNITYSDK_OFFSET(0x136DCF90)
#define CLASS_1_76D576E4C3921565_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x136DE190)
#define CLASS_1_76D576E4C3921565_METHOD_1_912FCE91274F9E91_OFFSET UNITYSDK_OFFSET(0x136DDA10)
#define CLASS_1_76D576E4C3921565_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x136DBE20)
#define CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_1_OFFSET UNITYSDK_OFFSET(0x136DF120)
#define CLASS_1_76D576E4C3921565_METHOD_1_967B758F81D642AF_OFFSET UNITYSDK_OFFSET(0x136DED70)
#define CLASS_1_76D576E4C3921565_METHOD_1_A1ACE862F725B0BD_OFFSET UNITYSDK_OFFSET(0x136DEEB0)
#define CLASS_1_76D576E4C3921565_METHOD_1_AA7C8ACB054D2124_1_OFFSET UNITYSDK_OFFSET(0x136DD210)
#define CLASS_1_76D576E4C3921565_METHOD_1_AA7C8ACB054D2124_OFFSET UNITYSDK_OFFSET(0x136DD190)
#define CLASS_1_76D576E4C3921565_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x136DE4A0)
#define CLASS_1_76D576E4C3921565_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x136DC640)
#define CLASS_1_76D576E4C3921565_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x136DE3E0)
#define CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x136DEE60)
#define CLASS_1_76D576E4C3921565_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136DC1F0)
#define CLASS_1_76D576E4C3921565_METHOD_1_CB75E63F478E74E1_OFFSET UNITYSDK_OFFSET(0x136DBF80)
#define CLASS_1_76D576E4C3921565_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x136DC440)
#define CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_1_OFFSET UNITYSDK_OFFSET(0x136DBF10)
#define CLASS_1_76D576E4C3921565_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x136DBEA0)
#define CLASS_1_76D576E4C3921565_METHOD_1_E6EAED99E649CAAD_OFFSET UNITYSDK_OFFSET(0x136DD420)
#define CLASS_1_76D576E4C3921565__CCTOR_OFFSET UNITYSDK_OFFSET(0x136DFE00)
#define CLASS_1_76D576E4C3921565__CTOR_OFFSET UNITYSDK_OFFSET(0x136DBA00)

inline static constexpr unsigned int Class_1_76D576E4C3921565_TypeDefinitionIndex = 64686;

class Class_1_76D576E4C3921565 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D576E4C3921565_TypeDefinitionIndex)->GetStaticField(0x4F880);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_1_9; // 0x18
	::UnityEngine::BoxCollider* Field_1_10; // 0x20
	::RPG::GameCore::ConfigCityTrain* Field_1_11; // 0x28
	::UnityEngine::GameObject* Field_1_12; // 0x30
	::RPG::Client::MonoCityTrain* Field_1_13; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* Field_1_14; // 0x40
	::BansheeGz::BGSpline::Components::BGCcMath* Field_1_15; // 0x48
	::RPG::GameCore::LodTemplate* Field_1_16; // 0x50
	::BansheeGz::BGSpline::Curve::BGCurve* Field_1_17; // 0x58
	::System::String* Field_1_18; // 0x60
	::UnityEngine::GameObject* Field_1_19; // 0x68
	::System::String* Field_1_20; // 0x70
	::System::Single Field_1_21; // 0x78
	::Class_1_76D576E4C3921565_StopReason Field_1_22; // 0x7C
	::System::Single Field_1_23; // 0x80
	::System::Single Field_1_24; // 0x84
	::System::Single Field_1_25; // 0x88
	::System::Single Field_1_26; // 0x8C
	::System::Single Field_1_27; // 0x90
	::System::Int32 Field_1_28; // 0x94
	::System::Single Field_1_29; // 0x98
	::System::Single Field_1_30; // 0x9C
	::System::Single Field_1_31; // 0xA0
	::System::Single Field_1_32; // 0xA4
	::System::Boolean Field_1_33; // 0xA8
	::System::Boolean Field_1_34; // 0xA9
	::System::Boolean Field_1_35; // 0xAA
	::System::Boolean Field_1_36; // 0xAB
	::Class_1_76D576E4C3921565_TravelState Field_1_37; // 0xAC
	::System::Single Field_1_38; // 0xB0
	::System::Int32 Field_1_39; // 0xB4
	::System::Single Field_1_40; // 0xB8
	::System::Single Field_1_41; // 0xBC
	::System::Single Field_1_42; // 0xC0
	::System::Single Field_1_43; // 0xC4
	::System::Int32 Field_1_44; // 0xC8
	::System::Single Field_1_45; // 0xCC
	::System::Single Field_1_46; // 0xD0
	::RPG::GameCore::EntityLodTemplateName Field_1_47; // 0xD4
	::System::Single Field_1_48; // 0xD8
	::System::Single Field_1_49; // 0xDC
	::System::Boolean Field_1_50; // 0xE0
	::System::Boolean Field_1_51; // 0xE1
	::System::Boolean Field_1_52; // 0xE2
	::System::Boolean Field_1_53; // 0xE3
	::System::Single Field_1_54; // 0xE4

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

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_1_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_7EDA82E1A56BE1B3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_7EDA82E1A56BE1B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA7C8ACB054D2124(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_AA7C8ACB054D2124_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA7C8ACB054D2124_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_AA7C8ACB054D2124_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EDA82E1A56BE1B3_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_7EDA82E1A56BE1B3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6EAED99E649CAAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_E6EAED99E649CAAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_912FCE91274F9E91(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_912FCE91274F9E91_OFFSET))(this, a1);
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

	::System::Void Method_1_581A0DBA7E94E916(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_76D576E4C3921565_METHOD_1_581A0DBA7E94E916_OFFSET))(this, a1, a2);
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
