#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SWITCHHANDCOINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB1EF940)
#define RPG_CLIENT_SWITCHHANDCOINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB1EFD10)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandCoinData_TypeDefinitionIndex = 62689;

	class SwitchHandCoinData : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::RPG::GameCore::PropState State; // 0x14
		::System::UInt32 InstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwitchHandCoinData* Create(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::PropState state)
		{
			return ((::RPG::Client::SwitchHandCoinData*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINDATA_CREATE_OFFSET))(groupID, instanceID, state);
		}
	};
}
