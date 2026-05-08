#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIGeneralMissionCompletePopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x151B8940)
#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x151B8950)
#define MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__1_OFFSET UNITYSDK_OFFSET(0x151B8A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMissionCompletePopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 58022;

	class UIGeneralMissionCompletePopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralMissionCompletePopWindowController* __4__this; // 0x10
		::System::Action_1<::System::Int32>* overrideOnClickItemBtn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitItemList_b__0(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__0_OFFSET))(this, binderInfo);
		}

		::System::Void _InitItemList_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__INITITEMLIST_B__1_OFFSET))(this);
		}
	};
}
