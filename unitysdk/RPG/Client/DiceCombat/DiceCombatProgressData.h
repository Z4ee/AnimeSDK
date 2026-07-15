#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatProgress; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETLASTCOMPLETEDSTAGEPROGRESSID_OFFSET UNITYSDK_OFFSET(0x1A41D120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETNEXTSTAGETOCOMPLETEPROGRESSID_OFFSET UNITYSDK_OFFSET(0x1A41D2E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETPROGRESSSTAGEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A41C4B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A41BE50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A412A50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__GETPROGRESSBYCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0x1A41C380)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatProgressData_TypeDefinitionIndex = 72165;

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

		::RPG::Client::DiceCombat::DiceCombatProgress* _GetProgressByCampaignID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatProgress*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATPROGRESSDATA__GETPROGRESSBYCAMPAIGNID_OFFSET))(this, a1);
		}
	};
}
