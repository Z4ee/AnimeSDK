#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F5E1A0)
#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5E3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvertisingBoardConfigRow_TypeDefinitionIndex = 11485;

	class AdvertisingBoardConfigRow : public ::System::Object
	{
	public:
		::System::Single Interval; // 0x10
		::System::UInt32 AdvertisingBoardID; // 0x14
		::System::UInt32 VoiceID; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x1C
		::System::Boolean IsSwitch; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AdvertisingBoardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvertisingBoardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
