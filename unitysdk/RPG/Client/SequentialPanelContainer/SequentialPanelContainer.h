#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_95E1BEF84A79D9EB;
namespace RPG::Client::SequentialPanelContainer { class IPanelItem; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelAnchorInfo; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelItem; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelLayoutManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ACQUIREPANEL_OFFSET UNITYSDK_OFFSET(0xA4257C0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ADDPANEL_OFFSET UNITYSDK_OFFSET(0xA425420)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CLEARPANELPOOL_OFFSET UNITYSDK_OFFSET(0xA425310)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CONTAINSPANEL_OFFSET UNITYSDK_OFFSET(0xA425850)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GETALLPANELS_OFFSET UNITYSDK_OFFSET(0xA426420)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET_OFFSET UNITYSDK_OFFSET(0xA4250F0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET__TOPPANEL_OFFSET UNITYSDK_OFFSET(0xA425550)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEALLPANELS_OFFSET UNITYSDK_OFFSET(0xA425980)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEPANELTOINDEX_OFFSET UNITYSDK_OFFSET(0xA4259D0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA4251E0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA425190)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REGISTERPANELPOOL_OFFSET UNITYSDK_OFFSET(0xA425360)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REMOVEPANEL_OFFSET UNITYSDK_OFFSET(0xA425720)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_SETPANELLOADROOT_OFFSET UNITYSDK_OFFSET(0xA4252C0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_UPDATEPANELPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA425260)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xA426460)

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int SequentialPanelContainer_TypeDefinitionIndex = 61460;

	class SequentialPanelContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _PanelLoadRoot; // 0x18
		::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo* AnchorInfo; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>* _PanelItems; // 0x28
		::RPG::Client::SequentialPanelContainer::SequentialPanelLayoutManager* _LayoutManager; // 0x30
		::Class_1_95E1BEF84A79D9EB* _PoolMgr; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SequentialPanelContainer::SequentialPanelContainer* Get(::UnityEngine::Transform* trans)
		{
			return ((::RPG::Client::SequentialPanelContainer::SequentialPanelContainer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_GET_OFFSET))(trans);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetPanelLoadRoot(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_SETPANELLOADROOT_OFFSET))(this, root);
		}

		::System::Void ClearPanelPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CLEARPANELPOOL_OFFSET))(this);
		}

		::System::Void RegisterPanelPool(::System::String* prefabPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REGISTERPANELPOOL_OFFSET))(this, prefabPath);
		}

		::System::Void AddPanel(::RPG::Client::SequentialPanelContainer::SequentialPanelItem* panel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::SequentialPanelItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ADDPANEL_OFFSET))(this, panel);
		}

		::System::Void RemovePanel(::RPG::Client::SequentialPanelContainer::SequentialPanelItem* panel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::SequentialPanelItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_REMOVEPANEL_OFFSET))(this, panel);
		}

		::RPG::Client::SequentialPanelContainer::SequentialPanelItem* AcquirePanel(::System::String* prefabPath)
		{
			return ((::RPG::Client::SequentialPanelContainer::SequentialPanelItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_ACQUIREPANEL_OFFSET))(this, prefabPath);
		}

		::System::Boolean ContainsPanel(::RPG::Client::SequentialPanelContainer::IPanelItem* panel)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SequentialPanelContainer::IPanelItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_CONTAINSPANEL_OFFSET))(this, panel);
		}

		::System::Void HideAllPanels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEALLPANELS_OFFSET))(this);
		}

		::System::Void HidePanelToIndex(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELCONTAINER_HIDEPANELTOINDEX_OFFSET))(this, index);
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
