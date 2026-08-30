#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwitchHandMazePuzzleRowWrapper; }

#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE1153A0)
#define RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS4_0__GETMAZEPUZZLEROWWRAPPER_B__0_OFFSET UNITYSDK_OFFSET(0xE115C00)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandMazePuzzleDataManager___c__DisplayClass4_0_TypeDefinitionIndex = 67999;

	class SwitchHandMazePuzzleDataManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 mappingInfoFloorID; // 0x10
		::System::UInt32 mappingInfoInstanceID; // 0x14
		::System::UInt32 mappingInfoGroupID; // 0x18
		::System::UInt32 mappingInfoPlaneID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMazePuzzleRowWrapper_b__0(::RPG::Client::SwitchHandMazePuzzleRowWrapper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandMazePuzzleRowWrapper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDMAZEPUZZLEDATAMANAGER___C__DISPLAYCLASS4_0__GETMAZEPUZZLEROWWRAPPER_B__0_OFFSET))(this, a1);
		}
	};
}
