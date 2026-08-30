#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFC0760)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_0__TRANSFEROPENMODESELECTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xDFC4570)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils___c__DisplayClass54_0_TypeDefinitionIndex = 67817;

	class RogueTournUtils___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::UInt32 blockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferOpenModeSelectPage_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS54_0__TRANSFEROPENMODESELECTPAGE_B__0_OFFSET))(this, a1);
		}
	};
}
