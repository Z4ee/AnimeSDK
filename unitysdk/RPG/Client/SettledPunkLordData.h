#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PunkLordData.h"
#include "unitysdk/System/DateTime.h"

class Class_1_1CA4D93AB7716E0A_1;
class Class_1_E7C4009BCC22497A;
class Class_1_F3CA30716D4FAF92_1;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xA476AA0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA476A80)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xA476AB0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA476A90)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCATTACKNUMUSERECORD_OFFSET UNITYSDK_OFFSET(0xA4768C0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET UNITYSDK_OFFSET(0xA476410)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET UNITYSDK_OFFSET(0xA476620)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET UNITYSDK_OFFSET(0xA4765C0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4763E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SettledPunkLordData_TypeDefinitionIndex = 54301;

	class SettledPunkLordData : public ::RPG::Client::PunkLordData
	{
	public:
		::System::DateTime _CreatedDateTime_k__BackingField; // 0x98
		::System::UInt32 _CreatedTimeStamp_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 serverID, ::System::UInt32 summonUid, ::System::UInt32 configID, ::System::UInt32 worldLevel, ::System::Boolean isGenBySystem)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET))(this, serverID, summonUid, configID, worldLevel, isGenBySystem);
		}

		::System::Void SyncSettledRecordInfo(::Class_1_1CA4D93AB7716E0A_1* killedPunkLordMonsterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET))(this, killedPunkLordMonsterInfo);
		}

		::System::Void SyncSettledRecord(::Class_1_E7C4009BCC22497A* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncSettledRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_1*>* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET))(this, battleRecordList);
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
