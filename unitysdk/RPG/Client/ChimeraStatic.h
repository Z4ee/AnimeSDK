#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraPageState.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_2_7AF1D57CA4301272;
namespace RPG::Client { class BaseChimeraViewProxy; }
namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraDoingRoundData; }
namespace RPG::Client { class ChimeraGameInstance; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHIMERASTATIC_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x93BF490)
#define RPG_CLIENT_CHIMERASTATIC_ENTERCHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x93BF680)
#define RPG_CLIENT_CHIMERASTATIC_FETCHCHIMERAUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x93D2130)
#define RPG_CLIENT_CHIMERASTATIC_GETBATTLEFAILLEADERICON_OFFSET UNITYSDK_OFFSET(0x93D3820)
#define RPG_CLIENT_CHIMERASTATIC_GETBATTLEWINLEADERICON_OFFSET UNITYSDK_OFFSET(0x93D35D0)
#define RPG_CLIENT_CHIMERASTATIC_GETCATCOOKIEICONSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x93D2EB0)
#define RPG_CLIENT_CHIMERASTATIC_GETGALLERYSEENCHIMERAS_OFFSET UNITYSDK_OFFSET(0x93D2690)
#define RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNTINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x93D3090)
#define RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNT_OFFSET UNITYSDK_OFFSET(0x93D2F90)
#define RPG_CLIENT_CHIMERASTATIC_GETMAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x93D2BB0)
#define RPG_CLIENT_CHIMERASTATIC_GETMAXRECOMMENDEDPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0x93D2C90)
#define RPG_CLIENT_CHIMERASTATIC_GETNORMALMODEFINALROUNDID_OFFSET UNITYSDK_OFFSET(0x93C67B0)
#define RPG_CLIENT_CHIMERASTATIC_GETOVERRIDENGALLERYLEADERICON_OFFSET UNITYSDK_OFFSET(0x93D3390)
#define RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNTINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x93D3290)
#define RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNT_OFFSET UNITYSDK_OFFSET(0x93D3190)
#define RPG_CLIENT_CHIMERASTATIC_GETRANKMAXSLIDERVALUEARRAY_OFFSET UNITYSDK_OFFSET(0x93C8EB0)
#define RPG_CLIENT_CHIMERASTATIC_GETRESIDENTREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x93D3A70)
#define RPG_CLIENT_CHIMERASTATIC_GETSTOCKTUTORIALID_OFFSET UNITYSDK_OFFSET(0x93D3C30)
#define RPG_CLIENT_CHIMERASTATIC_GETTARGET_OFFSET UNITYSDK_OFFSET(0x93CE090)
#define RPG_CLIENT_CHIMERASTATIC_GETTOPRANKFILLOFFSET_OFFSET UNITYSDK_OFFSET(0x93D2DA0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALACCELERATIONROUNDID_OFFSET UNITYSDK_OFFSET(0x93D2880)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALARRANGEROUNDID_OFFSET UNITYSDK_OFFSET(0x93C4D20)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDSECONDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0x93D2990)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDTHIRDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0x93D2AA0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALMISSIONROUNDID_OFFSET UNITYSDK_OFFSET(0x93C4940)
#define RPG_CLIENT_CHIMERASTATIC_GETVALIDGO_OFFSET UNITYSDK_OFFSET(0x93CF640)
#define RPG_CLIENT_CHIMERASTATIC_GETVALIDPROXIES_OFFSET UNITYSDK_OFFSET(0x93CF880)
#define RPG_CLIENT_CHIMERASTATIC_GET_ABILITYOWNERDYNAMICSTR_OFFSET UNITYSDK_OFFSET(0x93CDF70)
#define RPG_CLIENT_CHIMERASTATIC_GET_ABILITYTARGETDYNAMICSTR_OFFSET UNITYSDK_OFFSET(0x93CDE50)
#define RPG_CLIENT_CHIMERASTATIC_GET_CHIMERATIMESCALE_OFFSET UNITYSDK_OFFSET(0x93BAF20)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISACCELERATE_OFFSET UNITYSDK_OFFSET(0x93BFFD0)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0x93BDE00)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISAVATARSELECTSEEN_OFFSET UNITYSDK_OFFSET(0x93D27D0)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x93D2720)
#define RPG_CLIENT_CHIMERASTATIC_GET_LASTFAILEDROUNDID_OFFSET UNITYSDK_OFFSET(0x93D2640)
#define RPG_CLIENT_CHIMERASTATIC_GET_LASTPAGESTATE_OFFSET UNITYSDK_OFFSET(0x93D2250)
#define RPG_CLIENT_CHIMERASTATIC_HASNEWCONTENTTOPLAY_OFFSET UNITYSDK_OFFSET(0x93D50F0)
#define RPG_CLIENT_CHIMERASTATIC_HASRESIDENTREWARDSTOCLAIM_OFFSET UNITYSDK_OFFSET(0x93D4E90)
#define RPG_CLIENT_CHIMERASTATIC_ISALLRESIDENTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x93D4FC0)
#define RPG_CLIENT_CHIMERASTATIC_ISINARRANGETUTORIAL_OFFSET UNITYSDK_OFFSET(0x93D0AB0)
#define RPG_CLIENT_CHIMERASTATIC_ISINMISSIONTUTORIAL_OFFSET UNITYSDK_OFFSET(0x93D0950)
#define RPG_CLIENT_CHIMERASTATIC_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x93C3A40)
#define RPG_CLIENT_CHIMERASTATIC_ISSHOWBATTLERESULTPAGE_OFFSET UNITYSDK_OFFSET(0x93CBC50)
#define RPG_CLIENT_CHIMERASTATIC_LOADARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x93D22A0)
#define RPG_CLIENT_CHIMERASTATIC_RESETARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x93C4E30)
#define RPG_CLIENT_CHIMERASTATIC_RESETPREFS_OFFSET UNITYSDK_OFFSET(0x93C4A50)
#define RPG_CLIENT_CHIMERASTATIC_SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x93C4F40)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISACCELERATE_OFFSET UNITYSDK_OFFSET(0x93D0C80)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0x93D0C10)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISAVATARSELECTSEEN_OFFSET UNITYSDK_OFFSET(0x93D2820)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x93D2770)
#define RPG_CLIENT_CHIMERASTATIC_SET_LASTFAILEDROUNDID_OFFSET UNITYSDK_OFFSET(0x93CCE90)
#define RPG_CLIENT_CHIMERASTATIC_SET_LASTPAGESTATE_OFFSET UNITYSDK_OFFSET(0x93C5940)
#define RPG_CLIENT_CHIMERASTATIC_STARTPAUSEGAMEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x93D3D20)
#define RPG_CLIENT_CHIMERASTATIC_STOPCHIMERASOUNDS_OFFSET UNITYSDK_OFFSET(0x93D4600)
#define RPG_CLIENT_CHIMERASTATIC_TRYENTERAUDIOENV_OFFSET UNITYSDK_OFFSET(0x93BF6E0)
#define RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERACONTEXTS_OFFSET UNITYSDK_OFFSET(0x93D2090)
#define RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERAGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x93CD040)
#define RPG_CLIENT_CHIMERASTATIC_TRYLEAVEAUDIOENV_OFFSET UNITYSDK_OFFSET(0x93C03A0)
#define RPG_CLIENT_CHIMERASTATIC_TRYLEAVECHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x93C0230)
#define RPG_CLIENT_CHIMERASTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x93D5130)
#define RPG_CLIENT_CHIMERASTATIC__CREATEABILITYQUEUE_OFFSET UNITYSDK_OFFSET(0x93D1F90)
#define RPG_CLIENT_CHIMERASTATIC__CREATECHIMERAENTITIES_OFFSET UNITYSDK_OFFSET(0x93D0F90)
#define RPG_CLIENT_CHIMERASTATIC__CREATEENTITIESFORCONTEXTS_OFFSET UNITYSDK_OFFSET(0x93D0CE0)
#define RPG_CLIENT_CHIMERASTATIC__CREATEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x93D0DE0)
#define RPG_CLIENT_CHIMERASTATIC__CREATELOCK_OFFSET UNITYSDK_OFFSET(0x93D0EF0)
#define RPG_CLIENT_CHIMERASTATIC__CREATEWORK_OFFSET UNITYSDK_OFFSET(0x93D1D50)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIXFORPROXIES_OFFSET UNITYSDK_OFFSET(0x93CF910)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIX_OFFSET UNITYSDK_OFFSET(0x93CE120)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATETARGETFORPROXIES_OFFSET UNITYSDK_OFFSET(0x93D0280)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATETARGET_OFFSET UNITYSDK_OFFSET(0x93CF100)
#define RPG_CLIENT_CHIMERASTATIC__PLAYBGM_OFFSET UNITYSDK_OFFSET(0x93D3F00)
#define RPG_CLIENT_CHIMERASTATIC__PREPARESCENEENV_OFFSET UNITYSDK_OFFSET(0x93D4730)
#define RPG_CLIENT_CHIMERASTATIC__RESETSCENEENV_OFFSET UNITYSDK_OFFSET(0x93D4AF0)
#define RPG_CLIENT_CHIMERASTATIC__STOPBGM_OFFSET UNITYSDK_OFFSET(0x93D4100)
#define RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEIN_OFFSET UNITYSDK_OFFSET(0x93D4300)
#define RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEOUT_OFFSET UNITYSDK_OFFSET(0x93D4480)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraStatic_TypeDefinitionIndex = 51487;

	class ChimeraStatic : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DynamicString** StaticGet__AbilityTargetDynamicStr()
		{
			return (::RPG::GameCore::DynamicString**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x47460);
		}
		static ::System::String** StaticGet_AbilityOwnerStrKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x47468);
		}
		static ::System::String** StaticGet__ChimeraHoyoTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x47470);
		}
		static ::System::String** StaticGet_AbilityTargetStrKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x47478);
		}
		static ::RPG::GameCore::DynamicString** StaticGet__AbilityOwnerDynamicStr()
		{
			return (::RPG::GameCore::DynamicString**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x47480);
		}
		static ::System::Int32* StaticGet__InChimeraEnvironmentCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		static ::System::Int32* StaticGet__AudioEnvCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x128D4);
		}
		// static const ::System::UInt32 _ArrangementPrefEncodingVersion = 0xFFFFFFFE; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicString* get_AbilityTargetDynamicStr()
		{
			return ((::RPG::GameCore::DynamicString*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ABILITYTARGETDYNAMICSTR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicString* get_AbilityOwnerDynamicStr()
		{
			return ((::RPG::GameCore::DynamicString*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ABILITYOWNERDYNAMICSTR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>* GetTarget(::Class_1_3B1EA953A4067E26_1* contexts, ::RPG::GameCore::ChimeraBattleTargetPrefixType prefix, ::RPG::GameCore::ChimeraBattleTargetType target, ::System::UInt32 fromChimeraID)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTARGET_OFFSET))(contexts, prefix, target, fromChimeraID);
		}

		static ::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>* _EvaluatePrefix(::Class_1_3B1EA953A4067E26_1* contexts, ::RPG::GameCore::ChimeraBattleTargetPrefixType prefix, ::System::UInt32 abilityOwnerID)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::GameCore::ChimeraBattleTargetPrefixType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIX_OFFSET))(contexts, prefix, abilityOwnerID);
		}

		static ::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>* _EvaluateTarget(::Class_1_3B1EA953A4067E26_1* contexts, ::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>* candidates, ::RPG::GameCore::ChimeraBattleTargetType targetType, ::System::UInt32 abilityOwnerID)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::System::Collections::Generic::List_1<::Class_2_7AF1D57CA4301272*>*, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATETARGET_OFFSET))(contexts, candidates, targetType, abilityOwnerID);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetValidGO(::RPG::GameCore::ChimeraBattleTargetPrefixType prefix, ::RPG::GameCore::ChimeraBattleTargetType target, ::System::UInt32 fromChimeraID, ::System::UInt32 triggerTimingChimeraID)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETVALIDGO_OFFSET))(prefix, target, fromChimeraID, triggerTimingChimeraID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* GetValidProxies(::RPG::GameCore::ChimeraBattleTargetPrefixType prefix, ::RPG::GameCore::ChimeraBattleTargetType target, ::System::UInt32 fromChimeraID, ::System::UInt32 triggerTimingChimeraID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETVALIDPROXIES_OFFSET))(prefix, target, fromChimeraID, triggerTimingChimeraID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* _EvaluatePrefixForProxies(::RPG::GameCore::ChimeraBattleTargetPrefixType prefix, ::System::UInt32 abilityOwnerID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIXFORPROXIES_OFFSET))(prefix, abilityOwnerID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* _evaluateTargetForProxies(::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* candidates, ::RPG::GameCore::ChimeraBattleTargetType targetType, ::System::UInt32 abilityOwnerID, ::System::UInt32 triggerTimingChimeraID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATETARGETFORPROXIES_OFFSET))(candidates, targetType, abilityOwnerID, triggerTimingChimeraID);
		}

		static ::System::Boolean IsInTutorial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISINTUTORIAL_OFFSET))();
		}

		static ::System::Boolean IsInArrangeTutorial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISINARRANGETUTORIAL_OFFSET))();
		}

		static ::System::Boolean IsInMissionTutorial()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISINMISSIONTUTORIAL_OFFSET))();
		}

		static ::System::Boolean IsShowBattleResultPage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISSHOWBATTLERESULTPAGE_OFFSET))();
		}

		static ::System::Boolean get_IsAutoBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISAUTOBATTLE_OFFSET))();
		}

		static ::System::Void set_IsAutoBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISAUTOBATTLE_OFFSET))(value);
		}

		static ::System::Boolean get_IsAccelerate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISACCELERATE_OFFSET))();
		}

		static ::System::Void set_IsAccelerate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISACCELERATE_OFFSET))(value);
		}

		static ::Class_1_3B1EA953A4067E26_1* CreateContext()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_CREATECONTEXT_OFFSET))();
		}

		static ::System::Void _CreateEntitiesForContexts(::Class_1_3B1EA953A4067E26_1* contexts)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEENTITIESFORCONTEXTS_OFFSET))(contexts);
		}

		static ::System::Void _CreateChimeraEntities(::Class_1_3B1EA953A4067E26_1* contexts, ::RPG::Client::ChimeraDoingRoundData* curRoundData)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATECHIMERAENTITIES_OFFSET))(contexts, curRoundData);
		}

		static ::System::Void _CreateWork(::Class_1_3B1EA953A4067E26_1* contexts, ::RPG::Client::ChimeraDoingRoundData* doingRound)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEWORK_OFFSET))(contexts, doingRound);
		}

		static ::System::Void _CreateGameState(::Class_1_3B1EA953A4067E26_1* contexts, ::RPG::Client::ChimeraDoingRoundData* curRoundData)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEGAMESTATE_OFFSET))(contexts, curRoundData);
		}

		static ::System::Void _CreateLock(::Class_1_3B1EA953A4067E26_1* contexts)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATELOCK_OFFSET))(contexts);
		}

		static ::System::Void _CreateAbilityQueue(::Class_1_3B1EA953A4067E26_1* contexts)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEABILITYQUEUE_OFFSET))(contexts);
		}

		static ::RPG::Client::ChimeraGameInstance* TryGetChimeraGameInstance()
		{
			return ((::RPG::Client::ChimeraGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERAGAMEINSTANCE_OFFSET))();
		}

		static ::Class_1_3B1EA953A4067E26_1* TryGetChimeraContexts()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERACONTEXTS_OFFSET))();
		}

		static ::System::String* FetchChimeraUniqueName(::RPG::Client::ChimeraData* chimeraRef)
		{
			return ((::System::String*(*)(::RPG::Client::ChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_FETCHCHIMERAUNIQUENAME_OFFSET))(chimeraRef);
		}

		static ::RPG::Client::ChimeraPageState get_LastPageState()
		{
			return ((::RPG::Client::ChimeraPageState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_LASTPAGESTATE_OFFSET))();
		}

		static ::System::Void set_LastPageState(::RPG::Client::ChimeraPageState value)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraPageState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_LASTPAGESTATE_OFFSET))(value);
		}

		static ::System::Void ResetArrangement()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_RESETARRANGEMENT_OFFSET))();
		}

		static ::System::Void SaveArrangement(::System::UInt32 roundID, ::System::UInt32 leader, ::Il2CppArray<::System::UInt32>* common, ::Il2CppArray<::System::UInt32>* stage)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SAVEARRANGEMENT_OFFSET))(roundID, leader, common, stage);
		}

		static ::System::Boolean LoadArrangement(::System::UInt32& roundID, ::System::UInt32& leader, ::Il2CppArray<::System::UInt32>*& common, ::Il2CppArray<::System::UInt32>*& stage)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_LOADARRANGEMENT_OFFSET))(roundID, leader, common, stage);
		}

		static ::System::UInt32 get_LastFailedRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_LASTFAILEDROUNDID_OFFSET))();
		}

		static ::System::Void set_LastFailedRoundID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_LASTFAILEDROUNDID_OFFSET))(value);
		}

		static ::RPG::Client::PrefHashSet_1<::System::UInt32>* GetGallerySeenChimeras()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGALLERYSEENCHIMERAS_OFFSET))();
		}

		static ::System::Boolean get_IsLimitRewardSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISLIMITREWARDSEEN_OFFSET))();
		}

		static ::System::Void set_IsLimitRewardSeen(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISLIMITREWARDSEEN_OFFSET))(value);
		}

		static ::System::Boolean get_IsAvatarSelectSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISAVATARSELECTSEEN_OFFSET))();
		}

		static ::System::Void set_IsAvatarSelectSeen(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISAVATARSELECTSEEN_OFFSET))(value);
		}

		static ::System::Void ResetPrefs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_RESETPREFS_OFFSET))();
		}

		static ::System::UInt32 GetTutorialMissionRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALMISSIONROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialArrangeRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALARRANGEROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialAccelerationRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALACCELERATIONROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetNormalModeFinalRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETNORMALMODEFINALROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialFinalRoundSecondSubRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDSECONDSUBROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetTutorialFinalRoundThirdSubRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDTHIRDSUBROUNDID_OFFSET))();
		}

		static ::System::UInt32 GetMaxMemberCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETMAXMEMBERCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetMaxRecommendedPresetCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETMAXRECOMMENDEDPRESETCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetTopRankFillOffset()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTOPRANKFILLOFFSET_OFFSET))();
		}

		static ::System::String* GetCatCookieIconSpritePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETCATCOOKIEICONSPRITEPATH_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::DynamicValue*>* GetRankMaxSliderValueArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicValue*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETRANKMAXSLIDERVALUEARRAY_OFFSET))();
		}

		static ::System::UInt32 GetGoodWorkCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNT_OFFSET))();
		}

		static ::System::UInt32 GetGoodWorkCntInTutorial()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNTINTUTORIAL_OFFSET))();
		}

		static ::System::UInt32 GetPerfectWorkCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNT_OFFSET))();
		}

		static ::System::UInt32 GetPerfectWorkCntInTutorial()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNTINTUTORIAL_OFFSET))();
		}

		static ::System::String* GetOverridenGalleryLeaderIcon(::System::UInt32 leaderID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETOVERRIDENGALLERYLEADERICON_OFFSET))(leaderID);
		}

		static ::System::String* GetBattleWinLeaderIcon(::System::UInt32 leaderID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETBATTLEWINLEADERICON_OFFSET))(leaderID);
		}

		static ::System::String* GetBattleFailLeaderIcon(::System::UInt32 leaderID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETBATTLEFAILLEADERICON_OFFSET))(leaderID);
		}

		static ::Il2CppArray<::System::UInt32>* GetResidentRewardQuestIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETRESIDENTREWARDQUESTIDS_OFFSET))();
		}

		static ::System::UInt32 GetStockTutorialID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETSTOCKTUTORIALID_OFFSET))();
		}

		static ::System::Void StartPauseGamePerformance(::RPG::GameCore::ChimeraAbilityProgressBase* start)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraAbilityProgressBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_STARTPAUSEGAMEPERFORMANCE_OFFSET))(start);
		}

		static ::System::Single get_ChimeraTimeScale()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_CHIMERATIMESCALE_OFFSET))();
		}

		static ::System::Void _PlayBGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__PLAYBGM_OFFSET))();
		}

		static ::System::Void _StopBGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__STOPBGM_OFFSET))();
		}

		static ::System::Void _SwitchAudioStateIn()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEIN_OFFSET))();
		}

		static ::System::Void _SwitchAudioStateOut()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEOUT_OFFSET))();
		}

		static ::System::Void StopChimeraSounds()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_STOPCHIMERASOUNDS_OFFSET))();
		}

		static ::System::Void EnterChimeraEnvironment()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ENTERCHIMERAENVIRONMENT_OFFSET))();
		}

		static ::System::Void TryEnterAudioEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYENTERAUDIOENV_OFFSET))();
		}

		static ::System::Void TryLeaveAudioEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYLEAVEAUDIOENV_OFFSET))();
		}

		static ::System::Void TryLeaveChimeraEnvironment()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYLEAVECHIMERAENVIRONMENT_OFFSET))();
		}

		static ::System::Void _PrepareSceneEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__PREPARESCENEENV_OFFSET))();
		}

		static ::System::Void _ResetSceneEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__RESETSCENEENV_OFFSET))();
		}

		static ::System::Boolean HasResidentRewardsToClaim()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_HASRESIDENTREWARDSTOCLAIM_OFFSET))();
		}

		static ::System::Boolean IsAllResidentRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_ISALLRESIDENTREWARDTAKEN_OFFSET))();
		}

		static ::System::Boolean HasNewContentToPlay()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_HASNEWCONTENTTOPLAY_OFFSET))();
		}
	};
}
