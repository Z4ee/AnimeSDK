#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangKovHandInPopWindowController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__APPLYBANGKOVITEMINFOTOWISHLIST_B__0_OFFSET UNITYSDK_OFFSET(0x16808BE0)
#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16808BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangKovHandInPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 64953;

	class UIBangKovHandInPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangKovHandInPopWindowController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyBangkovItemInfoToWishList_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__APPLYBANGKOVITEMINFOTOWISHLIST_B__0_OFFSET))(this, ctrl);
		}
	};
}
