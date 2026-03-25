#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatProgress; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETLASTCOMPLETEDSTAGEPROGRESSID_OFFSET UNITYSDK_OFFSET(0x947FE10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETNEXTSTAGETOCOMPLETEPROGRESSID_OFFSET UNITYSDK_OFFSET(0x9480080)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETPROGRESSSTAGEINFOLIST_OFFSET UNITYSDK_OFFSET(0x947F100)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x947E900)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x947E8F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__GETPROGRESSBYCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0x947EFB0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatProgressData_TypeDefinitionIndex = 61918;

	class DiceCombatProgressData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatProgress* GetProgress()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatStageInfo*>* GetProgressStageInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatStageInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETPROGRESSSTAGEINFOLIST_OFFSET))(this);
		}

		::System::UInt32 GetLastCompletedStageProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETLASTCOMPLETEDSTAGEPROGRESSID_OFFSET))(this);
		}

		::System::UInt32 GetNextStageToCompleteProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETNEXTSTAGETOCOMPLETEPROGRESSID_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatProgress* _GetProgressByCampaignID(::System::UInt32 campaignID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatProgress*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__GETPROGRESSBYCAMPAIGNID_OFFSET))(this, campaignID);
		}
	};
}
