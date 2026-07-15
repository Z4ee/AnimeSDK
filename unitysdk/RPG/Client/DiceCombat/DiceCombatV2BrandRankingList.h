#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BrandRankingEntry; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A4369B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_PLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x1A436E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_SETUP_OFFSET UNITYSDK_OFFSET(0x1A436B50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A437040)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__COMPAREENTRIESBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A437410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__COMPAREENTRIESBYPERCENTTHENINDEX_OFFSET UNITYSDK_OFFSET(0x1A4375A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A437670)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__UPDATEPERCENTS_OFFSET UNITYSDK_OFFSET(0x1A4370F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__UPDATERANKING_OFFSET UNITYSDK_OFFSET(0x1A437280)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandRankingList_TypeDefinitionIndex = 72291;

	class DiceCombatV2BrandRankingList : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _Duration; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*>* _Entries; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::System::Int32>* _InitialIndices; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*>* _RankedEntries; // 0x30
		::System::Int32 _MaxPercent; // 0x38
		::System::Boolean _IsPlaying; // 0x3C
		::System::Collections::Generic::List_1<::System::Int32>* _TargetPercents; // 0x40
		::System::Single _PercentChangeSpeed; // 0x48
		::System::Single _ElapsedSincePlay; // 0x4C
		::System::Action* _OnPlayEnd; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_AWAKE_OFFSET))(this);
		}

		::System::Void Setup(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Void PlayChange(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_PLAYCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdatePercents(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__UPDATEPERCENTS_OFFSET))(this, a1);
		}

		::System::Void _UpdateRanking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__UPDATERANKING_OFFSET))(this);
		}

		::System::Int32 _CompareEntriesByIndex(::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry* a1, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__COMPAREENTRIESBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CompareEntriesByPercentThenIndex(::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry* a1, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*, ::RPG::Client::DiceCombat::DiceCombatV2BrandRankingEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGLIST__COMPAREENTRIESBYPERCENTTHENINDEX_OFFSET))(this, a1, a2);
		}
	};
}
