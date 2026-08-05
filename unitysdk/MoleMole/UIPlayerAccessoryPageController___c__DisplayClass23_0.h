#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_18.h"
#include "unitysdk/System/Object.h"

class Class_2_927E2D0470CF77A4;

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1988F7B0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHSKINS_B__0_OFFSET UNITYSDK_OFFSET(0x1988F7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass23_0_TypeDefinitionIndex = 51561;

	class UIPlayerAccessoryPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::Enum_3_ED790DAC948A65A9_18 selectedSkinType; // 0x10
		::System::Int32 selectedSkinID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshSkins_b__0(::Class_2_927E2D0470CF77A4* skinData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_927E2D0470CF77A4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHSKINS_B__0_OFFSET))(this, skinData);
		}
	};
}
