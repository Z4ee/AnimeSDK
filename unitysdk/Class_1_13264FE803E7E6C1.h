#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class Class_1_13264FE803E7E6C1_Class_3_8661546F242498DE_2;
class Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class BatchAnimationVariantAsset; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class NPCPedestrianV2BatchAnimationEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_13264FE803E7E6C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB29C970)
#define CLASS_1_13264FE803E7E6C1_GET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xB29EBF0)
#define CLASS_1_13264FE803E7E6C1_GET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xB29EC10)
#define CLASS_1_13264FE803E7E6C1_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xB29EBB0)
#define CLASS_1_13264FE803E7E6C1_GET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0xB29EC30)
#define CLASS_1_13264FE803E7E6C1_GET_CLIPGROUPS_OFFSET UNITYSDK_OFFSET(0xB29EC50)
#define CLASS_1_13264FE803E7E6C1_GET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0xB29EBD0)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_0FA313EC9DCC2020_OFFSET UNITYSDK_OFFSET(0xB29EA30)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_102192C05CB5CDCB_OFFSET UNITYSDK_OFFSET(0xB29E5B0)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_22CF6664C8243DD3_OFFSET UNITYSDK_OFFSET(0xB29D8C0)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_24A930ABAF73C47F_OFFSET UNITYSDK_OFFSET(0xB29EB10)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_253E34FDF1E07E7C_OFFSET UNITYSDK_OFFSET(0xB29E6A0)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_69CB80662EDEA33A_OFFSET UNITYSDK_OFFSET(0xB29E2C0)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_98EA662591EE69C6_OFFSET UNITYSDK_OFFSET(0xB29D930)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_C785825650E13237_OFFSET UNITYSDK_OFFSET(0xB29CE20)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_D9D5FA6D5744EDAE_OFFSET UNITYSDK_OFFSET(0xB29E070)
#define CLASS_1_13264FE803E7E6C1_METHOD_1_F3427EDA868DBB19_OFFSET UNITYSDK_OFFSET(0xB29CD20)
#define CLASS_1_13264FE803E7E6C1_SET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xB29EC00)
#define CLASS_1_13264FE803E7E6C1_SET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xB29EC20)
#define CLASS_1_13264FE803E7E6C1_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0xB29EBC0)
#define CLASS_1_13264FE803E7E6C1_SET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0xB29EC40)
#define CLASS_1_13264FE803E7E6C1_SET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0xB29EBE0)
#define CLASS_1_13264FE803E7E6C1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB29EC60)
#define CLASS_1_13264FE803E7E6C1__CTOR_OFFSET UNITYSDK_OFFSET(0xB29C6B0)

inline static constexpr unsigned int Class_1_13264FE803E7E6C1_TypeDefinitionIndex = 64790;

class Class_1_13264FE803E7E6C1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13264FE803E7E6C1_TypeDefinitionIndex)->GetStaticField(0x51570);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_13264FE803E7E6C1_Class_3_8661546F242498DE_2*>* Field_1_1; // 0x10
	::RPG::Client::BatchAnimationVariantAsset* _VariantAsset_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* _ClipGroups_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* Field_1_4; // 0x28
	::RPG::Client::BatchAnimationAttachPointMapping* _AttachPointMapping_k__BackingField; // 0x30
	::RPG::Client::NPCPedestrianV2BatchAnimationEvent* _BatchAnimationEvent_k__BackingField; // 0x38
	::UnityEngine::Rendering::BatchAnimation* _BatchAnimation_k__BackingField; // 0x40
	::System::Int32 _ClipCount_k__BackingField; // 0x48

	::System::Void _ctor(::UnityEngine::Rendering::BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_F3427EDA868DBB19(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_F3427EDA868DBB19_OFFSET))(this, a1);
	}

	::RPG::Client::BAPartVariantRes* Method_1_C785825650E13237(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_C785825650E13237_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_22CF6664C8243DD3(::RPG::Client::BAPartVariantRes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_22CF6664C8243DD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_98EA662591EE69C6(::System::String* a1, ::Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_98EA662591EE69C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9D5FA6D5744EDAE(::System::String* a1, ::Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_13264FE803E7E6C1_Class_3_A6F48C4639F89890*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_D9D5FA6D5744EDAE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_69CB80662EDEA33A(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_69CB80662EDEA33A_OFFSET))(this, a1);
	}

	::System::Void Method_1_102192C05CB5CDCB(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_102192C05CB5CDCB_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_253E34FDF1E07E7C(::BatchAnimationClipGroup* a1, ::UnityEngine::Transform* a2, ::System::Int32& a3)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::BatchAnimationClipGroup*, ::UnityEngine::Transform*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_253E34FDF1E07E7C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FA313EC9DCC2020(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::Class_1_13264FE803E7E6C1_Class_3_8661546F242498DE_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::Class_1_13264FE803E7E6C1_Class_3_8661546F242498DE_2*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_0FA313EC9DCC2020_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_24A930ABAF73C47F(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_METHOD_1_24A930ABAF73C47F_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimation* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_SET_BATCHANIMATION_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationVariantAsset* get_VariantAsset()
	{
		return ((::RPG::Client::BatchAnimationVariantAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_GET_VARIANTASSET_OFFSET))(this);
	}

	::System::Void set_VariantAsset(::RPG::Client::BatchAnimationVariantAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_SET_VARIANTASSET_OFFSET))(this, a1);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* get_AttachPointMapping()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_GET_ATTACHPOINTMAPPING_OFFSET))(this);
	}

	::System::Void set_AttachPointMapping(::RPG::Client::BatchAnimationAttachPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationAttachPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_SET_ATTACHPOINTMAPPING_OFFSET))(this, a1);
	}

	::RPG::Client::NPCPedestrianV2BatchAnimationEvent* get_BatchAnimationEvent()
	{
		return ((::RPG::Client::NPCPedestrianV2BatchAnimationEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_GET_BATCHANIMATIONEVENT_OFFSET))(this);
	}

	::System::Void set_BatchAnimationEvent(::RPG::Client::NPCPedestrianV2BatchAnimationEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCPedestrianV2BatchAnimationEvent*))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_SET_BATCHANIMATIONEVENT_OFFSET))(this, a1);
	}

	::System::Int32 get_ClipCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_GET_CLIPCOUNT_OFFSET))(this);
	}

	::System::Void set_ClipCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_SET_CLIPCOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* get_ClipGroups()
	{
		return ((::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13264FE803E7E6C1_GET_CLIPGROUPS_OFFSET))(this);
	}
};
