#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebPictureBookPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193653C0)
#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__PLAYPENDINGROWANIMATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x193678F0)
#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__PLAYPENDINGROWANIMATIONS_B__1_OFFSET UNITYSDK_OFFSET(0x19367920)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookPopWindowController___c__DisplayClass34_0_TypeDefinitionIndex = 80386;

	class UIBangbooMicroWebPictureBookPopWindowController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim>* pending; // 0x10
		::MoleMole::UIBangbooMicroWebPictureBookPopWindowController* __4__this; // 0x18
		::MoleMole::UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim anim; // 0x20
		::System::Int32 startIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPendingRowAnimations_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__PLAYPENDINGROWANIMATIONS_B__0_OFFSET))(this);
		}

		::System::Void _PlayPendingRowAnimations_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__PLAYPENDINGROWANIMATIONS_B__1_OFFSET))(this);
		}
	};
}
