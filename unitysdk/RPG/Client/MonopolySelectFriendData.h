#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOPOLYSELECTFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D77190)
#define RPG_CLIENT_MONOPOLYSELECTFRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D77220)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolySelectFriendData_TypeDefinitionIndex = 53867;

	class MonopolySelectFriendData : public ::System::Object
	{
	public:
		::System::UInt32 FriendUID; // 0x10
		::System::UInt32 SubCoin; // 0x14
		::System::UInt32 AddCoin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTFRIENDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolySelectFriendData* Create(::System::UInt32 uid, ::System::UInt32 addCoin, ::System::UInt32 subCoin)
		{
			return ((::RPG::Client::MonopolySelectFriendData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSELECTFRIENDDATA_CREATE_OFFSET))(uid, addCoin, subCoin);
		}
	};
}
