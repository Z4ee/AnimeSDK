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

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x1AD0F480)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AD0F720)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x1AD0F770)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_ISAVAILABLETAILANCHOR_OFFSET UNITYSDK_OFFSET(0x1AD0F790)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0x1AD0F730)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1AD0F750)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_GET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0x1AD102C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_INIT_OFFSET UNITYSDK_OFFSET(0x1AD0F0D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD0F800)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x1AD101C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0x1AD10240)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x1AD0F5C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1AD0FB90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1AD0F290)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1AD0F200)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1AD0F440)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_REFRESHCOLLIDERTRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0x1AD0F540)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1AD0F9B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1AD0F870)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_ANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x1AD0F780)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_PARENTCOMPONENTREF_OFFSET UNITYSDK_OFFSET(0x1AD0F740)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1AD0F760)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_SET_VIEWSTATE_OFFSET UNITYSDK_OFFSET(0x1AD0F950)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR_TRYPLAYMATCHANIME_OFFSET UNITYSDK_OFFSET(0x1AD0FAB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD102E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD102D0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchor_TypeDefinitionIndex = 73984;

	class AlleyPackAnchor : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_IOPLEMCBCBB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x62090);
		}
		static ::System::String** StaticGet_JPGFDKLOGKA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x62098);
		}
		static ::System::String** StaticGet_GIICHHECGGP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x620A0);
		}
		static ::System::String** StaticGet_PPKJCJMHLCH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x620A8);
		}
		static ::System::String** StaticGet_EOBIFKHDEAL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x620B0);
		}
		static ::System::String** StaticGet_CDKJFNMCCLJ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x620B8);
		}
		static ::System::String** StaticGet_KMOCDILCKJH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x620C0);
		}
		static ::UnityEngine::Vector3* StaticGet_KIOGIOEDJOI()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x14250);
		}
		static ::UnityEngine::Vector3* StaticGet_BNACHKAFOPE()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x1425C);
		}
		static ::UnityEngine::Vector3* StaticGet_GFFBPOBCNKL()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackAnchor_TypeDefinitionIndex)->GetStaticField(0x14268);
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
		::UnityEngine::Collider* MLJOMELBBMM; // 0x58
		::System::Single HJKPJJHCNEP; // 0x60
		::System::Boolean BIIHFBPFCMN; // 0x64
		::UnityEngine::Animation* PMOJILOJEPE; // 0x68
		::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x70
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState MKALMLPKLJD; // 0x78
		::RPG::Client::ActivityAlley::AlleyPackAnchorViewState KMGNGBLAFMF; // 0x7C
		::System::Boolean PFOKPFNJJAA; // 0x80

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
