#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraArrangementPresetData; }
namespace RPG::Client { class ChimeraData; }
namespace RPG::Client { class ChimeraEndlessManager; }
namespace RPG::Client { class ChimeraWorkRoundInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1B0F90)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETCOMMONMEMBERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C1B2CA0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETRECOMMENDEDARRANGEMENTPRESETS_OFFSET UNITYSDK_OFFSET(0x1C1B3210)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E10)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E50)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x1C1B0EB0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEMENTCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B0E90)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ISLEADERLOCKED_OFFSET UNITYSDK_OFFSET(0x1C1B0ED0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E30)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E70)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STAGECOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B0EF0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STOCKCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B0F10)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C1B0F30)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONARRANGED_OFFSET UNITYSDK_OFFSET(0x1C1B3090)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C1B30F0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_1_OFFSET UNITYSDK_OFFSET(0x1C1B3150)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1C1B2DC0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C1B2F80)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISSTAGEUNMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C1B2FE0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYCHIMERAUNLOCKINGUPDATE_OFFSET UNITYSDK_OFFSET(0x1C1B0FD0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYDEATHUPDATE_OFFSET UNITYSDK_OFFSET(0x1C1B2800)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYNORMALWORKROUNDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C1B2290)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B3550)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x1C1B35D0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x1C1B33B0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E20)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E60)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x1C1B0EC0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEMENTCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B0EA0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ISLEADERLOCKED_OFFSET UNITYSDK_OFFSET(0x1C1B0EE0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWCOMMONCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E40)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWLEADERCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B0E80)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STAGECOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B0F00)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STOCKCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B0F20)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_SYNCARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x1C1B2C10)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO_TRYLOADARRANGEMENTFROMUSERPREFS_OFFSET UNITYSDK_OFFSET(0x1C1B2A80)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B3630)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__FILTERARRANGEMENTBYDEATH_OFFSET UNITYSDK_OFFSET(0x1C1B2850)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__REFRESHSTOCKANDSTAGE_OFFSET UNITYSDK_OFFSET(0x1C1B2080)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SAVEARRANGEMENT_OFFSET UNITYSDK_OFFSET(0x1C1B3430)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B2310)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDLEADER_OFFSET UNITYSDK_OFFSET(0x1C1B2780)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCSTAGEDCOMMON_OFFSET UNITYSDK_OFFSET(0x1C1B2620)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1C1B10C0)
#define RPG_CLIENT_CHIMERAARRANGEMENTINFO___REFRESHSTOCKANDSTAGE_B__54_0_OFFSET UNITYSDK_OFFSET(0x1C1B36E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraArrangementInfo_TypeDefinitionIndex = 63464;

	class ChimeraArrangementInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 EmptySeat = 0x0; // 0x0
		// static const ::System::UInt32 MaxStageCount = 0x3; // 0x0
		::RPG::Client::ChimeraWorkRoundInfo* _WorkRoundInfo; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _IsCommonArranged; // 0x18
		::Il2CppArray<::System::UInt32>* _NewLeaderChimeras_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _NewCommonChimeras_k__BackingField; // 0x28
		::RPG::Client::ChimeraEndlessManager* _EndlessManager; // 0x30
		::Il2CppArray<::System::UInt32>* _ArrangementCommon_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _StockCommon_k__BackingField; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _IsNew; // 0x48
		::Il2CppArray<::System::UInt32>* _AllLeaderChimeras_k__BackingField; // 0x50
		::Il2CppArray<::System::UInt32>* _AllCommonChimeras_k__BackingField; // 0x58
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _IsCommonUnlocked; // 0x60
		::Il2CppArray<::System::UInt32>* _StageCommon_k__BackingField; // 0x68
		::System::Boolean _IsLeaderLocked_k__BackingField; // 0x70
		::System::UInt32 _ArrangedLeader_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AllCommonChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLCOMMONCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllCommonChimeras(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLCOMMONCHIMERAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NewCommonChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWCOMMONCHIMERAS_OFFSET))(this);
		}

		::System::Void set_NewCommonChimeras(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWCOMMONCHIMERAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AllLeaderChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ALLLEADERCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllLeaderChimeras(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ALLLEADERCHIMERAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NewLeaderChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_NEWLEADERCHIMERAS_OFFSET))(this);
		}

		::System::Void set_NewLeaderChimeras(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_NEWLEADERCHIMERAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ArrangementCommon()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEMENTCOMMON_OFFSET))(this);
		}

		::System::Void set_ArrangementCommon(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEMENTCOMMON_OFFSET))(this, a1);
		}

		::System::UInt32 get_ArrangedLeader()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ARRANGEDLEADER_OFFSET))(this);
		}

		::System::Void set_ArrangedLeader(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ARRANGEDLEADER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLeaderLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_ISLEADERLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLeaderLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_ISLEADERLOCKED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_StageCommon()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STAGECOMMON_OFFSET))(this);
		}

		::System::Void set_StageCommon(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STAGECOMMON_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_StockCommon()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GET_STOCKCOMMON_OFFSET))(this);
		}

		::System::Void set_StockCommon(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SET_STOCKCOMMON_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::ChimeraWorkRoundInfo* a1, ::RPG::Client::ChimeraEndlessManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundInfo*, ::RPG::Client::ChimeraEndlessManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void NotifyChimeraUnlockingUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYCHIMERAUNLOCKINGUPDATE_OFFSET))(this);
		}

		::System::Void NotifyNormalWorkRoundUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYNORMALWORKROUNDUPDATE_OFFSET))(this, a1);
		}

		::System::Void NotifyDeathUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_NOTIFYDEATHUPDATE_OFFSET))(this);
		}

		::System::Boolean TryLoadArrangementFromUserPrefs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_TRYLOADARRANGEMENTFROMUSERPREFS_OFFSET))(this);
		}

		::System::Void SyncArrangement(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SYNCARRANGEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SyncArrangedCommon(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDCOMMON_OFFSET))(this, a1);
		}

		::System::Void _SyncStagedCommon(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCSTAGEDCOMMON_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncArrangedLeader(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCARRANGEDLEADER_OFFSET))(this, a1);
		}

		::System::Void _SyncUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SYNCUNLOCKEDCHIMERAS_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshStockAndStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__REFRESHSTOCKANDSTAGE_OFFSET))(this);
		}

		::System::Void _FilterArrangementByDeath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__FILTERARRANGEMENTBYDEATH_OFFSET))(this);
		}

		::System::Boolean IsNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISNEW_OFFSET))(this, a1);
		}

		::System::Boolean IsStageUnmodified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISSTAGEUNMODIFIED_OFFSET))(this);
		}

		::System::Boolean IsCommonArranged(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONARRANGED_OFFSET))(this, a1);
		}

		::System::Boolean IsCommonUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISCOMMONUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean IsDead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_OFFSET))(this, a1);
		}

		::System::Boolean IsDead_1(::RPG::Client::ChimeraData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_ISDEAD_1_OFFSET))(this, a1);
		}

		::System::UInt32 GetCommonMemberSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETCOMMONMEMBERSLOTCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::ChimeraArrangementPresetData*>* GetRecommendedArrangementPresets()
		{
			return ((::Il2CppArray<::RPG::Client::ChimeraArrangementPresetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_GETRECOMMENDEDARRANGEMENTPRESETS_OFFSET))(this);
		}

		::System::Void SaveArrangement(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SaveArrangedCommon(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDCOMMON_OFFSET))(this, a1, a2);
		}

		::System::Void SaveArrangedLeader(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO_SAVEARRANGEDLEADER_OFFSET))(this, a1);
		}

		::System::Void _SaveArrangement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO__SAVEARRANGEMENT_OFFSET))(this);
		}

		::System::Boolean __RefreshStockAndStage_b__54_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTINFO___REFRESHSTOCKANDSTAGE_B__54_0_OFFSET))(this, a1);
		}
	};
}
