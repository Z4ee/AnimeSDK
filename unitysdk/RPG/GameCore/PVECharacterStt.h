#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_589E588DE5457488.h"

class Class_1_C9DFE5EE7107C629_1;

#define RPG_GAMECORE_PVECHARACTERSTT__CTOR_OFFSET UNITYSDK_OFFSET(0xE6B7770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVECharacterStt_TypeDefinitionIndex = 57779;

	class PVECharacterStt : public ::Class_2_589E588DE5457488
	{
	public:
		::Class_1_C9DFE5EE7107C629_1* avatarBattleInfo; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVECHARACTERSTT__CTOR_OFFSET))(this);
		}
	};
}
