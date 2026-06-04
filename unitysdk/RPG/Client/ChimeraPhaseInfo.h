#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_23.h"
#include "unitysdk/RPG/Client/ChimeraLastPhaseCompleteStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraPhaseData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERAPHASEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B3080)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETCURRENTPHASEDATA_OFFSET UNITYSDK_OFFSET(0xB6B43B0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATABYROUNDID_OFFSET UNITYSDK_OFFSET(0xB6B41D0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATA_OFFSET UNITYSDK_OFFSET(0xB6B3D90)
#define RPG_CLIENT_CHIMERAPHASEINFO_GET_LASTPHASECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xB6B44D0)
#define RPG_CLIENT_CHIMERAPHASEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB6B2430)
#define RPG_CLIENT_CHIMERAPHASEINFO_SET_LASTPHASECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xB6B44E0)
#define RPG_CLIENT_CHIMERAPHASEINFO_SYNCFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0xB6AE000)
#define RPG_CLIENT_CHIMERAPHASEINFO_SYNCPHASEID_OFFSET UNITYSDK_OFFSET(0xB6AF430)
#define RPG_CLIENT_CHIMERAPHASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B2420)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPhaseInfo_TypeDefinitionIndex = 59371;

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

		::System::Void SyncPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SYNCPHASEID_OFFSET))(this, a1);
		}

		::System::Void SyncFinishStatus(::Enum_3_DB663931210BBC27_23 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_23))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SYNCFINISHSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseData* GetPhaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseData* GetPhaseDataByRoundID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATABYROUNDID_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseData* GetCurrentPhaseData()
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETCURRENTPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::ChimeraLastPhaseCompleteStatus get_LastPhaseCompleteStatus()
		{
			return ((::RPG::Client::ChimeraLastPhaseCompleteStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GET_LASTPHASECOMPLETESTATUS_OFFSET))(this);
		}

		::System::Void set_LastPhaseCompleteStatus(::RPG::Client::ChimeraLastPhaseCompleteStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraLastPhaseCompleteStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SET_LASTPHASECOMPLETESTATUS_OFFSET))(this, a1);
		}
	};
}
