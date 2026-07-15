#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE65F60)
#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE661A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvertisingBoardConfigRow_TypeDefinitionIndex = 12112;

	class AdvertisingBoardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VoiceID; // 0x10
		::System::Single Interval; // 0x14
		::System::UInt32 AdvertisingBoardID; // 0x18
		::System::Boolean IsSwitch; // 0x1C
		::System::Boolean IsPlayerInvolved; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvertisingBoardConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvertisingBoardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
