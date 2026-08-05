#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_270D168B3DF51738;
class Class_2_A05E342C0B6131A8;
namespace MoleMole { class UIGalgamePageController; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS167_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170EC3B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS167_0__GENERATEUIZOOMPLAYABLE_B__0_OFFSET UNITYSDK_OFFSET(0x170EC3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass167_0_TypeDefinitionIndex = 62804;

	class UIGalgamePageController___c__DisplayClass167_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::Class_2_A05E342C0B6131A8* uizoomPlayItem; // 0x18
		::Class_1_270D168B3DF51738* stageZoomInfo; // 0x20
		::System::Int32 stageNodeIdx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS167_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateUIZoomPlayable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS167_0__GENERATEUIZOOMPLAYABLE_B__0_OFFSET))(this);
		}
	};
}
