#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_22.h"
#include "unitysdk/RPG/Client/ChimeraLastPhaseCompleteStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraPhaseData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERAPHASEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93C78B0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETCURRENTPHASEDATA_OFFSET UNITYSDK_OFFSET(0x93C89A0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATABYROUNDID_OFFSET UNITYSDK_OFFSET(0x93C87C0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATA_OFFSET UNITYSDK_OFFSET(0x93C83D0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GET_LASTPHASECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x93C8A50)
#define RPG_CLIENT_CHIMERAPHASEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x93C7050)
#define RPG_CLIENT_CHIMERAPHASEINFO_SET_LASTPHASECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x93C8A60)
#define RPG_CLIENT_CHIMERAPHASEINFO_SYNCFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x93C37B0)
#define RPG_CLIENT_CHIMERAPHASEINFO_SYNCPHASEID_OFFSET UNITYSDK_OFFSET(0x93C48F0)
#define RPG_CLIENT_CHIMERAPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93C7040)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPhaseInfo_TypeDefinitionIndex = 51503;

	class ChimeraPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraPhaseData*>* _PhaseDataDict; // 0x10
		::RPG::Client::ChimeraLastPhaseCompleteStatus _LastPhaseCompleteStatus_k__BackingField; // 0x18
		::System::UInt32 _CurrentPhaseID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncPhaseID(::System::UInt32 phaseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SYNCPHASEID_OFFSET))(this, phaseID);
		}

		::System::Void SyncFinishStatus(::Enum_3_DB663931210BBC27_22 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_22))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SYNCFINISHSTATUS_OFFSET))(this, type);
		}

		::RPG::Client::ChimeraPhaseData* GetPhaseData(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATA_OFFSET))(this, phaseID);
		}

		::RPG::Client::ChimeraPhaseData* GetPhaseDataByRoundID(::System::UInt32 roundID)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATABYROUNDID_OFFSET))(this, roundID);
		}

		::RPG::Client::ChimeraPhaseData* GetCurrentPhaseData()
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETCURRENTPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::ChimeraLastPhaseCompleteStatus get_LastPhaseCompleteStatus()
		{
			return ((::RPG::Client::ChimeraLastPhaseCompleteStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GET_LASTPHASECOMPLETESTATUS_OFFSET))(this);
		}

		::System::Void set_LastPhaseCompleteStatus(::RPG::Client::ChimeraLastPhaseCompleteStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraLastPhaseCompleteStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SET_LASTPHASECOMPLETESTATUS_OFFSET))(this, value);
		}
	};
}
