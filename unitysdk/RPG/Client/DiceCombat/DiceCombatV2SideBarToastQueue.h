#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2SideBarToastMessage_MessageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastItem; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastMessage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2SideBarToastQueue_ActiveToastInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_AWAKE_OFFSET UNITYSDK_OFFSET(0x19FE8AE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_CLEARPENDING_OFFSET UNITYSDK_OFFSET(0x19FE9430)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_PUSH_OFFSET UNITYSDK_OFFSET(0x19FE93A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19FE9500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE9E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__GETORCREATE_OFFSET UNITYSDK_OFFSET(0x19FE9B80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__ONTOASTFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x19FE9CC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__SHOW_OFFSET UNITYSDK_OFFSET(0x19FE97F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__TRYSHOWNEXTMESSAGES_OFFSET UNITYSDK_OFFSET(0x19FE9550)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__UPDATEFADEOUT_OFFSET UNITYSDK_OFFSET(0x19FE9600)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2SideBarToastQueue_TypeDefinitionIndex = 72299;

	class DiceCombatV2SideBarToastQueue : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem*>* _ToastPrefabs; // 0x18
		::UnityEngine::Transform* _Root; // 0x20
		::System::Int32 _MaxVisible; // 0x28
		::System::Collections::Generic::Queue_1<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*>* _MessageQueue; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastQueue_ActiveToastInfo*>* _ActiveToastList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem*>*>* _ItemPools; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage_MessageType, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem*>* _PrefabLookup; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_AWAKE_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_PUSH_OFFSET))(this, a1);
		}

		::System::Void ClearPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_CLEARPENDING_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE_UPDATE_OFFSET))(this);
		}

		::System::Void _TryShowNextMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__TRYSHOWNEXTMESSAGES_OFFSET))(this);
		}

		::System::Void _UpdateFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__UPDATEFADEOUT_OFFSET))(this);
		}

		::System::Void _Show(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__SHOW_OFFSET))(this, a1);
		}

		::System::Void _OnToastFadeOutEnd(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastQueue_ActiveToastInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastQueue_ActiveToastInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__ONTOASTFADEOUTEND_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem* _GetOrCreate(::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2SideBarToastItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2SIDEBARTOASTQUEUE__GETORCREATE_OFFSET))(this, a1, a2);
		}
	};
}
