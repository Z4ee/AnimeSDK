#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RaidConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_FINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xCADF280)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_PROGRESSOFTARGETS_OFFSET UNITYSDK_OFFSET(0xCADF240)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_ROW_OFFSET UNITYSDK_OFFSET(0xCADF220)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xCADF260)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xCADF4B0)
#define RPG_CLIENT_TREASURECHALLENGETARGET_INITTARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xCADF620)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SETTARGETSPROGRESS_OFFSET UNITYSDK_OFFSET(0xCADF730)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SET_PROGRESSOFTARGETS_OFFSET UNITYSDK_OFFSET(0xCADF250)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SET_ROW_OFFSET UNITYSDK_OFFSET(0xCADF230)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xCADF270)
#define RPG_CLIENT_TREASURECHALLENGETARGET_TRYSETTARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xCADF850)
#define RPG_CLIENT_TREASURECHALLENGETARGET_TRYUPDATETARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xCADF7B0)
#define RPG_CLIENT_TREASURECHALLENGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xCADF510)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeTarget_TypeDefinitionIndex = 62432;

	class TreasureChallengeTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::RaidConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _TargetStatus_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ProgressOfTargets_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::RaidConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::RaidConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RaidConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ProgressOfTargets()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_PROGRESSOFTARGETS_OFFSET))(this);
		}

		::System::Void set_ProgressOfTargets(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SET_PROGRESSOFTARGETS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_TargetStatus()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_TARGETSTATUS_OFFSET))(this);
		}

		::System::Void set_TargetStatus(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SET_TARGETSTATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_FinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_FINISHEDCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void SetTargetsProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SETTARGETSPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Void TrySetTargetStatus(::System::UInt32 a1, ::RPG::Client::TreasureChallengeTargetStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_TRYSETTARGETSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void TryUpdateTargetProgress(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_TRYUPDATETARGETPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Void InitTargetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_INITTARGETSTATUS_OFFSET))(this);
		}
	};
}
