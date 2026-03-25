#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B5030)
#define RPG_GAMECORE_CLOCKPARKBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170B5890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffRow_TypeDefinitionIndex = 10463;

	class ClockParkBuffRow : public ::System::Object
	{
	public:
		::System::UInt32 Times; // 0x10
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x14
		::RPG::Client::TextID BuffTitle; // 0x18
		::RPG::Client::TextID BuffDesc; // 0x28
		::System::Int32 Param2; // 0x38
		::System::UInt32 BuffID; // 0x3C
		::System::Int32 Param3; // 0x40
		::System::Int32 Param1; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
