#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InfluxDB/WritePrecision.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace InfluxDB { class PointData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INFLUXDB_POINTDATA_BUILDER_FIELD_1_OFFSET UNITYSDK_OFFSET(0x1E1EEFA0)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_2_OFFSET UNITYSDK_OFFSET(0x1E1EF050)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_3_OFFSET UNITYSDK_OFFSET(0x1E1EF0D0)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_4_OFFSET UNITYSDK_OFFSET(0x1E1EF170)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_5_OFFSET UNITYSDK_OFFSET(0x1E1EF210)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_6_OFFSET UNITYSDK_OFFSET(0x1E1EF2B0)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_7_OFFSET UNITYSDK_OFFSET(0x1E1EF350)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_8_OFFSET UNITYSDK_OFFSET(0x1E1EF3B0)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_9_OFFSET UNITYSDK_OFFSET(0x1E1EF450)
#define INFLUXDB_POINTDATA_BUILDER_FIELD_OFFSET UNITYSDK_OFFSET(0x1E1EEE20)
#define INFLUXDB_POINTDATA_BUILDER_HASFIELDS_OFFSET UNITYSDK_OFFSET(0x1E1EF830)
#define INFLUXDB_POINTDATA_BUILDER_MEASUREMENT_OFFSET UNITYSDK_OFFSET(0x1E1EEC40)
#define INFLUXDB_POINTDATA_BUILDER_PUTFIELD_OFFSET UNITYSDK_OFFSET(0x1E1EEEC0)
#define INFLUXDB_POINTDATA_BUILDER_TAG_OFFSET UNITYSDK_OFFSET(0x1E1EECC0)
#define INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_1_OFFSET UNITYSDK_OFFSET(0x1E1EF580)
#define INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_2_OFFSET UNITYSDK_OFFSET(0x1E1EF640)
#define INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_3_OFFSET UNITYSDK_OFFSET(0x1E1EF740)
#define INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E1EF4B0)
#define INFLUXDB_POINTDATA_BUILDER_TOPOINTDATA_OFFSET UNITYSDK_OFFSET(0x1E1EF890)
#define INFLUXDB_POINTDATA_BUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EEB10)

namespace InfluxDB
{
	inline static constexpr unsigned int PointData_Builder_TypeDefinitionIndex = 8033;

	class PointData_Builder : public ::System::Object
	{
	public:
		::System::String* _measurementName; // 0x10
		::System::Nullable_1<::System::Numerics::BigInteger> _time; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _fields; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _tags; // 0x38
		::InfluxDB::WritePrecision _precision; // 0x40

		::System::Void _ctor(::System::String* measurementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER__CTOR_OFFSET))(this, measurementName);
		}

		static ::InfluxDB::PointData_Builder* Measurement(::System::String* measurementName)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_MEASUREMENT_OFFSET))(measurementName);
		}

		::InfluxDB::PointData_Builder* Tag(::System::String* name, ::System::String* value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_TAG_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field(::System::String* name, ::System::Byte value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_1(::System::String* name, ::System::Single value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_1_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_2(::System::String* name, ::System::Double value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_2_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_3(::System::String* name, ::System::Decimal value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_3_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_4(::System::String* name, ::System::Int64 value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_4_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_5(::System::String* name, ::System::UInt64 value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_5_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_6(::System::String* name, ::System::UInt32 value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_6_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_7(::System::String* name, ::System::String* value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_7_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_8(::System::String* name, ::System::Boolean value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_8_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Field_9(::System::String* name, ::System::Object* value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_FIELD_9_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData_Builder* Timestamp(::System::Int64 timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::Int64, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_OFFSET))(this, timestamp, timeUnit);
		}

		::InfluxDB::PointData_Builder* Timestamp_1(::System::TimeSpan timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::TimeSpan, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_1_OFFSET))(this, timestamp, timeUnit);
		}

		::InfluxDB::PointData_Builder* Timestamp_2(::System::DateTime timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::DateTime, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_2_OFFSET))(this, timestamp, timeUnit);
		}

		::InfluxDB::PointData_Builder* Timestamp_3(::System::DateTimeOffset timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::DateTimeOffset, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_TIMESTAMP_3_OFFSET))(this, timestamp, timeUnit);
		}

		::System::Boolean HasFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_HASFIELDS_OFFSET))(this);
		}

		::InfluxDB::PointData* ToPointData()
		{
			return ((::InfluxDB::PointData*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_TOPOINTDATA_OFFSET))(this);
		}

		::InfluxDB::PointData_Builder* PutField(::System::String* name, ::System::Object* value)
		{
			return ((::InfluxDB::PointData_Builder*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_BUILDER_PUTFIELD_OFFSET))(this, name, value);
		}
	};
}
