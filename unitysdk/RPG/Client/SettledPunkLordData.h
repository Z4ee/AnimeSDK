#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PunkLordData.h"
#include "unitysdk/System/DateTime.h"

class Class_1_C2CA2C8C31F52936_1;
class Class_1_D40936EF3BF54118_2;
class Class_1_F3CA30716D4FAF92_2;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xB164E60)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB164E40)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xB164E70)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB164E50)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCATTACKNUMUSERECORD_OFFSET UNITYSDK_OFFSET(0xB164C70)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET UNITYSDK_OFFSET(0xB1647C0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET UNITYSDK_OFFSET(0xB1649D0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET UNITYSDK_OFFSET(0xB164970)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB164790)

namespace RPG::Client
{
	inline static constexpr unsigned int SettledPunkLordData_TypeDefinitionIndex = 61464;

	class SettledPunkLordData : public ::RPG::Client::PunkLordData
	{
	public:
		::System::DateTime _CreatedDateTime_k__BackingField; // 0x98
		::System::UInt32 _CreatedTimeStamp_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 serverID, ::System::UInt32 summonUid, ::System::UInt32 configID, ::System::UInt32 worldLevel, ::System::Boolean isGenBySystem)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET))(this, serverID, summonUid, configID, worldLevel, isGenBySystem);
		}

		::System::Void SyncSettledRecordInfo(::Class_1_C2CA2C8C31F52936_1* killedPunkLordMonsterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2CA2C8C31F52936_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET))(this, killedPunkLordMonsterInfo);
		}

		::System::Void SyncSettledRecord(::Class_1_D40936EF3BF54118_2* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncSettledRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_2*>* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncAttackNumUseRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCATTACKNUMUSERECORD_OFFSET))(this);
		}

		::System::UInt32 get_CreatedTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreatedTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDTIMESTAMP_OFFSET))(this, value);
		}

		::System::DateTime get_CreatedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDDATETIME_OFFSET))(this);
		}

		::System::Void set_CreatedDateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDDATETIME_OFFSET))(this, value);
		}
	};
}
