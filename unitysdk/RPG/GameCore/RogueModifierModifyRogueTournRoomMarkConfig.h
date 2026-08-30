#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_METHOD_3_30180ED9B0E10928_OFFSET UNITYSDK_OFFSET(0x1EEFB530)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_METHOD_3_F70602D1193A1E64_OFFSET UNITYSDK_OFFSET(0x1EEFB580)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFB570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRogueTournRoomMarkConfig_TypeDefinitionIndex = 17563;

	class RogueModifierModifyRogueTournRoomMarkConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_30180ED9B0E10928(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_METHOD_3_30180ED9B0E10928_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F70602D1193A1E64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueTournRoomMarkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUETOURNROOMMARKCONFIG_METHOD_3_F70602D1193A1E64_OFFSET))(a1, a2);
		}
	};
}
