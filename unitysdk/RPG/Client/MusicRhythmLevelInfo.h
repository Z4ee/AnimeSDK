#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MUSICRHYTHMLEVELINFO_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x153B10)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevelInfo_TypeDefinitionIndex = 61906;

	struct alignas(8) MusicRhythmLevelInfo
	{
		::System::UInt32 Level; // 0x10
		::System::Boolean IsUnlock; // 0x14
		::System::UInt32 NowStarNum; // 0x18
		::System::UInt32 AllStarNum; // 0x1C
		::Il2CppArray<::System::UInt32>* RewardIDs; // 0x20
		::RPG::Client::TextID Title; // 0x28
		::RPG::Client::TextID StarDesc; // 0x38

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVELINFO_GET_ISFINISH_OFFSET))(this);
		}
	};
}
