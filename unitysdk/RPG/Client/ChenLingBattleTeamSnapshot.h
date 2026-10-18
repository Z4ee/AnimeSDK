#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_DC16891F268AB0AE;
namespace RPG::Client::ChenLingBattle { class IEntity; }
namespace RPG::Client::ChenLingBattle { class Policy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHADJACENTBUILDINGSKILLS_OFFSET UNITYSDK_OFFSET(0xCA75860)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHPOLICYSKILLS_OFFSET UNITYSDK_OFFSET(0xCA75A60)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_CALCULATEFORMATIONRADIUSANDSURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0xCA71810)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA718E0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_FORMATIONRADIUS_OFFSET UNITYSDK_OFFSET(0xCA77410)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SOLDIERPROFILES_OFFSET UNITYSDK_OFFSET(0xCA77340)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCA773D0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0xCA77430)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0xCA77620)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TEAMOWNERNAME_OFFSET UNITYSDK_OFFSET(0xCA77450)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_TOTALSOLDIERCOUNT_OFFSET UNITYSDK_OFFSET(0xCA77490)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_WAVE_OFFSET UNITYSDK_OFFSET(0xCA773F0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_RECALGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xCA76240)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SETTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0xCA761F0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_FORMATIONRADIUS_OFFSET UNITYSDK_OFFSET(0xCA77420)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCA773E0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0xCA77440)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0xCA77630)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_WAVE_OFFSET UNITYSDK_OFFSET(0xCA77400)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_UPDATEINITPOSITION_OFFSET UNITYSDK_OFFSET(0xCA76BD0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEFORMATIONRADIUS_OFFSET UNITYSDK_OFFSET(0xCA76DA0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEMAXIMUMUNITSIZE_OFFSET UNITYSDK_OFFSET(0xCA77380)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATESURROUNDEDFORMATIONMAXIMUMNUM_OFFSET UNITYSDK_OFFSET(0xCA771F0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCA75570)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_2_OFFSET UNITYSDK_OFFSET(0xCA75EE0)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0xCA71460)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleTeamSnapshot_TypeDefinitionIndex = 61434;

	class ChenLingBattleTeamSnapshot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>* _SoldierProfiles; // 0x10
		::System::String* _TeamOwnerName; // 0x18
		::System::String* _TeamIconPath_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_DC16891F268AB0AE*>* _SoldierUIDToProfiler; // 0x28
		::System::Int32 _SurroundedFormationMaximumNum_k__BackingField; // 0x30
		::System::UInt32 _StageID_k__BackingField; // 0x34
		::System::UInt32 _Wave_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _FormationRadius_k__BackingField; // 0x40

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::IEntity*>* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::IEntity*>*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AttachAdjacentBuildingSkills(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHADJACENTBUILDINGSKILLS_OFFSET))(this, a1);
		}

		::System::Void AttachPolicySkills(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Policy*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_ATTACHPOLICYSKILLS_OFFSET))(this, a1);
		}

		::System::Void SetTeamIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SETTEAMICONPATH_OFFSET))(this, a1);
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

		::System::Void CalculateFormationRadiusAndSurroundedFormationMaximumNum(::RPG::Client::ChenLingBattleTeamSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_CALCULATEFORMATIONRADIUSANDSURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this, a1);
		}

		::System::Void _CalculateFormationRadius(::RPG::Client::ChenLingBattleTeamSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEFORMATIONRADIUS_OFFSET))(this, a1);
		}

		::System::Void _CalculateSurroundedFormationMaximumNum(::RPG::Client::ChenLingBattleTeamSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATESURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _CalculateMaximumUnitSize(::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT__CALCULATEMAXIMUMUNITSIZE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_WAVE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_FormationRadius()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_FORMATIONRADIUS_OFFSET))(this);
		}

		::System::Void set_FormationRadius(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_FORMATIONRADIUS_OFFSET))(this, a1);
		}

		::System::Int32 get_SurroundedFormationMaximumNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this);
		}

		::System::Void set_SurroundedFormationMaximumNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_SURROUNDEDFORMATIONMAXIMUMNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>* get_SoldierProfiles()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_DC16891F268AB0AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_GET_SOLDIERPROFILES_OFFSET))(this);
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

		::System::Void set_TeamIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT_SET_TEAMICONPATH_OFFSET))(this, a1);
		}
	};
}
