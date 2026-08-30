#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RaidModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDDFCC50)
#define RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS60_0__STARTRAID_B__0_OFFSET UNITYSDK_OFFSET(0xDE01860)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidModule___c__DisplayClass60_0_TypeDefinitionIndex = 66777;

	class RaidModule___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::RPG::Client::RaidModule* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList; // 0x18
		::System::Boolean useSave; // 0x20
		::System::UInt32 worldLevel; // 0x24
		::RPG::GameCore::RaidConfigType raidType; // 0x28
		::System::UInt32 propEntityID; // 0x2C
		::System::UInt32 raidID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartRaid_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDMODULE___C__DISPLAYCLASS60_0__STARTRAID_B__0_OFFSET))(this);
		}
	};
}
