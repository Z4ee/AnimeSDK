#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_A09FD06BA66A78D7;
class Class_2_0646BF77C99A3FFB;
class Class_2_2F3C7D4EFC74D485;
namespace MoleMole { class UIChatEmojiItemWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14E81530)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_INITEMOJIUI_OFFSET UNITYSDK_OFFSET(0x14E81880)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONCLICKEMOJIICON_OFFSET UNITYSDK_OFFSET(0x14E81ED0)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E81DD0)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E81E60)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E81540)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E81D60)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E82380)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x14E824C0)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E82650)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E826E0)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E826F0)
#define MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E82700)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatEmojiCollectionPopWindowController_TypeDefinitionIndex = 45838;

	class UIChatEmojiCollectionPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_0646BF77C99A3FFB* _view; // 0x310
		::Class_2_2F3C7D4EFC74D485* _model; // 0x318
		::System::Collections::Generic::List_1<::Class_1_A09FD06BA66A78D7*>* _favEmojiList; // 0x320
		::System::Collections::Generic::HashSet_1<::Class_1_A09FD06BA66A78D7*>* _favEmojiSet; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIChatEmojiItemWidgetController_Context*>* UIDisplayEmojiContextList; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitEmojiUI(::System::Collections::Generic::List_1<::Class_1_A09FD06BA66A78D7*>* favEmojiList, ::System::Collections::Generic::List_1<::Class_1_A09FD06BA66A78D7*>* allEmojiList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A09FD06BA66A78D7*>*, ::System::Collections::Generic::List_1<::Class_1_A09FD06BA66A78D7*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_INITEMOJIUI_OFFSET))(this, favEmojiList, allEmojiList);
		}

		::System::Void OnClickEmojiIcon(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER_ONCLICKEMOJIICON_OFFSET))(this, idx);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJICOLLECTIONPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
