#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BatchAnimationClipGroup;
class Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4;
class Class_1_B1E1C7B4D86C5025;
class Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890;
class Class_1_D27BF54F25500E5F;
class Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig; }
namespace RPG::Client { class PedestrianMemberExternalConfig_BatchAnimation; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_FE4EA34D956DAF94_CLEAR_OFFSET UNITYSDK_OFFSET(0x1521C940)
#define CLASS_1_FE4EA34D956DAF94_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x1521F6B0)
#define CLASS_1_FE4EA34D956DAF94_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1521F670)
#define CLASS_1_FE4EA34D956DAF94_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1521F650)
#define CLASS_1_FE4EA34D956DAF94_GET_FEATUREID_OFFSET UNITYSDK_OFFSET(0x1521F610)
#define CLASS_1_FE4EA34D956DAF94_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1521F5F0)
#define CLASS_1_FE4EA34D956DAF94_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1521F630)
#define CLASS_1_FE4EA34D956DAF94_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1521BB70)
#define CLASS_1_FE4EA34D956DAF94_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1521F690)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1521DC70)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x1521DE80)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_0E8E4459B26B6D1C_OFFSET UNITYSDK_OFFSET(0x1521ED60)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1521D4D0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1521D4C0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_17E52EFD0748E5DD_OFFSET UNITYSDK_OFFSET(0x1521D790)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1521E4C0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0x1521DE10)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_3D57569EEAF613B6_OFFSET UNITYSDK_OFFSET(0x1521E9C0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_3DFACF146C0F4294_OFFSET UNITYSDK_OFFSET(0x1521D5C0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1521ECF0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_448BE103A30BC0C3_OFFSET UNITYSDK_OFFSET(0x1521BC70)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_4D8A61C11B22FBF4_OFFSET UNITYSDK_OFFSET(0x1521F390)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0x1521D0D0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_5B760F0512A2A583_OFFSET UNITYSDK_OFFSET(0x1521F320)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x1521D060)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x1521BEF0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_82835BF5084804CE_OFFSET UNITYSDK_OFFSET(0x1521D5E0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_82DF375C979B7109_OFFSET UNITYSDK_OFFSET(0x1521E0E0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1521D7F0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1521E030)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1521DF80)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_9F8BD2019ACB1327_OFFSET UNITYSDK_OFFSET(0x1521D4F0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_A2FA6C3F3F699E32_OFFSET UNITYSDK_OFFSET(0x1521D860)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1521D410)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_AC9471A0B9837F12_OFFSET UNITYSDK_OFFSET(0x1521DCC0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_B1A25BE8B2A743E4_OFFSET UNITYSDK_OFFSET(0x1521E530)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0x1521CDF0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_C58EA836B8C3CA1D_OFFSET UNITYSDK_OFFSET(0x1521F290)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0x1521E740)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_D4B4789615C6840C_OFFSET UNITYSDK_OFFSET(0x1521F4B0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_D4D1D20F99F57451_OFFSET UNITYSDK_OFFSET(0x1521E2A0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_DE83ACBAA6010B8F_OFFSET UNITYSDK_OFFSET(0x1521E7C0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_E1ED618AD923D681_OFFSET UNITYSDK_OFFSET(0x1521DD30)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1521EE20)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_F06293C2B0FF6C71_OFFSET UNITYSDK_OFFSET(0x1521D370)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_F5C8E6D761F2AABC_OFFSET UNITYSDK_OFFSET(0x1521F0A0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_F916FE21F1DA39AB_OFFSET UNITYSDK_OFFSET(0x1521D4E0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x1521BB90)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1521CFE0)
#define CLASS_1_FE4EA34D956DAF94_METHOD_1_FF9358EE342FB1E1_OFFSET UNITYSDK_OFFSET(0x1521D690)
#define CLASS_1_FE4EA34D956DAF94_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x1521F6C0)
#define CLASS_1_FE4EA34D956DAF94_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1521F680)
#define CLASS_1_FE4EA34D956DAF94_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1521F660)
#define CLASS_1_FE4EA34D956DAF94_SET_FEATUREID_OFFSET UNITYSDK_OFFSET(0x1521F620)
#define CLASS_1_FE4EA34D956DAF94_SET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1521F600)
#define CLASS_1_FE4EA34D956DAF94_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1521F640)
#define CLASS_1_FE4EA34D956DAF94_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1521BB80)
#define CLASS_1_FE4EA34D956DAF94_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1521F6A0)
#define CLASS_1_FE4EA34D956DAF94__CCTOR_OFFSET UNITYSDK_OFFSET(0x1521FA00)
#define CLASS_1_FE4EA34D956DAF94__CTOR_OFFSET UNITYSDK_OFFSET(0x1521F6D0)

inline static constexpr unsigned int Class_1_FE4EA34D956DAF94_TypeDefinitionIndex = 69222;

class Class_1_FE4EA34D956DAF94 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_OLOGEKHMEJN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE4EA34D956DAF94_TypeDefinitionIndex)->GetStaticField(0x11D10);
	}
	static ::UnityEngine::Vector3* StaticGet_LCLIBCPMLIN()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE4EA34D956DAF94_TypeDefinitionIndex)->GetStaticField(0x11D14);
	}
	static ::System::Int32* StaticGet_JONPCFBBICG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE4EA34D956DAF94_TypeDefinitionIndex)->GetStaticField(0x11D20);
	}
	static ::System::Single* StaticGet_FKMNGONKABF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE4EA34D956DAF94_TypeDefinitionIndex)->GetStaticField(0x11D24);
	}
	static ::System::Single* StaticGet_OABDNNHCDLM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE4EA34D956DAF94_TypeDefinitionIndex)->GetStaticField(0x11D28);
	}
	static ::System::Single* StaticGet_MOEHGHKCGCN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE4EA34D956DAF94_TypeDefinitionIndex)->GetStaticField(0x11D2C);
	}
	::System::String* KPIOPHGBKIJ; // 0x10
	::System::String* IBBCELHNBHC; // 0x18
	::RPG::Client::AssemNPC* GBACLGGLMJF; // 0x20
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x28
	::RPG::Client::BAPartVariantRes* FGKMEFPNHDJ; // 0x30
	::Class_1_D27BF54F25500E5F* NMIHNJICJBG; // 0x38
	::System::Collections::Generic::List_1<::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2*>* OLGONBDJIKN; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig*>* ONMDNNFBHBC; // 0x48
	::UnityEngine::MaterialPropertyBlock* OLMNDJNHOGE; // 0x50
	::Class_1_412D29F0ED7D5587_Class_3_487EE6B302AC50B7_4* KDHMDGBHKGF; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DIDLEMCMOGP; // 0x60
	::Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890* OJEKKHBADKA; // 0x68
	::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* APNNFHPNOKK; // 0x70
	::System::String* _FeatureID_k__BackingField; // 0x78
	::System::String* OOECGNNINLO; // 0x80
	::System::Collections::Generic::HashSet_1<::System::String*>* MJNNHILBOBC; // 0x88
	::UnityEngine::Rendering::BatchAnimationInstance* _BatchAnimation_k__BackingField; // 0x90
	::System::Action* _Callback_k__BackingField; // 0x98
	::Class_1_B1E1C7B4D86C5025* FLMODBLFAGD; // 0xA0
	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* _Config_k__BackingField; // 0xA8
	::System::String* JPMIMGKFFHA; // 0xB0
	::System::String* BMABFIDFEKG; // 0xB8
	::System::String* _Identity_k__BackingField; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*>* MDDCCAENAEP; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2*>*>* MHPNBHKCMLC; // 0xD0
	::System::String* _PrefabPath_k__BackingField; // 0xD8
	::System::Boolean JDKBGILFNCG; // 0xE0
	::System::Boolean PJOBJLOMAEO; // 0xE1
	::System::Boolean GACJIFJFCIA; // 0xE2
	::System::Boolean ODMMJFBMNBP; // 0xE3
	::System::Single _Radius_k__BackingField; // 0xE4
	::UnityEngine::Bounds MPBIFEFGKGO; // 0xE8
	::UnityEngine::Bounds KPKONAAKNFF; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94__CCTOR_OFFSET))();
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_RADIUS_OFFSET))(this, a1);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_1_448BE103A30BC0C3(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_448BE103A30BC0C3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AC715804517063C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_5AC715804517063C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* Method_1_F916FE21F1DA39AB()
	{
		return ((::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_F916FE21F1DA39AB_OFFSET))(this);
	}

	::System::Void Method_1_9F8BD2019ACB1327(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_9F8BD2019ACB1327_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82835BF5084804CE(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_82835BF5084804CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF9358EE342FB1E1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_FF9358EE342FB1E1_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC9471A0B9837F12(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_AC9471A0B9837F12_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_17E52EFD0748E5DD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_17E52EFD0748E5DD_OFFSET))(this);
	}

	::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_35A1BA48D9ACC587_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_82DF375C979B7109(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_82DF375C979B7109_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4D1D20F99F57451(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_D4D1D20F99F57451_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1A25BE8B2A743E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_B1A25BE8B2A743E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B560799CAB48EE76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_B560799CAB48EE76_OFFSET))(this, a1);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_B1E1C7B4D86C5025* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1E1C7B4D86C5025*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE83ACBAA6010B8F(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_DE83ACBAA6010B8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E8E4459B26B6D1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_0E8E4459B26B6D1C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_1_5B760F0512A2A583(::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_5B760F0512A2A583_OFFSET))(this, a1);
	}

	::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2* Method_1_F5C8E6D761F2AABC(::System::String* a1)
	{
		return ((::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_F5C8E6D761F2AABC_OFFSET))(this, a1);
	}

	::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2* Method_1_C58EA836B8C3CA1D()
	{
		return ((::Class_1_FE4EA34D956DAF94_Class_1_BBC842CA3CCF8FA2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_C58EA836B8C3CA1D_OFFSET))(this);
	}

	::System::Boolean Method_1_3D57569EEAF613B6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_3D57569EEAF613B6_OFFSET))(this);
	}

	::System::Void Method_1_4D8A61C11B22FBF4(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_4D8A61C11B22FBF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2FA6C3F3F699E32(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_A2FA6C3F3F699E32_OFFSET))(this, a1);
	}

	::System::Void Method_1_F06293C2B0FF6C71(::System::String* a1, ::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_F06293C2B0FF6C71_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D4B4789615C6840C(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_D4B4789615C6840C_OFFSET))(this, a1);
	}

	::System::String* Method_1_E1ED618AD923D681(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_E1ED618AD923D681_OFFSET))(this, a1);
	}

	::System::String* get_Identity()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_IDENTITY_OFFSET))(this);
	}

	::System::Void set_Identity(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_IDENTITY_OFFSET))(this, a1);
	}

	::System::String* get_FeatureID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_FEATUREID_OFFSET))(this);
	}

	::System::Void set_FeatureID(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_FEATUREID_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_PREFABPATH_OFFSET))(this, a1);
	}

	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* get_Config()
	{
		return ((::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_CALLBACK_OFFSET))(this);
	}

	::System::Void set_Callback(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_CALLBACK_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_TRANSFORM_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_SET_BATCHANIMATION_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* Method_1_3DFACF146C0F4294()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE4EA34D956DAF94_METHOD_1_3DFACF146C0F4294_OFFSET))(this);
	}
};
