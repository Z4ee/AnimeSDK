#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS126_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEF9A0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS126_0__INITINSUFFICIENTITEMSSCROLLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16CEF9B0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS126_0__INITINSUFFICIENTITEMSSCROLLVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16CEFAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass126_0_TypeDefinitionIndex = 82864;

	class UIGeneralTipsPopWindowController___c__DisplayClass126_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS126_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitInsufficientItemsScrollView_b__0(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS126_0__INITINSUFFICIENTITEMSSCROLLVIEW_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitInsufficientItemsScrollView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS126_0__INITINSUFFICIENTITEMSSCROLLVIEW_B__1_OFFSET))(this);
		}
	};
}
