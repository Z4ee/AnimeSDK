#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC4A9060)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A9150)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnExtraHcoinItemData_TypeDefinitionIndex = 57863;

	class PlayerReturnExtraHcoinItemData : public ::System::Object
	{
	public:
		::System::UInt32 CurrentProgressHcoin; // 0x10
		::System::Single BeginUIRatio; // 0x14
		::System::UInt32 HcoinThreshold; // 0x18
		::System::UInt32 ExtraHcoinNum; // 0x1C
		::System::Single ExtraHcoinUIProgressRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnExtraHcoinItemData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::RPG::Client::PlayerReturnExtraHcoinItemData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
