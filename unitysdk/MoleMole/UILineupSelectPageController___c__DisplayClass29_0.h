#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6BE0E422E1288EE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController; }

#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8C510)
#define MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS29_0__KICKPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x16D8C520)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectPageController___c__DisplayClass29_0_TypeDefinitionIndex = 79041;

	class UILineupSelectPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectPageController* __4__this; // 0x10
		::Struct_2_B6BE0E422E1288EE playerData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _KickPlayer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTPAGECONTROLLER___C__DISPLAYCLASS29_0__KICKPLAYER_B__0_OFFSET))(this);
		}
	};
}
