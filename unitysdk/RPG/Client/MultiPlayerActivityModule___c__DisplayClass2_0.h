#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19087B20)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___C__DISPLAYCLASS2_0__TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x19088340)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___C__DISPLAYCLASS2_0__TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x19088500)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPlayerActivityModule___c__DisplayClass2_0_TypeDefinitionIndex = 59057;

	class MultiPlayerActivityModule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::UInt32 activityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToMultiPlayerActivityEntrancePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___C__DISPLAYCLASS2_0__TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_B__0_OFFSET))(this);
		}

		::System::Void _TransferToMultiPlayerActivityEntrancePage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___C__DISPLAYCLASS2_0__TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_B__1_OFFSET))(this);
		}
	};
}
