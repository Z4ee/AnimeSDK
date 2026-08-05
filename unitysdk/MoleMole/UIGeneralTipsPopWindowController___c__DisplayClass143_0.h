#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS143_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185AAA80)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS143_0__INITREWARDITEMSSCROLLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x185AAA90)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS143_0__INITREWARDITEMSSCROLLVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x185AABB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass143_0_TypeDefinitionIndex = 40471;

	class UIGeneralTipsPopWindowController___c__DisplayClass143_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS143_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitRewardItemsScrollView_b__0(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS143_0__INITREWARDITEMSSCROLLVIEW_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitRewardItemsScrollView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS143_0__INITREWARDITEMSSCROLLVIEW_B__1_OFFSET))(this);
		}
	};
}
