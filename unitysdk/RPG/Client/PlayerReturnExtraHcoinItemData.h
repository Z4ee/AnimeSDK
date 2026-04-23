#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAD67EF0)
#define RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD67FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnExtraHcoinItemData_TypeDefinitionIndex = 57076;

	class PlayerReturnExtraHcoinItemData : public ::System::Object
	{
	public:
		::System::Single BeginUIRatio; // 0x10
		::System::Single ExtraHcoinUIProgressRatio; // 0x14
		::System::UInt32 ExtraHcoinNum; // 0x18
		::System::UInt32 HcoinThreshold; // 0x1C
		::System::UInt32 CurrentProgressHcoin; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlayerReturnExtraHcoinItemData* Create(::System::UInt32 hcoinThreshold, ::System::UInt32 extraHcoinNum, ::System::UInt32 currentProgressHcoin, ::System::Single beginUIRatio, ::System::Single extraHcoinUIProgressRatio)
		{
			return ((::RPG::Client::PlayerReturnExtraHcoinItemData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNEXTRAHCOINITEMDATA_CREATE_OFFSET))(hcoinThreshold, extraHcoinNum, currentProgressHcoin, beginUIRatio, extraHcoinUIProgressRatio);
		}
	};
}
