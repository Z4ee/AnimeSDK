#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SCORERANKCONFIG_GETRANKSTR_OFFSET UNITYSDK_OFFSET(0x86620)
#define RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SCORERANKCONFIG_GETRANK_OFFSET UNITYSDK_OFFSET(0x865A0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleBoard_ScoreRankConfig_TypeDefinitionIndex = 56146;

	struct alignas(4) WolfBroGunPlayPuzzleBoard_ScoreRankConfig
	{
		::System::Single S; // 0x10
		::System::Single A; // 0x14
		::System::Single B; // 0x18
		::System::Single C; // 0x1C
		::System::Single D; // 0x20

		::System::Int32 GetRank(::System::Single score)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SCORERANKCONFIG_GETRANK_OFFSET))(this, score);
		}

		::System::String* GetRankStr(::System::Single score)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYPUZZLEBOARD_SCORERANKCONFIG_GETRANKSTR_OFFSET))(this, score);
		}
	};
}
