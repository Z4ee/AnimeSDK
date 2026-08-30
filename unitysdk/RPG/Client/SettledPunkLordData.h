#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PunkLordData.h"
#include "unitysdk/System/DateTime.h"

class Class_1_21DCD4640D389503_5;
class Class_1_C2CA2C8C31F52936_1;
class Class_1_D40936EF3BF54118_5;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xE07AF70)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE07AF50)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xE07AF80)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE07AF60)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCATTACKNUMUSERECORD_OFFSET UNITYSDK_OFFSET(0xE07AD80)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET UNITYSDK_OFFSET(0xE07A940)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET UNITYSDK_OFFSET(0xE07AB60)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET UNITYSDK_OFFSET(0xE07AB00)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE07A910)

namespace RPG::Client
{
	inline static constexpr unsigned int SettledPunkLordData_TypeDefinitionIndex = 66748;

	class SettledPunkLordData : public ::RPG::Client::PunkLordData
	{
	public:
		::System::DateTime _CreatedDateTime_k__BackingField; // 0x98
		::System::UInt32 _CreatedTimeStamp_k__BackingField; // 0xA0

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SyncSettledRecordInfo(::Class_1_C2CA2C8C31F52936_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2CA2C8C31F52936_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET))(this, a1);
		}

		::System::Void SyncSettledRecord(::Class_1_D40936EF3BF54118_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET))(this, a1);
		}

		::System::Void SyncSettledRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_5*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET))(this, a1);
		}

		::System::Void SyncAttackNumUseRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCATTACKNUMUSERECORD_OFFSET))(this);
		}

		::System::UInt32 get_CreatedTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreatedTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDTIMESTAMP_OFFSET))(this, a1);
		}

		::System::DateTime get_CreatedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDDATETIME_OFFSET))(this);
		}

		::System::Void set_CreatedDateTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDDATETIME_OFFSET))(this, a1);
		}
	};
}
