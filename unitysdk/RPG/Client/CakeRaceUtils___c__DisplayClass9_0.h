#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CAKERACEUTILS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4E840)
#define RPG_CLIENT_CAKERACEUTILS___C__DISPLAYCLASS9_0__TRANSFERTOENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1AC4EBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceUtils___c__DisplayClass9_0_TypeDefinitionIndex = 57605;

	class CakeRaceUtils___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* afterTeleportCallback; // 0x10
		::System::Action* preTeleportCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUTILS___C__DISPLAYCLASS9_0__TRANSFERTOENTRANCE_B__0_OFFSET))(this);
		}
	};
}
