#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_589E588DE5457488.h"

class Class_1_BF43A923389D144C;

#define RPG_GAMECORE_PVECHARACTERSTT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE6A410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVECharacterStt_TypeDefinitionIndex = 53834;

	class PVECharacterStt : public ::Class_2_589E588DE5457488
	{
	public:
		::Class_1_BF43A923389D144C* avatarBattleInfo; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVECHARACTERSTT__CTOR_OFFSET))(this);
		}
	};
}
