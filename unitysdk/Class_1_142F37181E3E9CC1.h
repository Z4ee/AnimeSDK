#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class Class_1_142F37181E3E9CC1_Class_3_8661546F242498DE_2;
class Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890;
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

#define CLASS_1_142F37181E3E9CC1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127E03A0)
#define CLASS_1_142F37181E3E9CC1_GET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0x127E2EA0)
#define CLASS_1_142F37181E3E9CC1_GET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x127E2EC0)
#define CLASS_1_142F37181E3E9CC1_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x127E2E60)
#define CLASS_1_142F37181E3E9CC1_GET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x127E2EE0)
#define CLASS_1_142F37181E3E9CC1_GET_CLIPGROUPS_OFFSET UNITYSDK_OFFSET(0x127E2F00)
#define CLASS_1_142F37181E3E9CC1_GET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0x127E2E80)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_0FA313EC9DCC2020_OFFSET UNITYSDK_OFFSET(0x127E2CE0)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_159BF039DF9EB957_OFFSET UNITYSDK_OFFSET(0x127E2300)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_22CF6664C8243DD3_OFFSET UNITYSDK_OFFSET(0x127E1230)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_2747376244A57756_OFFSET UNITYSDK_OFFSET(0x127E2DC0)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_695A241659463176_OFFSET UNITYSDK_OFFSET(0x127E2030)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_7855D276DC78F22D_OFFSET UNITYSDK_OFFSET(0x127E2930)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_C785825650E13237_OFFSET UNITYSDK_OFFSET(0x127E0880)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_C808DA0D58F3B7B5_OFFSET UNITYSDK_OFFSET(0x127E1DE0)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_D855E0385BE48BEC_OFFSET UNITYSDK_OFFSET(0x127E12A0)
#define CLASS_1_142F37181E3E9CC1_METHOD_1_F879B5DF2C7EBED0_OFFSET UNITYSDK_OFFSET(0x127E0780)
#define CLASS_1_142F37181E3E9CC1_SET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0x127E2EB0)
#define CLASS_1_142F37181E3E9CC1_SET_BATCHANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x127E2ED0)
#define CLASS_1_142F37181E3E9CC1_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x127E2E70)
#define CLASS_1_142F37181E3E9CC1_SET_CLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x127E2EF0)
#define CLASS_1_142F37181E3E9CC1_SET_VARIANTASSET_OFFSET UNITYSDK_OFFSET(0x127E2E90)
#define CLASS_1_142F37181E3E9CC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x127E2F10)
#define CLASS_1_142F37181E3E9CC1__CTOR_OFFSET UNITYSDK_OFFSET(0x127E00F0)

inline static constexpr unsigned int Class_1_142F37181E3E9CC1_TypeDefinitionIndex = 63869;

class Class_1_142F37181E3E9CC1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_142F37181E3E9CC1_TypeDefinitionIndex)->GetStaticField(0x14DE0);
	}
	::RPG::Client::BatchAnimationAttachPointMapping* _AttachPointMapping_k__BackingField; // 0x10
	::RPG::Client::NPCPedestrianV2BatchAnimationEvent* _BatchAnimationEvent_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_142F37181E3E9CC1_Class_3_8661546F242498DE_2*>* Field_1_8; // 0x20
	::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* _ClipGroups_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::IAssetOperation*>* Field_1_7; // 0x30
	::UnityEngine::Rendering::BatchAnimation* _BatchAnimation_k__BackingField; // 0x38
	::RPG::Client::BatchAnimationVariantAsset* _VariantAsset_k__BackingField; // 0x40
	::System::Int32 _ClipCount_k__BackingField; // 0x48

	::System::Void _ctor(::UnityEngine::Rendering::BatchAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_F879B5DF2C7EBED0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_F879B5DF2C7EBED0_OFFSET))(this, a1);
	}

	::RPG::Client::BAPartVariantRes* Method_1_C785825650E13237(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_C785825650E13237_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_22CF6664C8243DD3(::RPG::Client::BAPartVariantRes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_22CF6664C8243DD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D855E0385BE48BEC(::System::String* a1, ::Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_D855E0385BE48BEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C808DA0D58F3B7B5(::System::String* a1, ::Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_142F37181E3E9CC1_Class_3_A6F48C4639F89890*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_C808DA0D58F3B7B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_695A241659463176(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_695A241659463176_OFFSET))(this, a1);
	}

	::System::Void Method_1_159BF039DF9EB957(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_159BF039DF9EB957_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* Method_1_7855D276DC78F22D(::BatchAnimationClipGroup* a1, ::UnityEngine::Transform* a2, ::System::Int32& a3)
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::BatchAnimationClipGroup*, ::UnityEngine::Transform*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_7855D276DC78F22D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0FA313EC9DCC2020(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::Class_1_142F37181E3E9CC1_Class_3_8661546F242498DE_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::Class_1_142F37181E3E9CC1_Class_3_8661546F242498DE_2*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_0FA313EC9DCC2020_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2747376244A57756(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_METHOD_1_2747376244A57756_OFFSET))(this, a1);
	}

	::UnityEngine::Rendering::BatchAnimation* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimation* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_SET_BATCHANIMATION_OFFSET))(this, value);
	}

	::RPG::Client::BatchAnimationVariantAsset* get_VariantAsset()
	{
		return ((::RPG::Client::BatchAnimationVariantAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_GET_VARIANTASSET_OFFSET))(this);
	}

	::System::Void set_VariantAsset(::RPG::Client::BatchAnimationVariantAsset* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationVariantAsset*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_SET_VARIANTASSET_OFFSET))(this, value);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* get_AttachPointMapping()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_GET_ATTACHPOINTMAPPING_OFFSET))(this);
	}

	::System::Void set_AttachPointMapping(::RPG::Client::BatchAnimationAttachPointMapping* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BatchAnimationAttachPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_SET_ATTACHPOINTMAPPING_OFFSET))(this, value);
	}

	::RPG::Client::NPCPedestrianV2BatchAnimationEvent* get_BatchAnimationEvent()
	{
		return ((::RPG::Client::NPCPedestrianV2BatchAnimationEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_GET_BATCHANIMATIONEVENT_OFFSET))(this);
	}

	::System::Void set_BatchAnimationEvent(::RPG::Client::NPCPedestrianV2BatchAnimationEvent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCPedestrianV2BatchAnimationEvent*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_SET_BATCHANIMATIONEVENT_OFFSET))(this, value);
	}

	::System::Int32 get_ClipCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_GET_CLIPCOUNT_OFFSET))(this);
	}

	::System::Void set_ClipCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_SET_CLIPCOUNT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>* get_ClipGroups()
	{
		return ((::System::Collections::Generic::List_1<::BatchAnimationClipGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_GET_CLIPGROUPS_OFFSET))(this);
	}
};
