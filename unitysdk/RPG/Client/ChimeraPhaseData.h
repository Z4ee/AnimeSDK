#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraPhaseTargetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraPhaseRow; }

#define RPG_CLIENT_CHIMERAPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B603750)
#define RPG_CLIENT_CHIMERAPHASEDATA_GETREMAININGROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6036D0)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_LEADERCHARIOTSTATE_OFFSET UNITYSDK_OFFSET(0x1B603630)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_NEXTPHASE_OFFSET UNITYSDK_OFFSET(0x1B603180)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1B603110)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_ROUNDIDARR_OFFSET UNITYSDK_OFFSET(0x1B603450)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETPARAMS_OFFSET UNITYSDK_OFFSET(0x1B603590)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1B6034F0)
#define RPG_CLIENT_CHIMERAPHASEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1B603120)
#define RPG_CLIENT_CHIMERAPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6037A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPhaseData_TypeDefinitionIndex = 63494;

	class ChimeraPhaseData : public ::System::Object
	{
	public:
		::System::UInt32 _PhaseID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_PHASEID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraPhaseRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraPhaseRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::ChimeraPhaseData* get_NextPhase()
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_NEXTPHASE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RoundIDArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_ROUNDIDARR_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraPhaseTargetType get_TargetType()
		{
			return ((::RPG::GameCore::ChimeraPhaseTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TargetParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_TARGETPARAMS_OFFSET))(this);
		}

		::System::Int32 get_LeaderChariotState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GET_LEADERCHARIOTSTATE_OFFSET))(this);
		}

		::System::Int32 GetRemainingRoundCount(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_GETREMAININGROUNDCOUNT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraPhaseData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEDATA_CREATE_OFFSET))(a1);
		}
	};
}
