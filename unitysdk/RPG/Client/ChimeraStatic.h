#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraPageState.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetType.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_1;
class Class_2_C01BA129C3E40259;
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

#define RPG_CLIENT_CHIMERASTATIC_CREATECONTEXT_OFFSET UNITYSDK_OFFSET(0x1B5FA8D0)
#define RPG_CLIENT_CHIMERASTATIC_ENTERCHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1B5FAAC0)
#define RPG_CLIENT_CHIMERASTATIC_FETCHCHIMERAUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B60E180)
#define RPG_CLIENT_CHIMERASTATIC_GETBATTLEFAILLEADERICON_OFFSET UNITYSDK_OFFSET(0x1B60F970)
#define RPG_CLIENT_CHIMERASTATIC_GETBATTLEWINLEADERICON_OFFSET UNITYSDK_OFFSET(0x1B60F720)
#define RPG_CLIENT_CHIMERASTATIC_GETCATCOOKIEICONSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x1B60EFE0)
#define RPG_CLIENT_CHIMERASTATIC_GETGALLERYSEENCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1B60E7C0)
#define RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNTINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B60F1C0)
#define RPG_CLIENT_CHIMERASTATIC_GETGOODWORKCNT_OFFSET UNITYSDK_OFFSET(0x1B60F0C0)
#define RPG_CLIENT_CHIMERASTATIC_GETMAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B60ECE0)
#define RPG_CLIENT_CHIMERASTATIC_GETMAXRECOMMENDEDPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0x1B60EDC0)
#define RPG_CLIENT_CHIMERASTATIC_GETNORMALMODEFINALROUNDID_OFFSET UNITYSDK_OFFSET(0x1B601730)
#define RPG_CLIENT_CHIMERASTATIC_GETOVERRIDENGALLERYLEADERICON_OFFSET UNITYSDK_OFFSET(0x1B60F4C0)
#define RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNTINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B60F3C0)
#define RPG_CLIENT_CHIMERASTATIC_GETPERFECTWORKCNT_OFFSET UNITYSDK_OFFSET(0x1B60F2C0)
#define RPG_CLIENT_CHIMERASTATIC_GETRANKMAXSLIDERVALUEARRAY_OFFSET UNITYSDK_OFFSET(0x1B603E80)
#define RPG_CLIENT_CHIMERASTATIC_GETRESIDENTREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B60FBC0)
#define RPG_CLIENT_CHIMERASTATIC_GETSTOCKTUTORIALID_OFFSET UNITYSDK_OFFSET(0x1B60FDB0)
#define RPG_CLIENT_CHIMERASTATIC_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1B609560)
#define RPG_CLIENT_CHIMERASTATIC_GETTOPRANKFILLOFFSET_OFFSET UNITYSDK_OFFSET(0x1B60EED0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALACCELERATIONROUNDID_OFFSET UNITYSDK_OFFSET(0x1B60E9B0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALARRANGEROUNDID_OFFSET UNITYSDK_OFFSET(0x1B5FFDA0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDSECONDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0x1B60EAC0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALFINALROUNDTHIRDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0x1B60EBD0)
#define RPG_CLIENT_CHIMERASTATIC_GETTUTORIALMISSIONROUNDID_OFFSET UNITYSDK_OFFSET(0x1B5FF9C0)
#define RPG_CLIENT_CHIMERASTATIC_GETVALIDGO_OFFSET UNITYSDK_OFFSET(0x1B60AEF0)
#define RPG_CLIENT_CHIMERASTATIC_GETVALIDPROXIES_OFFSET UNITYSDK_OFFSET(0x1B60B180)
#define RPG_CLIENT_CHIMERASTATIC_GET_ABILITYOWNERDYNAMICSTR_OFFSET UNITYSDK_OFFSET(0x1B609440)
#define RPG_CLIENT_CHIMERASTATIC_GET_ABILITYTARGETDYNAMICSTR_OFFSET UNITYSDK_OFFSET(0x1B609320)
#define RPG_CLIENT_CHIMERASTATIC_GET_CHIMERATIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B5F6110)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISACCELERATE_OFFSET UNITYSDK_OFFSET(0x1B5FB380)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0x1B5F92A0)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISAVATARSELECTSEEN_OFFSET UNITYSDK_OFFSET(0x1B60E900)
#define RPG_CLIENT_CHIMERASTATIC_GET_ISLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x1B60E850)
#define RPG_CLIENT_CHIMERASTATIC_GET_LASTFAILEDROUNDID_OFFSET UNITYSDK_OFFSET(0x1B60E700)
#define RPG_CLIENT_CHIMERASTATIC_GET_LASTPAGESTATE_OFFSET UNITYSDK_OFFSET(0x1B60E210)
#define RPG_CLIENT_CHIMERASTATIC_HASNEWCONTENTTOPLAY_OFFSET UNITYSDK_OFFSET(0x1B6113A0)
#define RPG_CLIENT_CHIMERASTATIC_HASRESIDENTREWARDSTOCLAIM_OFFSET UNITYSDK_OFFSET(0x1B611160)
#define RPG_CLIENT_CHIMERASTATIC_ISALLRESIDENTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1B611280)
#define RPG_CLIENT_CHIMERASTATIC_ISINARRANGETUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B60C8D0)
#define RPG_CLIENT_CHIMERASTATIC_ISINMISSIONTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B60C770)
#define RPG_CLIENT_CHIMERASTATIC_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B5FE880)
#define RPG_CLIENT_CHIMERASTATIC_ISSHOWBATTLERESULTPAGE_OFFSET UNITYSDK_OFFSET(0x1B607210)
#define RPG_CLIENT_CHIMERASTATIC_LOADARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x1B60E2D0)
#define RPG_CLIENT_CHIMERASTATIC_RESETARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x1B5FFEB0)
#define RPG_CLIENT_CHIMERASTATIC_RESETPREFS_OFFSET UNITYSDK_OFFSET(0x1B5FFAD0)
#define RPG_CLIENT_CHIMERASTATIC_SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x1B5FFFA0)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISACCELERATE_OFFSET UNITYSDK_OFFSET(0x1B60CAA0)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISAUTOBATTLE_OFFSET UNITYSDK_OFFSET(0x1B60CA30)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISAVATARSELECTSEEN_OFFSET UNITYSDK_OFFSET(0x1B60E950)
#define RPG_CLIENT_CHIMERASTATIC_SET_ISLIMITREWARDSEEN_OFFSET UNITYSDK_OFFSET(0x1B60E8A0)
#define RPG_CLIENT_CHIMERASTATIC_SET_LASTFAILEDROUNDID_OFFSET UNITYSDK_OFFSET(0x1B6084E0)
#define RPG_CLIENT_CHIMERASTATIC_SET_LASTPAGESTATE_OFFSET UNITYSDK_OFFSET(0x1B600940)
#define RPG_CLIENT_CHIMERASTATIC_STARTPAUSEGAMEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1B60FEA0)
#define RPG_CLIENT_CHIMERASTATIC_STOPCHIMERASOUNDS_OFFSET UNITYSDK_OFFSET(0x1B6108D0)
#define RPG_CLIENT_CHIMERASTATIC_TRYENTERAUDIOENV_OFFSET UNITYSDK_OFFSET(0x1B5FAB20)
#define RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERACONTEXTS_OFFSET UNITYSDK_OFFSET(0x1B60E0E0)
#define RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERAGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B608690)
#define RPG_CLIENT_CHIMERASTATIC_TRYLEAVEAUDIOENV_OFFSET UNITYSDK_OFFSET(0x1B5FB740)
#define RPG_CLIENT_CHIMERASTATIC_TRYLEAVECHIMERAENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1B5FB5D0)
#define RPG_CLIENT_CHIMERASTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6113E0)
#define RPG_CLIENT_CHIMERASTATIC__CREATEABILITYQUEUE_OFFSET UNITYSDK_OFFSET(0x1B60DFE0)
#define RPG_CLIENT_CHIMERASTATIC__CREATECHIMERAENTITIES_OFFSET UNITYSDK_OFFSET(0x1B60CDB0)
#define RPG_CLIENT_CHIMERASTATIC__CREATEENTITIESFORCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1B60CB00)
#define RPG_CLIENT_CHIMERASTATIC__CREATEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1B60CC00)
#define RPG_CLIENT_CHIMERASTATIC__CREATELOCK_OFFSET UNITYSDK_OFFSET(0x1B60CD10)
#define RPG_CLIENT_CHIMERASTATIC__CREATEWORK_OFFSET UNITYSDK_OFFSET(0x1B60DDB0)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIXFORPROXIES_OFFSET UNITYSDK_OFFSET(0x1B60B210)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIX_OFFSET UNITYSDK_OFFSET(0x1B6095F0)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATETARGETFORPROXIES_OFFSET UNITYSDK_OFFSET(0x1B60BF80)
#define RPG_CLIENT_CHIMERASTATIC__EVALUATETARGET_OFFSET UNITYSDK_OFFSET(0x1B60A890)
#define RPG_CLIENT_CHIMERASTATIC__PLAYBGM_OFFSET UNITYSDK_OFFSET(0x1B6100B0)
#define RPG_CLIENT_CHIMERASTATIC__PREPARESCENEENV_OFFSET UNITYSDK_OFFSET(0x1B610A00)
#define RPG_CLIENT_CHIMERASTATIC__RESETSCENEENV_OFFSET UNITYSDK_OFFSET(0x1B610DC0)
#define RPG_CLIENT_CHIMERASTATIC__STOPBGM_OFFSET UNITYSDK_OFFSET(0x1B610330)
#define RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEIN_OFFSET UNITYSDK_OFFSET(0x1B6105B0)
#define RPG_CLIENT_CHIMERASTATIC__SWITCHAUDIOSTATEOUT_OFFSET UNITYSDK_OFFSET(0x1B610740)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraStatic_TypeDefinitionIndex = 63479;

	class ChimeraStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AbilityTargetStrKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x56A90);
		}
		static ::RPG::GameCore::DynamicString** StaticGet__AbilityTargetDynamicStr()
		{
			return (::RPG::GameCore::DynamicString**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x56A98);
		}
		static ::RPG::GameCore::DynamicString** StaticGet__AbilityOwnerDynamicStr()
		{
			return (::RPG::GameCore::DynamicString**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x56AA0);
		}
		static ::System::String** StaticGet__ChimeraHoyoTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x56AA8);
		}
		static ::System::String** StaticGet_AbilityOwnerStrKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x56AB0);
		}
		static ::System::Int32* StaticGet__InChimeraEnvironmentCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x11B10);
		}
		static ::System::Int32* StaticGet__AudioEnvCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraStatic_TypeDefinitionIndex)->GetStaticField(0x11B14);
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

		static ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* GetTarget(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::GameCore::ChimeraBattleTargetPrefixType a2, ::RPG::GameCore::ChimeraBattleTargetType a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETTARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* _EvaluatePrefix(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::GameCore::ChimeraBattleTargetPrefixType a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::GameCore::ChimeraBattleTargetPrefixType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIX_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* _EvaluateTarget(::Class_1_3B1EA953A4067E26_1* a1, ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>* a2, ::RPG::GameCore::ChimeraBattleTargetType a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*(*)(::Class_1_3B1EA953A4067E26_1*, ::System::Collections::Generic::List_1<::Class_2_C01BA129C3E40259*>*, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATETARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetValidGO(::RPG::GameCore::ChimeraBattleTargetPrefixType a1, ::RPG::GameCore::ChimeraBattleTargetType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETVALIDGO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* GetValidProxies(::RPG::GameCore::ChimeraBattleTargetPrefixType a1, ::RPG::GameCore::ChimeraBattleTargetType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETVALIDPROXIES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* _EvaluatePrefixForProxies(::RPG::GameCore::ChimeraBattleTargetPrefixType a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::RPG::GameCore::ChimeraBattleTargetPrefixType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATEPREFIXFORPROXIES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* _evaluateTargetForProxies(::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>* a1, ::RPG::GameCore::ChimeraBattleTargetType a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::BaseChimeraViewProxy*>*, ::RPG::GameCore::ChimeraBattleTargetType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__EVALUATETARGETFORPROXIES_OFFSET))(a1, a2, a3, a4);
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

		static ::System::Void set_IsAutoBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISAUTOBATTLE_OFFSET))(a1);
		}

		static ::System::Boolean get_IsAccelerate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISACCELERATE_OFFSET))();
		}

		static ::System::Void set_IsAccelerate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISACCELERATE_OFFSET))(a1);
		}

		static ::Class_1_3B1EA953A4067E26_1* CreateContext()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_CREATECONTEXT_OFFSET))();
		}

		static ::System::Void _CreateEntitiesForContexts(::Class_1_3B1EA953A4067E26_1* a1)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEENTITIESFORCONTEXTS_OFFSET))(a1);
		}

		static ::System::Void _CreateChimeraEntities(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::Client::ChimeraDoingRoundData* a2)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATECHIMERAENTITIES_OFFSET))(a1, a2);
		}

		static ::System::Void _CreateWork(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::Client::ChimeraDoingRoundData* a2)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEWORK_OFFSET))(a1, a2);
		}

		static ::System::Void _CreateGameState(::Class_1_3B1EA953A4067E26_1* a1, ::RPG::Client::ChimeraDoingRoundData* a2)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*, ::RPG::Client::ChimeraDoingRoundData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEGAMESTATE_OFFSET))(a1, a2);
		}

		static ::System::Void _CreateLock(::Class_1_3B1EA953A4067E26_1* a1)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATELOCK_OFFSET))(a1);
		}

		static ::System::Void _CreateAbilityQueue(::Class_1_3B1EA953A4067E26_1* a1)
		{
			return ((::System::Void(*)(::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC__CREATEABILITYQUEUE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraGameInstance* TryGetChimeraGameInstance()
		{
			return ((::RPG::Client::ChimeraGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERAGAMEINSTANCE_OFFSET))();
		}

		static ::Class_1_3B1EA953A4067E26_1* TryGetChimeraContexts()
		{
			return ((::Class_1_3B1EA953A4067E26_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_TRYGETCHIMERACONTEXTS_OFFSET))();
		}

		static ::System::String* FetchChimeraUniqueName(::RPG::Client::ChimeraData* a1)
		{
			return ((::System::String*(*)(::RPG::Client::ChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_FETCHCHIMERAUNIQUENAME_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraPageState get_LastPageState()
		{
			return ((::RPG::Client::ChimeraPageState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_LASTPAGESTATE_OFFSET))();
		}

		static ::System::Void set_LastPageState(::RPG::Client::ChimeraPageState a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChimeraPageState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_LASTPAGESTATE_OFFSET))(a1);
		}

		static ::System::Void ResetArrangement()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_RESETARRANGEMENT_OFFSET))();
		}

		static ::System::Void SaveArrangement(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SAVEARRANGEMENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean LoadArrangement(::System::UInt32& a1, ::System::UInt32& a2, ::Il2CppArray<::System::UInt32>*& a3, ::Il2CppArray<::System::UInt32>*& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32&, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_LOADARRANGEMENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 get_LastFailedRoundID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_LASTFAILEDROUNDID_OFFSET))();
		}

		static ::System::Void set_LastFailedRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_LASTFAILEDROUNDID_OFFSET))(a1);
		}

		static ::RPG::Client::PrefHashSet_1<::System::UInt32>* GetGallerySeenChimeras()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETGALLERYSEENCHIMERAS_OFFSET))();
		}

		static ::System::Boolean get_IsLimitRewardSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISLIMITREWARDSEEN_OFFSET))();
		}

		static ::System::Void set_IsLimitRewardSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISLIMITREWARDSEEN_OFFSET))(a1);
		}

		static ::System::Boolean get_IsAvatarSelectSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GET_ISAVATARSELECTSEEN_OFFSET))();
		}

		static ::System::Void set_IsAvatarSelectSeen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_SET_ISAVATARSELECTSEEN_OFFSET))(a1);
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

		static ::System::String* GetOverridenGalleryLeaderIcon(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETOVERRIDENGALLERYLEADERICON_OFFSET))(a1);
		}

		static ::System::String* GetBattleWinLeaderIcon(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETBATTLEWINLEADERICON_OFFSET))(a1);
		}

		static ::System::String* GetBattleFailLeaderIcon(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETBATTLEFAILLEADERICON_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::UInt32>* GetResidentRewardQuestIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETRESIDENTREWARDQUESTIDS_OFFSET))();
		}

		static ::System::UInt32 GetStockTutorialID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_GETSTOCKTUTORIALID_OFFSET))();
		}

		static ::System::Void StartPauseGamePerformance(::RPG::GameCore::ChimeraAbilityProgressBase* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraAbilityProgressBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASTATIC_STARTPAUSEGAMEPERFORMANCE_OFFSET))(a1);
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
