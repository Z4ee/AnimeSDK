#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingUnlockRow; }

#define RPG_CLIENT_SWORDTRAININGUNLOCKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB25DB20)
#define RPG_CLIENT_SWORDTRAININGUNLOCKDATA_GET_FINISHWAYID_OFFSET UNITYSDK_OFFSET(0xB2657C0)
#define RPG_CLIENT_SWORDTRAININGUNLOCKDATA_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB265220)
#define RPG_CLIENT_SWORDTRAININGUNLOCKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB265860)
#define RPG_CLIENT_SWORDTRAININGUNLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2657B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingUnlockData_TypeDefinitionIndex = 57187;

	class SwordTrainingUnlockData : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGUNLOCKDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingUnlockData* Create(::System::UInt32 unlockID)
		{
			return ((::RPG::Client::SwordTrainingUnlockData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGUNLOCKDATA_CREATE_OFFSET))(unlockID);
		}

		::System::UInt32 get_FinishWayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGUNLOCKDATA_GET_FINISHWAYID_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGUNLOCKDATA_GET_UNLOCKDESC_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingUnlockRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingUnlockRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGUNLOCKDATA_GET__ROW_OFFSET))(this);
		}
	};
}
