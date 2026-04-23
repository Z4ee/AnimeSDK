#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/AlignmentType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1073;
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelAnchorInfo; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER_UPDATELAYOUT_OFFSET UNITYSDK_OFFSET(0xB15E1E0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__ADJUSTPANELSTOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0xB15F4F0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB15EB90)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0xB15FC10)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0xB15FA30)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETUISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xB15FE50)

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int SequentialPanelLayoutManager_TypeDefinitionIndex = 68972;

	class SequentialPanelLayoutManager : public ::System::Object
	{
	public:
		// static const ::System::Single SCREEN_PADDING; // 0x0
		// static const ::System::Single DEFAULT_SPACING; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::SequentialPanelContainer::AlignmentType, ::Class_0_16E4307DCC419505_1073*>* _Strategies; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _RootRectTransforms; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _AlignRectTransforms; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateLayout(::System::Collections::Generic::IList_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>* panels, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo* anchorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>*, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER_UPDATELAYOUT_OFFSET))(this, panels, anchorInfo);
		}

		::System::Void _GetScreenRect(::UnityEngine::RectTransform* rectTransform, ::System::Single& left, ::System::Single& right, ::System::Single& bottom, ::System::Single& top)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENRECT_OFFSET))(this, rectTransform, left, right, bottom, top);
		}

		::System::Void _AdjustPanelsToScreenBounds(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* alignTransforms, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* rootTransforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__ADJUSTPANELSTOSCREENBOUNDS_OFFSET))(this, alignTransforms, rootTransforms);
		}

		::System::Void _GetScreenBounds(::System::Single& left, ::System::Single& right, ::System::Single& bottom, ::System::Single& top)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENBOUNDS_OFFSET))(this, left, right, bottom, top);
		}

		::System::Single _GetUIScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETUISCALEFACTOR_OFFSET))(this);
		}
	};
}
