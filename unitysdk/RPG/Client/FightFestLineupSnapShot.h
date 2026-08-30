#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTFESTLINEUPSNAPSHOT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xD04FE30)
#define RPG_CLIENT_FIGHTFESTLINEUPSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xD04FE90)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestLineupSnapShot_TypeDefinitionIndex = 64256;

	class FightFestLineupSnapShot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SelectedAvatarIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* SelectedSkillIDs; // 0x18
		::System::UInt32 RaceID; // 0x20
		::System::UInt32 EventID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTLINEUPSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTLINEUPSNAPSHOT_GET_ISVALID_OFFSET))(this);
		}
	};
}
