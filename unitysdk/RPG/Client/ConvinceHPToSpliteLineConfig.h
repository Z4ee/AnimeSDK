#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CONVINCEHPTOSPLITELINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29D460)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceHPToSpliteLineConfig_TypeDefinitionIndex = 60777;

	class ConvinceHPToSpliteLineConfig : public ::System::Object
	{
	public:
		::System::Int32 HP; // 0x10
		::System::Single Pos; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEHPTOSPLITELINECONFIG__CTOR_OFFSET))(this);
		}
	};
}
