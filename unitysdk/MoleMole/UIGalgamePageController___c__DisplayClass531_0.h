#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19390B60)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_0__PLAYNPCFADEOUT_B__3_OFFSET UNITYSDK_OFFSET(0x19390B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass531_0_TypeDefinitionIndex = 62796;

	class UIGalgamePageController___c__DisplayClass531_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeOut_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS531_0__PLAYNPCFADEOUT_B__3_OFFSET))(this);
		}
	};
}
