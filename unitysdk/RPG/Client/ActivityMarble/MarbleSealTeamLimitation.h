#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleSealTeamSelection; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_GETEMPTYLIMITATION_OFFSET UNITYSDK_OFFSET(0x9C17170)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALBANED_OFFSET UNITYSDK_OFFSET(0x9C04970)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALMUSTINTEAM_OFFSET UNITYSDK_OFFSET(0x9C17230)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISTEAMVALID_OFFSET UNITYSDK_OFFSET(0x9C17320)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETBANSEALIDLIST_OFFSET UNITYSDK_OFFSET(0x9C08550)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETMUSTINTEAMSEALIDLIST_OFFSET UNITYSDK_OFFSET(0x9C171E0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9C08540)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleSealTeamLimitation_TypeDefinitionIndex = 68935;

	class MarbleSealTeamLimitation : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* _MustInTeamSealIDList; // 0x10
		::System::Collections::Generic::IList_1<::System::UInt32>* _BanSealIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityMarble::MarbleSealTeamLimitation* GetEmptyLimitation()
		{
			return ((::RPG::Client::ActivityMarble::MarbleSealTeamLimitation*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_GETEMPTYLIMITATION_OFFSET))();
		}

		::System::Void SetBanSealIDList(::System::Collections::Generic::IList_1<::System::UInt32>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETBANSEALIDLIST_OFFSET))(this, list);
		}

		::System::Void SetMustInTeamSealIDList(::System::Collections::Generic::IList_1<::System::UInt32>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_SETMUSTINTEAMSEALIDLIST_OFFSET))(this, list);
		}

		::System::Boolean IsSealBaned(::System::UInt32 sealID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALBANED_OFFSET))(this, sealID);
		}

		::System::Boolean IsSealMustInTeam(::System::UInt32 sealID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISSEALMUSTINTEAM_OFFSET))(this, sealID);
		}

		::System::Boolean IsTeamValid(::RPG::Client::ActivityMarble::MarbleSealTeamSelection* team)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealTeamSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLESEALTEAMLIMITATION_ISTEAMVALID_OFFSET))(this, team);
		}
	};
}
