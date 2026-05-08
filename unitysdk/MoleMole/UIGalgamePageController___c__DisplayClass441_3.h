#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass441_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_3__CTOR_OFFSET UNITYSDK_OFFSET(0x157A3580)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_3__PLAYNPCFADEACTIONS_B__9_OFFSET UNITYSDK_OFFSET(0x157A3590)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass441_3_TypeDefinitionIndex = 41825;

	class UIGalgamePageController___c__DisplayClass441_3 : public ::System::Object
	{
	public:
		::System::Action* __9__9; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass441_0* CS___8__locals3; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS441_3__PLAYNPCFADEACTIONS_B__9_OFFSET))(this);
		}
	};
}
