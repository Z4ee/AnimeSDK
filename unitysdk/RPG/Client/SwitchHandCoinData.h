#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SWITCHHANDCOINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19C53FC0)
#define RPG_CLIENT_SWITCHHANDCOINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C54380)

namespace RPG::Client
{
	inline static constexpr unsigned int SwitchHandCoinData_TypeDefinitionIndex = 64989;

	class SwitchHandCoinData : public ::System::Object
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::RPG::GameCore::PropState State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwitchHandCoinData* Create(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PropState a3)
		{
			return ((::RPG::Client::SwitchHandCoinData*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWITCHHANDCOINDATA_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
