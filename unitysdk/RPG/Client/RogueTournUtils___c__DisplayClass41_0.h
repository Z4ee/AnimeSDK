#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFBF280)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS41_0__TRANSFERTOLAUNCHER_B__0_OFFSET UNITYSDK_OFFSET(0xDFC4420)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass41_0_TypeDefinitionIndex = 67816;

	class RogueTournUtils___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Action* preTeleportCallback; // 0x10
		::System::UInt32 contentID; // 0x18
		::System::UInt32 entranceID; // 0x1C
		::System::UInt32 mappingInfoID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToLauncher_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS41_0__TRANSFERTOLAUNCHER_B__0_OFFSET))(this);
		}
	};
}
