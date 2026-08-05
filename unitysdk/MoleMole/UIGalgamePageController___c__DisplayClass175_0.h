#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E31D0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_0__GENERATEWHITESCREENSHAKEPLAYITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1A308840)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass175_0_TypeDefinitionIndex = 62834;

	class UIGalgamePageController___c__DisplayClass175_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::Class_2_FDFE69FE7B72463B* stageAnim; // 0x18
		::System::String* audioEventID; // 0x20
		::System::Int32 realIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateWhiteScreenShakePlayItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS175_0__GENERATEWHITESCREENSHAKEPLAYITEM_B__0_OFFSET))(this);
		}
	};
}
