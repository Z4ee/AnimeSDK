#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class BatchAnimationGraph;
class BatchAnimationInstPropManager;
class Class_1_B1E1C7B4D86C5025_Class_3_8661546F242498DE_2;
class Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class BatchAnimationVariantAsset; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class NPCPedestrianV2BatchAnimationEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationBoneMask; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_B1E1C7B4D86C5025_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4B0AC0)
#define CLASS_1_B1E1C7B4D86C5025_GET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xC4B5760)
#define CLASS_1_B1E1C7B4D86C5025_GET_BAGRAPH_OFFSET UNITYSDK_OFFSET(0xC4B57A0)
#define CLASS_1_B1E1C7B4D86C5025_GET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC4B5780)
#define CLASS_1_B1E1C7B4D86C5025_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xC4B5720)
#define CLASS_1_B1E1C7B4D86C5025_GET_CLIPGROUPS_OFFSET UNITYSDK_OFFSET(0xC4B57C0)
#define CLASS_1_B1E1C7B4D86C5025_GET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0xC4B5740)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_0399F48DA81AC138_OFFSET UNITYSDK_OFFSET(0xC4B09A0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_0FA313EC9DCC2020_OFFSET UNITYSDK_OFFSET(0xC4B55A0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_11B81F453F3D1902_OFFSET UNITYSDK_OFFSET(0xC4B5200)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_1D6DD61158AA56AC_OFFSET UNITYSDK_OFFSET(0xC4B52C0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_20B623BF416C3636_OFFSET UNITYSDK_OFFSET(0xC4B1130)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_22CF6664C8243DD3_OFFSET UNITYSDK_OFFSET(0xC4B4170)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_24A930ABAF73C47F_OFFSET UNITYSDK_OFFSET(0xC4B5680)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_2C0649F804150AA8_OFFSET UNITYSDK_OFFSET(0xC4B2060)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xC4B1F90)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_4F6C20E73A7C7FC7_OFFSET UNITYSDK_OFFSET(0xC4B2920)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_508C8E3BE091A7CB_1_OFFSET UNITYSDK_OFFSET(0xC4B3390)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_508C8E3BE091A7CB_OFFSET UNITYSDK_OFFSET(0xC4B30E0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_5A93CC71847FDD47_OFFSET UNITYSDK_OFFSET(0xC4B0750)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_69CB80662EDEA33A_OFFSET UNITYSDK_OFFSET(0xC4B4E00)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_79301C11A12F7A77_OFFSET UNITYSDK_OFFSET(0xC4B2F50)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_7D085DE98A4C4DE6_OFFSET UNITYSDK_OFFSET(0xC4B28B0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_98EA662591EE69C6_OFFSET UNITYSDK_OFFSET(0xC4B41E0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_9CBC221BA7225505_OFFSET UNITYSDK_OFFSET(0xC4B2670)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_B4B1368648256F53_OFFSET UNITYSDK_OFFSET(0xC4B07C0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_B56CE04666CDA135_OFFSET UNITYSDK_OFFSET(0xC4B3640)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_D9D5FA6D5744EDAE_OFFSET UNITYSDK_OFFSET(0xC4B4B00)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_E369D4B0CD0BA3E6_OFFSET UNITYSDK_OFFSET(0xC4B3040)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_E42FF8625F94F4C7_OFFSET UNITYSDK_OFFSET(0xC4B0880)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_EEE27112722734B6_OFFSET UNITYSDK_OFFSET(0xC4B29D0)
#define CLASS_1_B1E1C7B4D86C5025_METHOD_1_F3427EDA868DBB19_OFFSET UNITYSDK_OFFSET(0xC4B1030)
#define CLASS_1_B1E1C7B4D86C5025_SET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xC4B5770)
#define CLASS_1_B1E1C7B4D86C5025_SET_BAGRAPH_OFFSET UNITYSDK_OFFSET(0xC4B57B0)
#define CLASS_1_B1E1C7B4D86C5025_SET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xC4B5790)
#define CLASS_1_B1E1C7B4D86C5025_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xC4B5730)
#define CLASS_1_B1E1C7B4D86C5025_SET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0xC4B5750)
#define CLASS_1_B1E1C7B4D86C5025__CCTOR_OFFSET UNITYSDK_OFFSET(0xC4B57D0)
#define CLASS_1_B1E1C7B4D86C5025__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B0400)

inline static constexpr unsigned int Class_1_B1E1C7B4D86C5025_TypeDefinitionIndex = 69269;

