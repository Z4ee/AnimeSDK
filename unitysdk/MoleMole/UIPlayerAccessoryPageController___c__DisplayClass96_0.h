#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A72710)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__0_OFFSET UNITYSDK_OFFSET(0x16A72720)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__1_OFFSET UNITYSDK_OFFSET(0x16A72770)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__2_OFFSET UNITYSDK_OFFSET(0x16A727C0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__3_OFFSET UNITYSDK_OFFSET(0x16A728E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass96_0_TypeDefinitionIndex = 51550;

	class UIPlayerAccessoryPageController___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::System::Int32 skinIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickSwitchSkinIndex_b__0(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__0_OFFSET))(this, id);
		}

		::System::Boolean _OnClickSwitchSkinIndex_b__1(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__1_OFFSET))(this, id);
		}

		::System::Void _OnClickSwitchSkinIndex_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__2_OFFSET))(this);
		}

		::System::Void _OnClickSwitchSkinIndex_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS96_0__ONCLICKSWITCHSKININDEX_B__3_OFFSET))(this);
		}
	};
}
