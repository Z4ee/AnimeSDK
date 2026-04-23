#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FC7850)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC78A0)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyPuzzleData_ChenLingGameBoyStatistics_TypeDefinitionIndex = 69013;

	class ChenLingGameBoyPuzzleData_ChenLingGameBoyStatistics : public ::System::Object
	{
	public:
		::System::String* SerialNumber; // 0x10
		::System::String* TotalActionCount; // 0x18
		::System::UInt32 DeadCount; // 0x20
		::System::Single TimeStart; // 0x24
		::System::UInt32 ResetCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYPUZZLEDATA_CHENLINGGAMEBOYSTATISTICS_CLEAR_OFFSET))(this);
		}
	};
}
