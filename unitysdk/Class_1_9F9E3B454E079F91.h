#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueAdventureRoomRow; }
namespace RPG::GameCore { class RogueArcadeConfigRow; }
namespace RPG::GameCore { class RogueDLCAdventureRoomRow; }
namespace RPG::GameCore { class RogueMagicAdventureRoomRow; }
namespace RPG::GameCore { class RogueTournAdventureRoomRow; }

#define CLASS_1_9F9E3B454E079F91_GET_ADVENTURETYPE_OFFSET UNITYSDK_OFFSET(0x8DB2CD0)
#define CLASS_1_9F9E3B454E079F91_GET_PARAMGROUPID_OFFSET UNITYSDK_OFFSET(0x8DB2CF0)
#define CLASS_1_9F9E3B454E079F91_SET_ADVENTURETYPE_OFFSET UNITYSDK_OFFSET(0x8DB2CE0)
#define CLASS_1_9F9E3B454E079F91_SET_PARAMGROUPID_OFFSET UNITYSDK_OFFSET(0x8DB2D00)
#define CLASS_1_9F9E3B454E079F91__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8DB2D30)
#define CLASS_1_9F9E3B454E079F91__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8DB2D50)
#define CLASS_1_9F9E3B454E079F91__CTOR_3_OFFSET UNITYSDK_OFFSET(0x8DB2D70)
#define CLASS_1_9F9E3B454E079F91__CTOR_4_OFFSET UNITYSDK_OFFSET(0x8DB2DA0)
#define CLASS_1_9F9E3B454E079F91__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB2D10)

inline static constexpr unsigned int Class_1_9F9E3B454E079F91_TypeDefinitionIndex = 54676;

class Class_1_9F9E3B454E079F91 : public ::System::Object
{
public:
	::System::UInt32 _ParamGroupID_k__BackingField; // 0x10
	::RPG::GameCore::RogueAdventureGameplayType _AdventureType_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::GameCore::RogueDLCAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::RPG::GameCore::RogueAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::RogueTournAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::RPG::GameCore::RogueArcadeConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueArcadeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91__CTOR_3_OFFSET))(this, a1);
	}

	::System::Void _ctor_4(::RPG::GameCore::RogueMagicAdventureRoomRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicAdventureRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91__CTOR_4_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueAdventureGameplayType get_AdventureType()
	{
		return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91_GET_ADVENTURETYPE_OFFSET))(this);
	}

	::System::Void set_AdventureType(::RPG::GameCore::RogueAdventureGameplayType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91_SET_ADVENTURETYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_ParamGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91_GET_PARAMGROUPID_OFFSET))(this);
	}

	::System::Void set_ParamGroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F9E3B454E079F91_SET_PARAMGROUPID_OFFSET))(this, value);
	}
};
