#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueAdventureRoomRow; }
namespace RPG::GameCore { class RogueArcadeConfigRow; }
namespace RPG::GameCore { class RogueDLCAdventureRoomRow; }
namespace RPG::GameCore { class RogueMagicAdventureRoomRow; }
namespace RPG::GameCore { class RogueTournAdventureRoomRow; }

#define CLASS_1_3BF8AFA5ED5F68D3_GET_ADVENTURETYPE_OFFSET UNITYSDK_OFFSET(0x17A4CED0)
#define CLASS_1_3BF8AFA5ED5F68D3_GET_PARAMGROUPID_OFFSET UNITYSDK_OFFSET(0x17A4CEF0)
#define CLASS_1_3BF8AFA5ED5F68D3_SET_ADVENTURETYPE_OFFSET UNITYSDK_OFFSET(0x17A4CEE0)
#define CLASS_1_3BF8AFA5ED5F68D3_SET_PARAMGROUPID_OFFSET UNITYSDK_OFFSET(0x17A4CF00)
#define CLASS_1_3BF8AFA5ED5F68D3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A35410)
#define CLASS_1_3BF8AFA5ED5F68D3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A35430)
#define CLASS_1_3BF8AFA5ED5F68D3__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17A35460)
#define CLASS_1_3BF8AFA5ED5F68D3__CTOR_4_OFFSET UNITYSDK_OFFSET(0x17A35480)
#define CLASS_1_3BF8AFA5ED5F68D3__CTOR_OFFSET UNITYSDK_OFFSET(0x17A353F0)

inline static constexpr unsigned int Class_1_3BF8AFA5ED5F68D3_TypeDefinitionIndex = 64164;

class Class_1_3BF8AFA5ED5F68D3 : public ::System::Object
{
public:
	::System::UInt32 _ParamGroupID_k__BackingField; // 0x10
	::RPG::GameCore::RogueAdventureGameplayType _AdventureType_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::GameCore::RogueDLCAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::RPG::GameCore::RogueAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::RogueTournAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::RPG::GameCore::RogueArcadeConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueArcadeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3__CTOR_3_OFFSET))(this, a1);
	}

	::System::Void _ctor_4(::RPG::GameCore::RogueMagicAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3__CTOR_4_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueAdventureGameplayType get_AdventureType()
	{
		return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3_GET_ADVENTURETYPE_OFFSET))(this);
	}

	::System::Void set_AdventureType(::RPG::GameCore::RogueAdventureGameplayType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3_SET_ADVENTURETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_ParamGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3_GET_PARAMGROUPID_OFFSET))(this);
	}

	::System::Void set_ParamGroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3BF8AFA5ED5F68D3_SET_PARAMGROUPID_OFFSET))(this, a1);
	}
};
