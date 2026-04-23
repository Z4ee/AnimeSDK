#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_ADVENTUREBUFFDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xD3350)
#define RPG_CLIENT_ADVENTUREBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3340)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureBuffData_TypeDefinitionIndex = 62788;

	struct alignas(4) AdventureBuffData
	{
		::System::UInt32 BuffID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Int32 Count; // 0x18

		::System::Void _ctor(::System::UInt32 buffID, ::System::UInt32 level, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREBUFFDATA__CTOR_OFFSET))(this, buffID, level, count);
		}

		::RPG::Client::AdventureBuffData Clone()
		{
			return ((::RPG::Client::AdventureBuffData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREBUFFDATA_CLONE_OFFSET))(this);
		}
	};
}
