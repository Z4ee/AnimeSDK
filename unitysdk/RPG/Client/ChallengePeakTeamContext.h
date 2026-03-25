#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_598;
class Class_1_99BD961747420BEB_6;
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBossFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakBossStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakNormalFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakNormalStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakTeam; }
namespace RPG::Client { class ChallengePeakTeamApplier; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_APPLYTEAM_OFFSET UNITYSDK_OFFSET(0x92F3540)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0x92F2A10)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMISEMPTY_OFFSET UNITYSDK_OFFSET(0x92F2810)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0x92F2C10)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0x92F31D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0x92F3320)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x92F1BB0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_FILLLINEUPCONFLICTCHALLENGEPEAKSTO_OFFSET UNITYSDK_OFFSET(0x92F20E0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETALLAVATARSOFNORMALLEVEL_OFFSET UNITYSDK_OFFSET(0x92F36F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETBOSSTEAM_OFFSET UNITYSDK_OFFSET(0x92F36B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAMBYID_OFFSET UNITYSDK_OFFSET(0x92F2E10)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAM_OFFSET UNITYSDK_OFFSET(0x92F2770)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B90)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B70)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0x92F1AD0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFTEAMSLOTS_OFFSET UNITYSDK_OFFSET(0x92F1B20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B50)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B30)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETBOSSTEAM_OFFSET UNITYSDK_OFFSET(0x92F3150)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0x92F2FC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1BA0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B80)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B60)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92F1B40)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKEQUIPMENTSOFSNAPSHOTAREEQUIPPEDBYTEAM_OFFSET UNITYSDK_OFFSET(0x92F3750)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKHAVEEQUIPMENTCONFLICT_OFFSET UNITYSDK_OFFSET(0x92F23B0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CREATENORMALAVATARSOURCE_OFFSET UNITYSDK_OFFSET(0x92F1D40)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x92F1C40)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0x92F1DB0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0x92F1F30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext_TypeDefinitionIndex = 51283;

	class ChallengePeakTeamContext : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_598* _NormalAvatarSource; // 0x10
		::Class_0_16E4307DCC419505_598* _BossAvatarSource; // 0x18
		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* _BossFriendRecommendation_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTeam*>* _NormalTeams; // 0x28
		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* _NormalFriendRecommendation_k__BackingField; // 0x30
		::RPG::Client::ChallengePeakTeam* _BossTeam; // 0x38
		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* _NormalStatisticRecommendation_k__BackingField; // 0x40
		::RPG::Client::ChallengePeakGroup* _PeakGroup; // 0x48
		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* _BossStatisticRecommendation_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* peakGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CTOR_OFFSET))(this, peakGroup);
		}

		::System::Int32 get_CountOfNormalTeams()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFNORMALTEAMS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTeamSlots()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFTEAMSLOTS_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* get_NormalStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_NormalStatisticRecommendation(::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALSTATISTICRECOMMENDATION_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* get_NormalFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_NormalFriendRecommendation(::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALFRIENDRECOMMENDATION_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* get_BossStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_BossStatisticRecommendation(::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSSTATISTICRECOMMENDATION_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* get_BossFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_BossFriendRecommendation(::RPG::Client::ChallengePeakBossFriendLineupRecommendation* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBossFriendLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSFRIENDRECOMMENDATION_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakTeamContext* Create(::RPG::Client::ChallengePeakGroup* peakGroup)
		{
			return ((::RPG::Client::ChallengePeakTeamContext*(*)(::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CREATE_OFFSET))(peakGroup);
		}

		::System::Void FillLineupConflictChallengePeaksTo(::RPG::Client::ChallengePeak* source, ::System::Collections::Generic::ICollection_1<::RPG::Client::ChallengePeak*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::System::Collections::Generic::ICollection_1<::RPG::Client::ChallengePeak*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_FILLLINEUPCONFLICTCHALLENGEPEAKSTO_OFFSET))(this, source, buffer);
		}

		::RPG::Client::ChallengePeakTeam* GetNormalTeam(::System::Int32 teamIndex)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAM_OFFSET))(this, teamIndex);
		}

		::System::Boolean CheckAnyNormalTeamIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMISEMPTY_OFFSET))(this);
		}

		::System::Boolean CheckAnyNormalTeamHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMHASCHANGED_OFFSET))(this);
		}

		::System::Boolean CheckAnyNormalTeamNeedForceSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMNEEDFORCESAVE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakTeam* GetNormalTeamByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAMBYID_OFFSET))(this, id);
		}

		::System::Void ResetNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETNORMALTEAMS_OFFSET))(this);
		}

		::System::Void ResetBossTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETBOSSTEAM_OFFSET))(this);
		}

		::System::Void ClearNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARNORMALTEAMS_OFFSET))(this);
		}

		::System::Void ClearRecommendations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARRECOMMENDATIONS_OFFSET))(this);
		}

		::System::Void ApplyTeam(::RPG::Client::ChallengePeakTeamApplier* applier)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakTeamApplier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_APPLYTEAM_OFFSET))(this, applier);
		}

		::RPG::Client::ChallengePeakTeam* GetBossTeam()
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETBOSSTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAllAvatarsOfNormalLevel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETALLAVATARSOFNORMALLEVEL_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_598* _CreateNormalAvatarSource()
		{
			return ((::Class_0_16E4307DCC419505_598*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CREATENORMALAVATARSOURCE_OFFSET))(this);
		}

		::System::Void _InitNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITNORMALTEAMS_OFFSET))(this);
		}

		::System::Boolean _CheckHaveEquipmentConflict(::RPG::Client::ChallengePeak* source, ::RPG::Client::ChallengePeak* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKHAVEEQUIPMENTCONFLICT_OFFSET))(this, source, target);
		}

		::System::Boolean _CheckEquipmentsOfSnapshotAreEquippedByTeam(::Class_1_99BD961747420BEB_6* snapshot, ::System::Collections::Generic::HashSet_1<::System::UInt32>* teamAvatarIDs)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_6*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKEQUIPMENTSOFSNAPSHOTAREEQUIPPEDBYTEAM_OFFSET))(this, snapshot, teamAvatarIDs);
		}

		::System::Void _InitRecommendations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITRECOMMENDATIONS_OFFSET))(this);
		}
	};
}
