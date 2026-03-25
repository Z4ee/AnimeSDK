#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorDirType.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorState.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackAnchorViewState.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AE54088C838A17D2;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x8ED6280)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8ED6520)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x8ED6570)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ISAVAILABLETAILANCHOR_OFFSET UNITYSDK_OFFSET(0x8ED6590)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0x8ED6530)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8ED6550)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0x8ED70C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_INIT_OFFSET UNITYSDK_OFFSET(0x8ED5ED0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8ED6600)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x8ED6FC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0x8ED7040)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x8ED63C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8ED6990)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8ED6090)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x8ED6000)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ONSELECT_OFFSET UNITYSDK_OFFSET(0x8ED6240)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_REFRESHCOLLIDERTRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0x8ED6340)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETSELECT_OFFSET UNITYSDK_OFFSET(0x8ED67B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x8ED6670)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x8ED6580)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0x8ED6540)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET UNITYSDK_OFFSET(0x8ED6560)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0x8ED6750)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_TRYPLAYMATCHANIME_OFFSET UNITYSDK_OFFSET(0x8ED68B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x8ED70E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED70D0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchor_TypeDefinitionIndex = 60741;

	class AlleyPackAnchor : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_20()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F20);
		}
		static ::System::String** StaticGet_Field_5_22()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F28);
		}
		static ::System::String** StaticGet_Field_5_21()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F30);
		}
		static ::System::String** StaticGet_Field_5_23()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F38);
		}
		static ::System::String** StaticGet_Field_5_18()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F40);
		}
		static ::System::String** StaticGet_Field_5_17()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F48);
		}
		static ::System::String** StaticGet_Field_5_19()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x27F50);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_25()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0xD1A0);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_26()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0xD1AC);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_24()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0xD1B8);
		}
		::RPG::Client::ActivityAlley::AlleyPackComponent* _ParentComponentRef_k__BackingField; // 0x18
		::RPG::Client::ActivityAlley::AlleyPackAnchorState _State_k__BackingField; // 0x20
		::RPG::Client::ActivityAlley::AlleyPackAnchor* _AnchorWaitingAttach_k__BackingField; // 0x28
		::RPG::Client::ActivityAlley::AlleyPackAnchor* AdjacentAnchorVertical; // 0x30
		::RPG::Client::ActivityAlley::AlleyPackAnchor* AdjacentAnchorHorizontal; // 0x38
		::RPG::GameCore::AlleyPackAnchorType AnchorType; // 0x40
		::RPG::Client::ActivityAlley::AlleyPackAnchorDirType AnchorUseType; // 0x44
		::System::UInt32 AnchorIndex; // 0x48
		::Class_1_AE54088C838A17D2* AnchorData; // 0x50
		::UnityEngine::Collider* Field_5_9; // 0x58
		::System::Single Field_5_10; // 0x60
		::System::Boolean Field_5_11; // 0x64
		::UnityEngine::Animation* Field_5_12; // 0x68
		::RPG::Client::RPGAnimationEvent* Field_5_13; // 0x70
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState Field_5_14; // 0x78
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState Field_5_15; // 0x7C
		::System::Boolean Field_5_16; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_INIT_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ONSELECT_OFFSET))(this);
		}

		::System::Void EnableColliderTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ENABLECOLLIDERTRIGGER_OFFSET))(this, a1);
		}

		::System::Void RefreshColliderTriggerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_REFRESHCOLLIDERTRIGGERSTATE_OFFSET))(this);
		}

		::System::Boolean Method_5_8A76897D6A693475()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_8A76897D6A693475_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORTRANSFORM_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackComponent* get_ParentComponentRef()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_PARENTCOMPONENTREF_OFFSET))(this);
		}

		::System::Void set_ParentComponentRef(::RPG::Client::ActivityAlley::AlleyPackComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET))(this, value);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchorState get_State()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchorState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ActivityAlley::AlleyPackAnchorState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchorState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET))(this, value);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchor* get_AnchorWaitingAttach()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET))(this);
		}

		::System::Void set_AnchorWaitingAttach(::RPG::Client::ActivityAlley::AlleyPackAnchor* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET))(this, value);
		}

		::System::Boolean get_IsAvailableTailAnchor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ISAVAILABLETAILANCHOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETSELECT_OFFSET))(this, a1);
		}

		::System::Void TryPlayMatchAnime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_TRYPLAYMATCHANIME_OFFSET))(this, a1);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_295B0FA1282F1A6E(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_295B0FA1282F1A6E_OFFSET))(this, a1);
		}

		::System::Void Method_5_14045882BC5C6CA9(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_14045882BC5C6CA9_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState get_ViewState()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchorViewState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_VIEWSTATE_OFFSET))(this);
		}

		::System::Void set_ViewState(::RPG::Client::ActivityAlley::AlleyPackAnchorViewState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchorViewState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_VIEWSTATE_OFFSET))(this, a1);
		}
	};
}
