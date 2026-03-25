#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_638;
namespace RPG::GameCore { class FinishWayRow; }

#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0x9FD6800)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYID_OFFSET UNITYSDK_OFFSET(0x9FD67C0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x9FD67E0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FD6780)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x9FD6820)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x9FD6760)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FD67A0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SETFINISH_OFFSET UNITYSDK_OFFSET(0x9FBB530)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYID_OFFSET UNITYSDK_OFFSET(0x9FD67D0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x9FD67F0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FD6790)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x9FD6830)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x9FD6770)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FD67B0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FBB580)
#define RPG_CLIENT_PLANETFESUNLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FBB420)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesUnlockData_TypeDefinitionIndex = 54238;

	class PlanetFesUnlockData : public ::System::Object
	{
	public:
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x10
		::System::UInt32 _FinishWayID_k__BackingField; // 0x18
		::System::UInt32 _UnlockID_k__BackingField; // 0x1C
		::System::Boolean _IsUnlock_k__BackingField; // 0x20
		::System::UInt32 _UnlockProgress_k__BackingField; // 0x24
		::RPG::Client::TextID _UnlockDesc_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA__CTOR_OFFSET))(this, unlockID);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SETFINISH_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_638* unlock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_638*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SYNC_OFFSET))(this, unlock);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Void set_UnlockID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKID_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKPROGRESS_OFFSET))(this);
		}

		::System::Void set_UnlockProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishWayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYID_OFFSET))(this);
		}

		::System::Void set_FinishWayID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYID_OFFSET))(this, value);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYROW_OFFSET))(this, value);
		}

		::RPG::GameCore::QuestFinishType get_FinishType()
		{
			return ((::RPG::GameCore::QuestFinishType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::Void set_UnlockDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKDESC_OFFSET))(this, value);
		}
	};
}
