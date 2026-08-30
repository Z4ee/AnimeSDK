#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_38457923AA4F98BB_1;
class Class_1_76F6F6F3F603AF89;
class Class_1_9EE357109ED696DE;
namespace RPG::Client { class ExpeditionBattleAvatarDamageViewModel; }
namespace RPG::Client { class ExpeditionBattleMapFunViewModel; }
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace RPG::Client { class ExpeditionBattleTeamMember; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_AVATARDAMAGES_OFFSET UNITYSDK_OFFSET(0xCF015F0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_COMPLETIONROUND_OFFSET UNITYSDK_OFFSET(0xCF01580)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_FUNS_OFFSET UNITYSDK_OFFSET(0xCF015D0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_HASCHALLENGED_OFFSET UNITYSDK_OFFSET(0xCF01630)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_HASHISTORYBESTREPORT_OFFSET UNITYSDK_OFFSET(0xCF01690)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xCF01450)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xCF01400)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_LEVELDEADAVATARS_OFFSET UNITYSDK_OFFSET(0xCF01560)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xCF01610)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xCF013B0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xCF01500)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ROUTEINDEX_OFFSET UNITYSDK_OFFSET(0xCF014F0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ROUTE_OFFSET UNITYSDK_OFFSET(0xCF01550)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xCF014A0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_ISAVATARCOMBATPOWERPOOR_OFFSET UNITYSDK_OFFSET(0xCF02130)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_AVATARDAMAGES_OFFSET UNITYSDK_OFFSET(0xCF01600)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_FUNS_OFFSET UNITYSDK_OFFSET(0xCF015E0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_LEVELDEADAVATARS_OFFSET UNITYSDK_OFFSET(0xCF01570)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xCF01620)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_TRYGETRECORDIMPROVEMENT_OFFSET UNITYSDK_OFFSET(0xCF02190)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF027B0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF016D0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__INITAVATARDAMAGES_OFFSET UNITYSDK_OFFSET(0xCF01B80)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__INITFUNS_OFFSET UNITYSDK_OFFSET(0xCF01980)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__INITLEVELDEADAVATARS_OFFSET UNITYSDK_OFFSET(0xCF01750)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__SETNOIMPROVEMENT_OFFSET UNITYSDK_OFFSET(0xCF022A0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__TRYGETPERCENTAGEIMPROVEMENT_OFFSET UNITYSDK_OFFSET(0xCF02490)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__TRYGETSTARIMPROVEMENT_OFFSET UNITYSDK_OFFSET(0xCF02320)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__TRYGETTURNIMPROVEMENT_OFFSET UNITYSDK_OFFSET(0xCF02600)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRouteRecordViewModel_TypeDefinitionIndex = 64014;

	class ExpeditionBattleRouteRecordViewModel : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__PercentageImprovementTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRouteRecordViewModel_TypeDefinitionIndex)->GetStaticField(0x151B0);
		}
		static ::RPG::Client::TextID* StaticGet__StarImprovementTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRouteRecordViewModel_TypeDefinitionIndex)->GetStaticField(0x151C0);
		}
		static ::RPG::Client::TextID* StaticGet__TurnImprovementTextID()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRouteRecordViewModel_TypeDefinitionIndex)->GetStaticField(0x151D0);
		}
		::Class_1_76F6F6F3F603AF89* _RouteRecord; // 0x10
		::Class_1_9EE357109ED696DE* _ViewModelFactory; // 0x18
		::RPG::Client::ExpeditionBattleRoute* _Route_k__BackingField; // 0x20
		::System::String* _MainMonsterIconPath_k__BackingField; // 0x28
		::Class_1_38457923AA4F98BB_1* _EndService; // 0x30
		::Class_1_76F6F6F3F603AF89* _HistoryBestRouteRecord; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleAvatarDamageViewModel*>* _AvatarDamages_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapFunViewModel*>* _Funs_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _LevelDeadAvatars_k__BackingField; // 0x50
		::System::Int32 _RouteIndex_k__BackingField; // 0x58
		::System::Boolean _HasHistoryBestReport; // 0x5C

		::System::Void _ctor(::Class_1_76F6F6F3F603AF89* a1, ::Class_1_76F6F6F3F603AF89* a2, ::Class_1_38457923AA4F98BB_1* a3, ::System::Boolean a4, ::System::Int32 a5, ::RPG::Client::ExpeditionBattleRoute* a6, ::System::String* a7, ::Class_1_9EE357109ED696DE* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76F6F6F3F603AF89*, ::Class_1_76F6F6F3F603AF89*, ::Class_1_38457923AA4F98BB_1*, ::System::Boolean, ::System::Int32, ::RPG::Client::ExpeditionBattleRoute*, ::System::String*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__CCTOR_OFFSET))();
		}

		::System::UInt32 get_PassedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_PASSEDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_LastLevelPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_LASTLEVELPERCENT_OFFSET))(this);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ISNEWRECORD_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleTeam* get_Team()
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_TEAM_OFFSET))(this);
		}

		::System::Int32 get_RouteIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ROUTEINDEX_OFFSET))(this);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ROUTEID_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRoute* get_Route()
		{
			return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_ROUTE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_LevelDeadAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_LEVELDEADAVATARS_OFFSET))(this);
		}

		::System::Void set_LevelDeadAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_LEVELDEADAVATARS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompletionRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_COMPLETIONROUND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapFunViewModel*>* get_Funs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapFunViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_FUNS_OFFSET))(this);
		}

		::System::Void set_Funs(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapFunViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapFunViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_FUNS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleAvatarDamageViewModel*>* get_AvatarDamages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleAvatarDamageViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_AVATARDAMAGES_OFFSET))(this);
		}

		::System::Void set_AvatarDamages(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleAvatarDamageViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleAvatarDamageViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_AVATARDAMAGES_OFFSET))(this, a1);
		}

		::System::String* get_MainMonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET))(this);
		}

		::System::Void set_MainMonsterIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_HasChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_HASCHALLENGED_OFFSET))(this);
		}

		::System::Boolean get_HasHistoryBestReport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_GET_HASHISTORYBESTREPORT_OFFSET))(this);
		}

		::System::Void _InitLevelDeadAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__INITLEVELDEADAVATARS_OFFSET))(this);
		}

		::System::Void _InitFuns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__INITFUNS_OFFSET))(this);
		}

		::System::Void _InitAvatarDamages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__INITAVATARDAMAGES_OFFSET))(this);
		}

		::System::Boolean IsAvatarCombatPowerPoor(::RPG::Client::ExpeditionBattleTeamMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeamMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_ISAVATARCOMBATPOWERPOOR_OFFSET))(this, a1);
		}

		::System::Boolean TryGetRecordImprovement(::RPG::Client::TextID& a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL_TRYGETRECORDIMPROVEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void _SetNoImprovement(::RPG::Client::TextID& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__SETNOIMPROVEMENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetStarImprovement(::RPG::Client::TextID& a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__TRYGETSTARIMPROVEMENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetPercentageImprovement(::RPG::Client::TextID& a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__TRYGETPERCENTAGEIMPROVEMENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetTurnImprovement(::RPG::Client::TextID& a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTERECORDVIEWMODEL__TRYGETTURNIMPROVEMENT_OFFSET))(this, a1, a2);
		}
	};
}
