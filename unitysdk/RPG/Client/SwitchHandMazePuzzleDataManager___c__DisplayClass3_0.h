#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwitchHandMazePuzzleRowWrapper; }

#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F01B0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS3_0__GETMAZEPUZZLEROWWRAPPER_B__0_OFFSET UNITYSDK_OFFSET(0xB1F0D80)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandMazePuzzleDataManager___c__DisplayClass3_0_TypeDefinitionIndex = 62691;

	class SwitchHandMazePuzzleDataManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 switchID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMazePuzzleRowWrapper_b__0(::RPG::Client::SwitchHandMazePuzzleRowWrapper* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandMazePuzzleRowWrapper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS3_0__GETMAZEPUZZLEROWWRAPPER_B__0_OFFSET))(this, row);
		}
	};
}
