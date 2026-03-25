#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_B1C37B065CBC515F;
namespace RPG::Client::ChenLingBattle { class IEntity; }
namespace RPG::Client::ChenLingBattle { class Policy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHADJACENTBUILDINGSKILLS_OFFSET UNITYSDK_OFFSET(0x9354760)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHPOLICYSKILLS_OFFSET UNITYSDK_OFFSET(0x93549D0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_CALCULATEFORMATIONRADIUSANDSURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0x9355DD0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9355D50)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_FORMATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x93563E0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SOLDIERPROFILES_OFFSET UNITYSDK_OFFSET(0x9356420)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x93563A0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0x9356400)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x93565D0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TEAMOWNERNAME_OFFSET UNITYSDK_OFFSET(0x9356430)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TOTALSOLDIERCOUNT_OFFSET UNITYSDK_OFFSET(0x9356440)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x93563C0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_RECALGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x93553E0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SETTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x9355390)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_FORMATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x93563F0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x93563B0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0x9356410)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x93565E0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x93563D0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_UPDATEINITPOSITION_OFFSET UNITYSDK_OFFSET(0x9355BA0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEFORMATIONRADIUS_OFFSET UNITYSDK_OFFSET(0x9355E30)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEMAXIMUMUNITSIZE_OFFSET UNITYSDK_OFFSET(0x9356350)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATESURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0x93560F0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x93544C0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9355030)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x9354410)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleTeamSnapshot_TypeDefinitionIndex = 49836;

	class ChenLingBattleTeamSnapshot : public ::System::Object
	{
	public:
		::System::String* _TeamOwnerName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B1C37B065CBC515F*>* _SoldierUIDToProfiler; // 0x18
		::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>* _SoldierProfiles; // 0x20
		::System::String* _TeamIconPath_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _FormationRadius_k__BackingField; // 0x30
		::System::UInt32 _Wave_k__BackingField; // 0x38
		::System::UInt32 _StageID_k__BackingField; // 0x3C
		::System::Int32 _SurroundedFormationMaximumNum_k__BackingField; // 0x40

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>* soldierProfiles, ::System::String* teamOwnerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_OFFSET))(this, soldierProfiles, teamOwnerName);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::IEntity*>* entities, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType teamType, ::System::String* teamOwnerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::IEntity*>*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_1_OFFSET))(this, entities, teamType, teamOwnerName);
		}

		::System::Void _ctor_2(::System::UInt32 stageID, ::System::UInt32 waveID, ::System::String* teamOwnerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_2_OFFSET))(this, stageID, waveID, teamOwnerName);
		}

		::System::Void AttachAdjacentBuildingSkills(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* adjacentBuildingSkillMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHADJACENTBUILDINGSKILLS_OFFSET))(this, adjacentBuildingSkillMap);
		}

		::System::Void AttachPolicySkills(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* policies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHPOLICYSKILLS_OFFSET))(this, policies);
		}

		::System::Void SetTeamIconPath(::System::String* teamIconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SETTEAMICONPATH_OFFSET))(this, teamIconPath);
		}

		::System::Void ReCalGridIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_RECALGRIDINDEX_OFFSET))(this);
		}

		::System::Void UpdateInitPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_UPDATEINITPOSITION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_DISPOSE_OFFSET))(this);
		}

		::System::Void CalculateFormationRadiusAndSurroundedFormationMaximumNum(::RPG::Client::ChenLingBattleTeamSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_CALCULATEFORMATIONRADIUSANDSURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this, other);
		}

		::System::Void _CalculateFormationRadius(::RPG::Client::ChenLingBattleTeamSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEFORMATIONRADIUS_OFFSET))(this, other);
		}

		::System::Void _CalculateSurroundedFormationMaximumNum(::RPG::Client::ChenLingBattleTeamSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATESURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this, other);
		}

		::RPG::GameCore::FixPoint _CalculateMaximumUnitSize(::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>* soldierProfiles)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEMAXIMUMUNITSIZE_OFFSET))(this, soldierProfiles);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_STAGEID_OFFSET))(this, value);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_WAVE_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_FormationRadius()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_FORMATIONRADIUS_OFFSET))(this);
		}

		::System::Void set_FormationRadius(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_FORMATIONRADIUS_OFFSET))(this, value);
		}

		::System::Int32 get_SurroundedFormationMaximumNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this);
		}

		::System::Void set_SurroundedFormationMaximumNum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>* get_SoldierProfiles()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SOLDIERPROFILES_OFFSET))(this);
		}

		::System::String* get_TeamOwnerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TEAMOWNERNAME_OFFSET))(this);
		}

		::System::UInt32 get_TotalSoldierCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TOTALSOLDIERCOUNT_OFFSET))(this);
		}

		::System::String* get_TeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TEAMICONPATH_OFFSET))(this);
		}

		::System::Void set_TeamIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_TEAMICONPATH_OFFSET))(this, value);
		}
	};
}
