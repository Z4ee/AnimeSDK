#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestCoachSkillRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_EXTRADESC_OFFSET UNITYSDK_OFFSET(0xB9C6D20)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xB9C6D00)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xB9C6BE0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xB9C6D80)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0xB9C6DA0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xB9C6C20)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_MAZEBUFF_OFFSET UNITYSDK_OFFSET(0xB9C6C60)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB9C6CD0)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xB9C6C40)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB9C6C00)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB9C6D50)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xB9C6B20)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xB9C6D90)
#define RPG_CLIENT_FIGHTFESTCOACHSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C6B10)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestCoachSkill_TypeDefinitionIndex = 59971;

	class FightFestCoachSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestCoachSkillRow* _Row; // 0x10
		::System::Boolean _IsLocked_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::FightFestCoachSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestCoachSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetUnlockState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_SETUNLOCKSTATE_OFFSET))(this, a1);
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

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSeenUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCOACHSKILL_GET_ISSEENUNLOCK_OFFSET))(this);
		}
	};
}
