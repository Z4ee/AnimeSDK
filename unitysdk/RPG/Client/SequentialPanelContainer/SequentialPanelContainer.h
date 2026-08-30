#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client::SequentialPanelContainer { class IPanelItem; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelAnchorInfo; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelItem; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelLayoutManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ACQUIREPANEL_OFFSET UNITYSDK_OFFSET(0x1AF75360)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ADDPANEL_OFFSET UNITYSDK_OFFSET(0x1AF74FF0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CLEARPANELPOOL_OFFSET UNITYSDK_OFFSET(0x1AF74F00)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CONTAINSPANEL_OFFSET UNITYSDK_OFFSET(0x1AF753F0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GETALLPANELS_OFFSET UNITYSDK_OFFSET(0x1AF76080)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET_OFFSET UNITYSDK_OFFSET(0x1AF74CE0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET__TOPPANEL_OFFSET UNITYSDK_OFFSET(0x1AF75100)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEALLPANELS_OFFSET UNITYSDK_OFFSET(0x1AF754B0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEPANELTOINDEX_OFFSET UNITYSDK_OFFSET(0x1AF75500)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AF74DD0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AF74D80)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REGISTERPANELPOOL_OFFSET UNITYSDK_OFFSET(0x1AF74F50)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REMOVEPANEL_OFFSET UNITYSDK_OFFSET(0x1AF752C0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_SETPANELLOADROOT_OFFSET UNITYSDK_OFFSET(0x1AF74EB0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_UPDATEPANELPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1AF74E50)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF760C0)

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int SequentialPanelContainer_TypeDefinitionIndex = 74608;

	class SequentialPanelContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _PanelLoadRoot; // 0x18
		::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo* AnchorInfo; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>* _PanelItems; // 0x28
		::RPG::Client::SequentialPanelContainer::SequentialPanelLayoutManager* _LayoutManager; // 0x30
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SequentialPanelContainer::SequentialPanelContainer* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::SequentialPanelContainer::SequentialPanelContainer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET_OFFSET))(a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetPanelLoadRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_SETPANELLOADROOT_OFFSET))(this, a1);
		}

		::System::Void ClearPanelPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CLEARPANELPOOL_OFFSET))(this);
		}

		::System::Void RegisterPanelPool(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REGISTERPANELPOOL_OFFSET))(this, a1);
		}

		::System::Void AddPanel(::RPG::Client::SequentialPanelContainer::SequentialPanelItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::SequentialPanelItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ADDPANEL_OFFSET))(this, a1);
		}

		::System::Void RemovePanel(::RPG::Client::SequentialPanelContainer::SequentialPanelItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::SequentialPanelItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REMOVEPANEL_OFFSET))(this, a1);
		}

		::RPG::Client::SequentialPanelContainer::SequentialPanelItem* AcquirePanel(::System::String* a1)
		{
			return ((::RPG::Client::SequentialPanelContainer::SequentialPanelItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ACQUIREPANEL_OFFSET))(this, a1);
		}

		::System::Boolean ContainsPanel(::RPG::Client::SequentialPanelContainer::IPanelItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::IPanelItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CONTAINSPANEL_OFFSET))(this, a1);
		}

		::System::Void HideAllPanels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEALLPANELS_OFFSET))(this);
		}

		::System::Void HidePanelToIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEPANELTOINDEX_OFFSET))(this, a1);
		}

		::System::Void UpdatePanelPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_UPDATEPANELPOSITIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>* GetAllPanels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GETALLPANELS_OFFSET))(this);
		}

		::RPG::Client::SequentialPanelContainer::SequentialPanelItem* get__TopPanel()
		{
			return ((::RPG::Client::SequentialPanelContainer::SequentialPanelItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET__TOPPANEL_OFFSET))(this);
		}
	};
}
