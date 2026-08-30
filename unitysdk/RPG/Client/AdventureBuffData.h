#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_ADVENTUREBUFFDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x3AF9950)
#define RPG_CLIENT_ADVENTUREBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureBuffData_TypeDefinitionIndex = 68099;

	struct alignas(4) AdventureBuffData
	{
		::System::UInt32 BuffID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Int32 Count; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREBUFFDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AdventureBuffData Clone()
		{
			return ((::RPG::Client::AdventureBuffData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREBUFFDATA_CLONE_OFFSET))(this);
		}
	};
}
