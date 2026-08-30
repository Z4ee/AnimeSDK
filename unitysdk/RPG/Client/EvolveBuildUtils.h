#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildUtils___c__DisplayClass15_0.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RaccoonStateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_997BC107281E8D79;
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_EVOLVEBUILDUTILS_COUNTUNLOCKEDSLOTNUM_OFFSET UNITYSDK_OFFSET(0x1B887560)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETBATTLEEXPSTEP_OFFSET UNITYSDK_OFFSET(0x1B886D10)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETCOLLECTIONIDLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B886B10)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEID_OFFSET UNITYSDK_OFFSET(0x1B886A80)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_1_OFFSET UNITYSDK_OFFSET(0x1B8880C0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_OFFSET UNITYSDK_OFFSET(0x1B887E30)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARLVTOFORGE_OFFSET UNITYSDK_OFFSET(0x1B8868E0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASCFROMFORGEROW_OFFSET UNITYSDK_OFFSET(0x1B886660)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASC_OFFSET UNITYSDK_OFFSET(0x1B888050)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATA_OFFSET UNITYSDK_OFFSET(0x1B8856D0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETRACCOONSTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B886CD0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETRESONANCEGEARIDINPACKET_OFFSET UNITYSDK_OFFSET(0x1B885B50)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDEVOLVEBUILDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1B884590)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1B8850C0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATASC_OFFSET UNITYSDK_OFFSET(0x1B8861B0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATA_OFFSET UNITYSDK_OFFSET(0x1B885BB0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0x1B8859A0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEWITHACCESSORIES_OFFSET UNITYSDK_OFFSET(0x1B885560)
#define RPG_CLIENT_EVOLVEBUILDUTILS_ISGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B8867D0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_OPENFAKEGEARSELECTPAGE_OFFSET UNITYSDK_OFFSET(0x1B888120)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SETMAZEBUFFDESC_OFFSET UNITYSDK_OFFSET(0x1B8876B0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFO2GEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1B887240)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFOS2GEAREQUIPINFOS_OFFSET UNITYSDK_OFFSET(0x1B887380)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SORTACCESSORYLIST_OFFSET UNITYSDK_OFFSET(0x1B884B50)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SORTWEAPONLIST_OFFSET UNITYSDK_OFFSET(0x1B884800)
#define RPG_CLIENT_EVOLVEBUILDUTILS__GETBATTLEEXPSTEP_G___GETCURSTEPEXPMAX_15_0_OFFSET UNITYSDK_OFFSET(0x1B887070)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils_TypeDefinitionIndex = 63874;

	class EvolveBuildUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedEvolveBuildGearEquipInfo()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDEVOLVEBUILDGEAREQUIPINFO_OFFSET))();
		}

		static ::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedGearEquipInfo(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDGEAREQUIPINFO_OFFSET))(a1, a2);
		}

		static ::System::Void SortWeaponList(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SORTWEAPONLIST_OFFSET))(a1);
		}

		static ::System::Void SortAccessoryList(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SORTACCESSORYLIST_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasResonanceInPacket(::System::UInt32 a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEINPACKET_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasResonanceWithAccessories(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEWITHACCESSORIES_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetResonanceGearIDInPacket(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETRESONANCEGEARIDINPACKET_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildMixData*>* GetSortedMixData(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildMixData*>*(*)(::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildScMixData*>* GetSortedMixDataSC(::RPG::GameCore::EvolveBuildSeason a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildScMixData*>*(*)(::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATASC_OFFSET))(a1);
		}

		static ::System::Boolean IsGearUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_ISGEARUNLOCK_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::UInt32> GetGearLvToForge(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARLVTOFORGE_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::UInt32> GetGearForgeID(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetCollectionIDListByType(::RPG::GameCore::EvolveGearType a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETCOLLECTIONIDLISTBYTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::RaccoonStateType GetRaccoonStateType(::System::Int32 a1)
		{
			return ((::RPG::GameCore::RaccoonStateType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETRACCOONSTATETYPE_OFFSET))(a1);
		}

		static ::RPG::Client::EvolveBuildMixData* GetGearMixData(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildMixData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATA_OFFSET))(a1);
		}

		static ::System::UInt32 GetBattleExpStep(::System::UInt32 a1, ::RPG::GameCore::EvolveBuildSeason a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETBATTLEEXPSTEP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EvolveBuildGearEquipInfo* SlotInfo2GearEquipInfo(::Class_1_997BC107281E8D79* a1)
		{
			return ((::RPG::GameCore::EvolveBuildGearEquipInfo*(*)(::Class_1_997BC107281E8D79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFO2GEAREQUIPINFO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* SlotInfos2GearEquipInfos(::System::Collections::Generic::IEnumerable_1<::Class_1_997BC107281E8D79*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_997BC107281E8D79*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFOS2GEAREQUIPINFOS_OFFSET))(a1);
		}

		static ::System::Int32 CountUnlockedSlotNum(::System::Collections::Generic::IEnumerable_1<::Class_1_997BC107281E8D79*>* a1)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_997BC107281E8D79*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_COUNTUNLOCKEDSLOTNUM_OFFSET))(a1);
		}

		static ::System::Void SetMazeBuffDesc(::UnityEngine::UI::Text* a1, ::RPG::GameCore::MazeBuffRow* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::RPG::GameCore::MazeBuffRow*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SETMAZEBUFFDESC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean GetGearForgeRow(::System::UInt32 a1, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*& a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_OFFSET))(a1, a2);
		}

		static ::RPG::Client::EvolveBuildScMixData* GetGearMixDataSc(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildScMixData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASC_OFFSET))(a1);
		}

		static ::RPG::Client::EvolveBuildScMixData* GetGearMixDataScFromForgeRow(::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* a1)
		{
			return ((::RPG::Client::EvolveBuildScMixData*(*)(::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASCFROMFORGEROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* GetGearForgeRow_1(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_1_OFFSET))(a1);
		}

		static ::System::Void OpenFakeGearSelectPage(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_OPENFAKEGEARSELECTPAGE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint _GetBattleExpStep_g___GetCurStepExpMax_15_0(::RPG::GameCore::FixPoint a1, ::RPG::Client::EvolveBuildUtils___c__DisplayClass15_0& a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::Client::EvolveBuildUtils___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS__GETBATTLEEXPSTEP_G___GETCURSTEPEXPMAX_15_0_OFFSET))(a1, a2);
		}
	};
}
