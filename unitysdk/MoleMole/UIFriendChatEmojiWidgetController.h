#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_26706B50B8C579CA;
class Class_1_A09FD06BA66A78D7;
class Class_2_0C34F81D61279A93;
class Class_2_2F3C7D4EFC74D485;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ADD_ONSELECTEMOJI_OFFSET UNITYSDK_OFFSET(0x15EFAAD0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_CLOSEWIDGET_OFFSET UNITYSDK_OFFSET(0x15EFA4E0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x15EFAAB0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0x15EFA2F0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONCLICKEMOJIGROUPITEM_OFFSET UNITYSDK_OFFSET(0x15EFA830)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONCLICKEMOJIITEM_OFFSET UNITYSDK_OFFSET(0x15EFA660)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EFA1E0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EFA270)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EF9850)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EFA170)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_REMOVE_ONSELECTEMOJI_OFFSET UNITYSDK_OFFSET(0x15EFAB50)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x15EFAAC0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_SHOWWIDGET_OFFSET UNITYSDK_OFFSET(0x15EFA340)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_UPDATEFAVEMOJI_OFFSET UNITYSDK_OFFSET(0x15EF9F00)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER__CLOSEWIDGET_B__9_0_OFFSET UNITYSDK_OFFSET(0x15EFAC30)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFABD0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EFAC40)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EFACD0)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EFAD60)
#define MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EFADF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatEmojiWidgetController_TypeDefinitionIndex = 74042;

	class UIFriendChatEmojiWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0C34F81D61279A93* _view; // 0x2B8
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2C0
		::System::Boolean _isShow; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_26706B50B8C579CA*>* _emojiGroupDataList; // 0x2D0
		::System::Boolean _isFavGroup; // 0x2D8
		::System::Collections::Generic::List_1<::Class_1_A09FD06BA66A78D7*>* _displayEmojiDataList; // 0x2E0
		::System::Action_1<::System::Int32>* OnSelectEmoji; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void UpdateFavEmoji(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_UPDATEFAVEMOJI_OFFSET))(this, obj);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWidget(::System::Action_1<::System::Int32>* OnSelectEmoji)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_INITWIDGET_OFFSET))(this, OnSelectEmoji);
		}

		::System::Void ShowWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_SHOWWIDGET_OFFSET))(this);
		}

		::System::Void CloseWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_CLOSEWIDGET_OFFSET))(this);
		}

		::System::Void OnClickEmojiItem(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONCLICKEMOJIITEM_OFFSET))(this, idx);
		}

		::System::Void OnClickEmojiGroupItem(::System::Int32 groupIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ONCLICKEMOJIGROUPITEM_OFFSET))(this, groupIdx);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_SET_ISSHOW_OFFSET))(this, value);
		}

		::System::Void add_OnSelectEmoji(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_ADD_ONSELECTEMOJI_OFFSET))(this, value);
		}

		::System::Void remove_OnSelectEmoji(::System::Action_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER_REMOVE_ONSELECTEMOJI_OFFSET))(this, value);
		}

		::System::Void _CloseWidget_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER__CLOSEWIDGET_B__9_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATEMOJIWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