class Class_1_B1E1C7B4D86C5025 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_NNMAMFDLHBN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E1C7B4D86C5025_TypeDefinitionIndex)->GetStaticField(0x11BB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_FGEOMKJKDFB()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E1C7B4D86C5025_TypeDefinitionIndex)->GetStaticField(0x11BB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_KCDCOMMBCAG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E1C7B4D86C5025_TypeDefinitionIndex)->GetStaticField(0x11BC0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_NLCGMJEFGOK()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E1C7B4D86C5025_TypeDefinitionIndex)->GetStaticField(0x11BC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_CMBKEALBLIE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E1C7B4D86C5025_TypeDefinitionIndex)->GetStaticField(0x11BD0);
	}
	// static const ::System::String* ILANFFPHIDO; // 0x0
	// static const ::System::Int32 CCCIAOHNNJN = 0x14; // 0x0
	// static const ::System::Int32 GEGLMOJOIHI = 0x2; // 0x0
	// static const ::System::Int32 JKNCBKCIDJN = 0x54; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B1E1C7B4D86C5025_Class_3_8661546F242498DE_2*>* GOMFDOBCENJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* AOCDPNCHBEM; // 0x18
	::RPG::Client::BatchAnimationVariantAsset* _VariantAsset_k__BackingField; // 0x20
	::RPG::Client::BatchAnimationAttachPointMapping* _AttachPointMapping_k__BackingField; // 0x28
	::RPG::Client::NPCPedestrianV2BatchAnimationEvent* _BatchAnimationEvent_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* _ClipGroups_k__BackingField; // 0x38
	::BatchAnimationGraph* _BAGraph_k__BackingField; // 0x40
	::UnityEngine::Rendering::BatchAnimation* _BatchAnimation_k__BackingField; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* BAEMAIHFIHI; // 0x50
	::BatchAnimationInstPropManager* HIAODGJBHKJ; // 0x58

	::System::Void _ctor(::UnityEngine::Rendering::BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_5A93CC71847FDD47(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_5A93CC71847FDD47_OFFSET))(a1);
	}

	static ::System::String* Method_1_B4B1368648256F53(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_B4B1368648256F53_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_E42FF8625F94F4C7(::UnityEngine::Rendering::BatchAnimationClip* a1, ::UnityEngine::Rendering::BatchAnimationBoneMask* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_E42FF8625F94F4C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0399F48DA81AC138(::System::String* a1, ::UnityEngine::Rendering::BatchAnimationClip* a2, ::UnityEngine::Rendering::BatchAnimationBoneMask* a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::BatchAnimationClip*, ::UnityEngine::Rendering::BatchAnimationBoneMask*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_0399F48DA81AC138_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_F3427EDA868DBB19(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_F3427EDA868DBB19_OFFSET))(this, a1);
	}

	::System::Void Method_1_20B623BF416C3636(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_20B623BF416C3636_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D085DE98A4C4DE6(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_7D085DE98A4C4DE6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Single>* Method_1_9CBC221BA7225505(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_9CBC221BA7225505_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Material* Method_1_4F6C20E73A7C7FC7(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_4F6C20E73A7C7FC7_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Single>* Method_1_EEE27112722734B6(::UnityEngine::Material* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_EEE27112722734B6_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Single>* Method_1_79301C11A12F7A77()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_79301C11A12F7A77_OFFSET))();
	}

	static ::System::Int32 Method_1_2C0649F804150AA8(::RPG::Client::AssemNPC* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::AssemNPC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_2C0649F804150AA8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E369D4B0CD0BA3E6(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_E369D4B0CD0BA3E6_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_1_508C8E3BE091A7CB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_508C8E3BE091A7CB_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_1_508C8E3BE091A7CB_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_508C8E3BE091A7CB_1_OFFSET))();
	}

	::RPG::Client::BAPartVariantRes* Method_1_B56CE04666CDA135(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_B56CE04666CDA135_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_22CF6664C8243DD3(::RPG::Client::BAPartVariantRes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_22CF6664C8243DD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_98EA662591EE69C6(::System::String* a1, ::Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_98EA662591EE69C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9D5FA6D5744EDAE(::System::String* a1, ::Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_B1E1C7B4D86C5025_Class_3_A6F48C4639F89890*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_D9D5FA6D5744EDAE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_69CB80662EDEA33A(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_69CB80662EDEA33A_OFFSET))(this, a1);
	}

	::System::Void Method_1_11B81F453F3D1902(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_11B81F453F3D1902_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_1D6DD61158AA56AC(::BatchAnimationClipGroup* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::BatchAnimationClipGroup*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_1D6DD61158AA56AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0FA313EC9DCC2020(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::Class_1_B1E1C7B4D86C5025_Class_3_8661546F242498DE_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::Class_1_B1E1C7B4D86C5025_Class_3_8661546F242498DE_2*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_0FA313EC9DCC2020_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_24A930ABAF73C47F(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_METHOD_1_24A930ABAF73C47F_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimation* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_SET_BATCHANIMATION_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationVariantAsset* get_VariantAsset()
	{
		return ((::RPG::Client::BatchAnimationVariantAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_GET_VARIANTASSET_OFFSET))(this);
	}

	::System::Void set_VariantAsset(::RPG::Client::BatchAnimationVariantAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_SET_VARIANTASSET_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* get_AttachPointMapping()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_GET_ATTACHPOINTMAPPING_OFFSET))(this);
	}

	::System::Void set_AttachPointMapping(::RPG::Client::BatchAnimationAttachPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationAttachPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_SET_ATTACHPOINTMAPPING_OFFSET))(this, a1);
	}

	::RPG::Client::NPCPedestrianV2BatchAnimationEvent* get_BatchAnimationEvent()
	{
		return ((::RPG::Client::NPCPedestrianV2BatchAnimationEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_GET_BATCHANIMATIONEVENT_OFFSET))(this);
	}

	::System::Void set_BatchAnimationEvent(::RPG::Client::NPCPedestrianV2BatchAnimationEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCPedestrianV2BatchAnimationEvent*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_SET_BATCHANIMATIONEVENT_OFFSET))(this, a1);
	}

	::BatchAnimationGraph* get_BAGraph()
	{
		return ((::BatchAnimationGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_GET_BAGRAPH_OFFSET))(this);
	}

	::System::Void set_BAGraph(::BatchAnimationGraph* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationGraph*))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_SET_BAGRAPH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* get_ClipGroups()
	{
		return ((::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1E1C7B4D86C5025_GET_CLIPGROUPS_OFFSET))(this);
	}
};
