#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_6BD41257D23618B4_21;
namespace RPG::Client { class RogueTalentDataItem; }

#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB09A8B0)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0xB09AB30)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB09AA80)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB09A980)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0xB09A060)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB09A970)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentUnlockData_TypeDefinitionIndex = 62176;

	class RogueTalentUnlockData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTalentDataItem* _TalentDataItem; // 0x10
		::Class_1_6BD41257D23618B4_21* _Proto; // 0x18
		::System::UInt32 UnlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTalentUnlockData* Create(::RPG::Client::RogueTalentDataItem* talentDataItem, ::System::UInt32 unlockID)
		{
			return ((::RPG::Client::RogueTalentUnlockData*(*)(::RPG::Client::RogueTalentDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_CREATE_OFFSET))(talentDataItem, unlockID);
		}

		::System::Void UpdateSrvData(::Class_1_6BD41257D23618B4_21* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_UPDATESRVDATA_OFFSET))(this, proto);
		}

		::System::Boolean IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_ISFINISHED_OFFSET))(this);
		}

		::RPG::Client::TextID GetUnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETUNLOCKDESC_OFFSET))(this);
		}

		::System::UInt32 GetProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETPROGRESS_OFFSET))(this);
		}
	};
}
