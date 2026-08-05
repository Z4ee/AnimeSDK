#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1835D760)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_0__SENDCHANGESKIN_B__1_OFFSET UNITYSDK_OFFSET(0x1835D790)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_0__SENDCHANGESKIN_B__4_OFFSET UNITYSDK_OFFSET(0x1835D770)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass43_0_TypeDefinitionIndex = 51554;

	class UIPlayerAccessoryPageController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::System::Int32 avatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendChangeSkin_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_0__SENDCHANGESKIN_B__4_OFFSET))(this);
		}

		::System::Void _SendChangeSkin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS43_0__SENDCHANGESKIN_B__1_OFFSET))(this);
		}
	};
}
