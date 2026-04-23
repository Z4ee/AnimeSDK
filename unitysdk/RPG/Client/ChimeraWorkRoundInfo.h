#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DB57B006CFFCF00A_1;
namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA088720)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTDISPLAYROUNDDATA_OFFSET UNITYSDK_OFFSET(0xA084CD0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTROUNDDATA_OFFSET UNITYSDK_OFFSET(0xA0889B0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETGALLARYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA088DC0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETROUNDDATA_OFFSET UNITYSDK_OFFSET(0xA088B30)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_ALLUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA0884C0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA088480)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0xA0884A0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_LASTROUNDID_OFFSET UNITYSDK_OFFSET(0xA088440)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_NEWLYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA0884E0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_SERVERROUNDID_OFFSET UNITYSDK_OFFSET(0xA088460)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA088500)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_ISCURRENTROUNDMISSIONOPTIONFINISH_OFFSET UNITYSDK_OFFSET(0xA088C20)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_ISFINALROUNDFINISH_OFFSET UNITYSDK_OFFSET(0xA088A10)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_ISINFINALROUND_OFFSET UNITYSDK_OFFSET(0xA0888D0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_ALLUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA0884D0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xA088490)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0xA0884B0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_LASTROUNDID_OFFSET UNITYSDK_OFFSET(0xA088450)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_NEWLYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA0884F0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_SERVERROUNDID_OFFSET UNITYSDK_OFFSET(0xA088470)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCFINALROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA088830)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCNEWLYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA08A2E0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCROUNDID_OFFSET UNITYSDK_OFFSET(0xA0887D0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA08A110)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA089070)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_UPDATEFINALROUNDFINISH_OFFSET UNITYSDK_OFFSET(0xA088890)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA08A4A0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDALLSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xA089B10)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDANYSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xA089E10)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__SYNCUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA08A270)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo_TypeDefinitionIndex = 58514;

	class ChimeraWorkRoundInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _AllUnlockedChimeras_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraWorkRoundData*>* _ChimeraWorkRoundDataDict; // 0x18
		::Il2CppArray<::System::UInt32>* _NewlyUnlockedChimeras_k__BackingField; // 0x20
		::System::UInt32 _FinalRoundSubRoundID_k__BackingField; // 0x28
		::System::UInt32 _LastRoundID_k__BackingField; // 0x2C
		::System::UInt32 _FinalRoundFinishWorkCnt_k__BackingField; // 0x30
		::System::UInt32 _ServerRoundID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LastRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_LASTROUNDID_OFFSET))(this);
		}

		::System::Void set_LastRoundID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_LASTROUNDID_OFFSET))(this, value);
		}

		::System::UInt32 get_ServerRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_SERVERROUNDID_OFFSET))(this);
		}

		::System::Void set_ServerRoundID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_SERVERROUNDID_OFFSET))(this, value);
		}

		::System::UInt32 get_FinalRoundFinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDFINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_FinalRoundFinishWorkCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDFINISHWORKCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_FinalRoundSubRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDSUBROUNDID_OFFSET))(this);
		}

		::System::Void set_FinalRoundSubRoundID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDSUBROUNDID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_AllUnlockedChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_ALLUNLOCKEDCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllUnlockedChimeras(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_ALLUNLOCKEDCHIMERAS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_NewlyUnlockedChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_NEWLYUNLOCKEDCHIMERAS_OFFSET))(this);
		}

		::System::Void set_NewlyUnlockedChimeras(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_NEWLYUNLOCKEDCHIMERAS_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRoundID(::System::UInt32 lastRoundID, ::System::UInt32 roundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCROUNDID_OFFSET))(this, lastRoundID, roundID);
		}

		::System::Void SyncFinalRoundInfo(::System::UInt32 finishWorkCnt, ::System::UInt32 subRoundID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCFINALROUNDINFO_OFFSET))(this, finishWorkCnt, subRoundID);
		}

		::System::Void UpdateFinalRoundFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_UPDATEFINALROUNDFINISH_OFFSET))(this);
		}

		::System::Boolean IsInFinalRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_ISINFINALROUND_OFFSET))(this);
		}

		::System::Boolean IsFinalRoundFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_ISFINALROUNDFINISH_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkRoundData* GetCurrentRoundData()
		{
			return ((::RPG::Client::ChimeraWorkRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTROUNDDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ChimeraWorkRoundData*>* GetCurrentDisplayRoundData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ChimeraWorkRoundData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTDISPLAYROUNDDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetGallaryUnlockedChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETGALLARYUNLOCKEDCHIMERAS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* TryGetCurrentRoundOptionMainMissionData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* IsCurrentRoundMissionOptionFinish()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_ISCURRENTROUNDMISSIONOPTIONFINISH_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkRoundData* GetRoundData(::System::UInt32 roundID)
		{
			return ((::RPG::Client::ChimeraWorkRoundData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETROUNDDATA_OFFSET))(this, roundID);
		}

		::System::Void SyncUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::Class_1_DB57B006CFFCF00A_1*>* allUnlocked, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* newlyUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DB57B006CFFCF00A_1*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCUNLOCKEDCHIMERAS_OFFSET))(this, allUnlocked, newlyUnlocked);
		}

		::System::Void SyncNewlyUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::Class_1_DB57B006CFFCF00A_1*>* all, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* mostRecent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_DB57B006CFFCF00A_1*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCNEWLYUNLOCKEDCHIMERAS_OFFSET))(this, all, mostRecent);
		}

		::System::Void _SyncUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* allUnlocked, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* newlyUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__SYNCUNLOCKEDCHIMERAS_OFFSET))(this, allUnlocked, newlyUnlocked);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _IsRoundAllSubMissionFinished(::System::UInt32 roundID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDALLSUBMISSIONFINISHED_OFFSET))(this, roundID);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _IsRoundAnySubMissionFinished(::System::UInt32 roundID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDANYSUBMISSIONFINISHED_OFFSET))(this, roundID);
		}
	};
}
