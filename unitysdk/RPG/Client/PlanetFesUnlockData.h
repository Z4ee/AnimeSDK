#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_707;
namespace RPG::GameCore { class FinishWayRow; }

#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0xC48DA80)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYID_OFFSET UNITYSDK_OFFSET(0xC48DA40)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0xC48DA60)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC48DA00)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xC48DAA0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xC48D9E0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0xC48DA20)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SETFINISH_OFFSET UNITYSDK_OFFSET(0xC48D930)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYID_OFFSET UNITYSDK_OFFSET(0xC48DA50)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0xC48DA70)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC48DA10)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xC48DAB0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xC48D9F0)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0xC48DA30)
#define RPG_CLIENT_PLANETFESUNLOCKDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC48D980)
#define RPG_CLIENT_PLANETFESUNLOCKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC48D8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesUnlockData_TypeDefinitionIndex = 62325;

	class PlanetFesUnlockData : public ::System::Object
	{
	public:
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x10
		::System::UInt32 _UnlockProgress_k__BackingField; // 0x18
		::System::Boolean _IsUnlock_k__BackingField; // 0x1C
		::RPG::Client::TextID _UnlockDesc_k__BackingField; // 0x20
		::System::UInt32 _UnlockID_k__BackingField; // 0x30
		::System::UInt32 _FinishWayID_k__BackingField; // 0x34

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SETFINISH_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_707* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_707*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Void set_UnlockID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKPROGRESS_OFFSET))(this);
		}

		::System::Void set_UnlockProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishWayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYID_OFFSET))(this);
		}

		::System::Void set_FinishWayID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_FINISHWAYROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::QuestFinishType get_FinishType()
		{
			return ((::RPG::GameCore::QuestFinishType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_FINISHTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_GET_UNLOCKDESC_OFFSET))(this);
		}

		::System::Void set_UnlockDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESUNLOCKDATA_SET_UNLOCKDESC_OFFSET))(this, a1);
		}
	};
}
