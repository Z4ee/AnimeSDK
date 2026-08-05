#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass534_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCAE20)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_1__PLAYNPCFADEACTIONS_B__4_OFFSET UNITYSDK_OFFSET(0x17BCAE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass534_1_TypeDefinitionIndex = 62819;

	class UIGalgamePageController___c__DisplayClass534_1 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::MoleMole::UIGalgamePageController___c__DisplayClass534_0* CS___8__locals1; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS534_1__PLAYNPCFADEACTIONS_B__4_OFFSET))(this);
		}
	};
}
