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

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0xB088A30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB088CD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0xB088D20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ISAVAILABLETAILANCHOR_OFFSET UNITYSDK_OFFSET(0xB088D40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xB088CE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0xB088D00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0xB089870)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_INIT_OFFSET UNITYSDK_OFFSET(0xB088680)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB088DB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0xB089770)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0xB0897F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xB088B70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB089140)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB088840)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB0887B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB0889F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_REFRESHCOLLIDERTRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0xB088AF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETSELECT_OFFSET UNITYSDK_OFFSET(0xB088F60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xB088E20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0xB088D30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0xB088CF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET UNITYSDK_OFFSET(0xB088D10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0xB088F00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_TRYPLAYMATCHANIME_OFFSET UNITYSDK_OFFSET(0xB089060)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xB089890)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB089880)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchor_TypeDefinitionIndex = 69164;

	class AlleyPackAnchor : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C360);
		}
		static ::System::String** StaticGet_Field_5_1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C368);
		}
		static ::System::String** StaticGet_Field_5_2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C370);
		}
		static ::System::String** StaticGet_Field_5_3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C378);
		}
		static ::System::String** StaticGet_Field_5_4()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C380);
		}
		static ::System::String** StaticGet_Field_5_5()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C388);
		}
		static ::System::String** StaticGet_Field_5_6()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x4C390);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_7()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0xE7E0);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_8()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0xE7EC);
		}
		static ::UnityEngine::Vector3* StaticGet_Field_5_9()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0xE7F8);
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
		::UnityEngine::Collider* Field_5_19; // 0x58
		::System::Single Field_5_20; // 0x60
		::System::Boolean Field_5_21; // 0x64
		::UnityEngine::Animation* Field_5_22; // 0x68
		::RPG::Client::RPGAnimationEvent* Field_5_23; // 0x70
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState Field_5_24; // 0x78
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState Field_5_25; // 0x7C
		::System::Boolean Field_5_26; // 0x80

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

		::System::Void set_ParentComponentRef(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchorState get_State()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchorState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::ActivityAlley::AlleyPackAnchorState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchorState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchor* get_AnchorWaitingAttach()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET))(this);
		}

		::System::Void set_AnchorWaitingAttach(::RPG::Client::ActivityAlley::AlleyPackAnchor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackAnchor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET))(this, a1);
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
