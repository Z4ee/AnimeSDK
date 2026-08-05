#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186CA800)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__INITITEMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x186CA810)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__INITITEMLIST_B__1_OFFSET UNITYSDK_OFFSET(0x186CA930)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__INITITEMLIST_B__2_OFFSET UNITYSDK_OFFSET(0x186CAA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 40485;

	class UIGeneralTipsPopWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x10
		::System::Action_1<::System::Int32>* overrideOnClickItemBtn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitItemList_b__0(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__INITITEMLIST_B__0_OFFSET))(this, binderInfo);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitItemList_b__1(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__INITITEMLIST_B__1_OFFSET))(this, binderInfo);
		}

		::System::Void _InitItemList_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__INITITEMLIST_B__2_OFFSET))(this);
		}
	};
}
