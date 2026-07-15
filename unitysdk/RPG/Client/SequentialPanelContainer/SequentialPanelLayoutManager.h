#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SequentialPanelContainer/AlignmentType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1169;
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelAnchorInfo; }
namespace RPG::Client::SequentialPanelContainer { class SequentialPanelItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER_UPDATELAYOUT_OFFSET UNITYSDK_OFFSET(0x19F3C7B0)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__ADJUSTPANELSTOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x19F3DC90)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3D330)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x19F3E400)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x19F3E230)
#define RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETUISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x19F3E620)

namespace RPG::Client::SequentialPanelContainer
{
	inline static constexpr unsigned int SequentialPanelLayoutManager_TypeDefinitionIndex = 71307;

	class SequentialPanelLayoutManager : public ::System::Object
	{
	public:
		// static const ::System::Single SCREEN_PADDING; // 0x0
		// static const ::System::Single DEFAULT_SPACING; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _RootRectTransforms; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _AlignRectTransforms; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::SequentialPanelContainer::AlignmentType, ::Class_0_16E4307DCC419505_1169*>* _Strategies; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateLayout(::System::Collections::Generic::IList_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>* a1, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::SequentialPanelContainer::SequentialPanelItem*>*, ::RPG::Client::SequentialPanelContainer::SequentialPanelAnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER_UPDATELAYOUT_OFFSET))(this, a1, a2);
		}

		::System::Void _GetScreenRect(::UnityEngine::RectTransform* a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENRECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _AdjustPanelsToScreenBounds(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__ADJUSTPANELSTOSCREENBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void _GetScreenBounds(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETSCREENBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single _GetUIScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SEQUENTIALPANELCONTAINER_SEQUENTIALPANELLAYOUTMANAGER__GETUISCALEFACTOR_OFFSET))(this);
		}
	};
}
