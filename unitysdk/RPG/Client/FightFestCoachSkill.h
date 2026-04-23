#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestCoachSkillRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_EXTRADESC_OFFSET UNITYSDK_OFFSET(0xA373390)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xA373370)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xA373250)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xA3733F0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0xA373410)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xA373290)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0xA3732D0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA373340)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA3732B0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA373270)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xA3733C0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xA373190)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xA373400)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xA373180)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestCoachSkill_TypeDefinitionIndex = 59041;

	class FightFestCoachSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestCoachSkillRow* _Row; // 0x10
		::System::Boolean _IsLocked_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::FightFestCoachSkillRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestCoachSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL__CTOR_OFFSET))(this, row);
		}

		::System::Void SetUnlockState(::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_SETUNLOCKSTATE_OFFSET))(this, isUnlock);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::FightFestCoachType get_Type()
		{
			return ((::RPG::GameCore::FightFestCoachType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_SORTWEIGHT_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_MazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_MAZEBUFF_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_FIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ExtraDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_EXTRADESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_SET_ISLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsSeenUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISSEENUNLOCK_OFFSET))(this);
		}
	};
}
