#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PunkLordData.h"
#include "unitysdk/System/DateTime.h"

class Class_1_21DCD4640D389503_5;
class Class_1_C2CA2C8C31F52936_1;
class Class_1_D40936EF3BF54118_5;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xC8B9B40)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_GET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC8B9B20)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDDATETIME_OFFSET UNITYSDK_OFFSET(0xC8B9B50)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SET_CREATEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC8B9B30)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCATTACKNUMUSERECORD_OFFSET UNITYSDK_OFFSET(0xC8B9950)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORDINFO_OFFSET UNITYSDK_OFFSET(0xC8B9500)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_1_OFFSET UNITYSDK_OFFSET(0xC8B9720)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA_SYNCSETTLEDRECORD_OFFSET UNITYSDK_OFFSET(0xC8B96C0)
#define RPG_CLIENT_SETTLEDPUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B94D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SettledPunkLordData_TypeDefinitionIndex = 62397;

	class SettledPunkLordData : public ::RPG::Client::PunkLordData
	{
	public:
		::System::UInt32 _CreatedTimeStamp_k__BackingField; // 0x98
		::System::DateTime _CreatedDateTime_k__BackingField; // 0xA0

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
