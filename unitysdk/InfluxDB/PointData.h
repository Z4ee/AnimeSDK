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

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Text { class StringBuilder; }

#define INFLUXDB_POINTDATA_APPENDFIELDS_OFFSET UNITYSDK_OFFSET(0x1E757430)
#define INFLUXDB_POINTDATA_APPENDTAGS_OFFSET UNITYSDK_OFFSET(0x1E756F00)
#define INFLUXDB_POINTDATA_APPENDTIME_OFFSET UNITYSDK_OFFSET(0x1E757FE0)
#define INFLUXDB_POINTDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E758450)
#define INFLUXDB_POINTDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7583B0)
#define INFLUXDB_POINTDATA_ESCAPEKEY_OFFSET UNITYSDK_OFFSET(0x1E756B10)
#define INFLUXDB_POINTDATA_ESCAPEVALUE_OFFSET UNITYSDK_OFFSET(0x1E7581F0)
#define INFLUXDB_POINTDATA_FIELD_1_OFFSET UNITYSDK_OFFSET(0x1E755B40)
#define INFLUXDB_POINTDATA_FIELD_2_OFFSET UNITYSDK_OFFSET(0x1E755BF0)
#define INFLUXDB_POINTDATA_FIELD_3_OFFSET UNITYSDK_OFFSET(0x1E755C70)
#define INFLUXDB_POINTDATA_FIELD_4_OFFSET UNITYSDK_OFFSET(0x1E755D10)
#define INFLUXDB_POINTDATA_FIELD_5_OFFSET UNITYSDK_OFFSET(0x1E755DB0)
#define INFLUXDB_POINTDATA_FIELD_6_OFFSET UNITYSDK_OFFSET(0x1E755E50)
#define INFLUXDB_POINTDATA_FIELD_7_OFFSET UNITYSDK_OFFSET(0x1E755EF0)
#define INFLUXDB_POINTDATA_FIELD_8_OFFSET UNITYSDK_OFFSET(0x1E755F50)
#define INFLUXDB_POINTDATA_FIELD_9_OFFSET UNITYSDK_OFFSET(0x1E755FF0)
#define INFLUXDB_POINTDATA_FIELD_OFFSET UNITYSDK_OFFSET(0x1E755860)
#define INFLUXDB_POINTDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7588F0)
#define INFLUXDB_POINTDATA_HASFIELDS_OFFSET UNITYSDK_OFFSET(0x1E756920)
#define INFLUXDB_POINTDATA_ISNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x1E758140)
#define INFLUXDB_POINTDATA_MEASUREMENT_OFFSET UNITYSDK_OFFSET(0x1E755400)
#define INFLUXDB_POINTDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E758840)
#define INFLUXDB_POINTDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E759000)
#define INFLUXDB_POINTDATA_PUTFIELD_OFFSET UNITYSDK_OFFSET(0x1E755900)
#define INFLUXDB_POINTDATA_TAG_OFFSET UNITYSDK_OFFSET(0x1E7555E0)
#define INFLUXDB_POINTDATA_TIMESPANTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1E756470)
#define INFLUXDB_POINTDATA_TIMESTAMP_1_OFFSET UNITYSDK_OFFSET(0x1E756260)
#define INFLUXDB_POINTDATA_TIMESTAMP_2_OFFSET UNITYSDK_OFFSET(0x1E756690)
#define INFLUXDB_POINTDATA_TIMESTAMP_3_OFFSET UNITYSDK_OFFSET(0x1E756820)
#define INFLUXDB_POINTDATA_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1E756050)
#define INFLUXDB_POINTDATA_TOLINEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E7569F0)
#define INFLUXDB_POINTDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E759090)
#define INFLUXDB_POINTDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E755480)
#define INFLUXDB_POINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7552D0)
#define INFLUXDB_POINTDATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E759130)
#define INFLUXDB_POINTDATA___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E759140)

namespace InfluxDB
{
	inline static constexpr unsigned int PointData_TypeDefinitionIndex = 8234;

	class PointData : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_EpochStart()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(PointData_TypeDefinitionIndex)->GetStaticField(0x3800);
		}
		::System::String* _measurementName; // 0x10
		::System::Nullable_1<::System::Numerics::BigInteger> _time; // 0x18
		::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::String*>* _tags; // 0x30
		::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Object*>* _fields; // 0x38
		::InfluxDB::WritePrecision Precision; // 0x40

		::System::Void _ctor(::System::String* measurementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA__CTOR_OFFSET))(this, measurementName);
		}

		::System::Void _ctor_1(::System::String* measurementName, ::InfluxDB::WritePrecision precision, ::System::Nullable_1<::System::Numerics::BigInteger> time, ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::String*>* tags, ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Object*>* fields)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::InfluxDB::WritePrecision, ::System::Nullable_1<::System::Numerics::BigInteger>, ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA__CTOR_1_OFFSET))(this, measurementName, precision, time, tags, fields);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA__CCTOR_OFFSET))();
		}

		static ::InfluxDB::PointData* Measurement(::System::String* measurementName)
		{
			return ((::InfluxDB::PointData*(*)(::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_MEASUREMENT_OFFSET))(measurementName);
		}

		::InfluxDB::PointData* Tag(::System::String* name, ::System::String* value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TAG_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field(::System::String* name, ::System::Byte value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_1(::System::String* name, ::System::Single value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_1_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_2(::System::String* name, ::System::Double value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_2_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_3(::System::String* name, ::System::Decimal value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_3_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_4(::System::String* name, ::System::Int64 value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_4_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_5(::System::String* name, ::System::UInt64 value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_5_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_6(::System::String* name, ::System::UInt32 value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_6_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_7(::System::String* name, ::System::String* value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_7_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_8(::System::String* name, ::System::Boolean value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_8_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Field_9(::System::String* name, ::System::Object* value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_FIELD_9_OFFSET))(this, name, value);
		}

		::InfluxDB::PointData* Timestamp(::System::Int64 timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::Int64, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TIMESTAMP_OFFSET))(this, timestamp, timeUnit);
		}

		::InfluxDB::PointData* Timestamp_1(::System::TimeSpan timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::TimeSpan, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TIMESTAMP_1_OFFSET))(this, timestamp, timeUnit);
		}

		::InfluxDB::PointData* Timestamp_2(::System::DateTime timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::DateTime, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TIMESTAMP_2_OFFSET))(this, timestamp, timeUnit);
		}

		::InfluxDB::PointData* Timestamp_3(::System::DateTimeOffset timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::DateTimeOffset, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TIMESTAMP_3_OFFSET))(this, timestamp, timeUnit);
		}

		::System::Boolean HasFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_HASFIELDS_OFFSET))(this);
		}

		::System::String* ToLineProtocol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TOLINEPROTOCOL_OFFSET))(this);
		}

		::InfluxDB::PointData* PutField(::System::String* name, ::System::Object* value)
		{
			return ((::InfluxDB::PointData*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_PUTFIELD_OFFSET))(this, name, value);
		}

		static ::System::Numerics::BigInteger TimeSpanToBigInteger(::System::TimeSpan timestamp, ::InfluxDB::WritePrecision timeUnit)
		{
			return ((::System::Numerics::BigInteger(*)(::System::TimeSpan, ::InfluxDB::WritePrecision))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_TIMESPANTOBIGINTEGER_OFFSET))(timestamp, timeUnit);
		}

		::System::Void AppendTags(::System::Text::StringBuilder* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_APPENDTAGS_OFFSET))(this, writer);
		}

		::System::Boolean AppendFields(::System::Text::StringBuilder* sb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_APPENDFIELDS_OFFSET))(this, sb);
		}

		::System::Void AppendTime(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_APPENDTIME_OFFSET))(this, sb);
		}

		::System::Void EscapeKey(::System::Text::StringBuilder* sb, ::System::String* key, ::System::Boolean escapeEqual)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_ESCAPEKEY_OFFSET))(this, sb, key, escapeEqual);
		}

		::System::Void EscapeValue(::System::Text::StringBuilder* sb, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_ESCAPEVALUE_OFFSET))(this, sb, value);
		}

		::System::Boolean IsNotDefined(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_ISNOTDEFINED_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::InfluxDB::PointData* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::InfluxDB::PointData*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::InfluxDB::PointData* left, ::InfluxDB::PointData* right)
		{
			return ((::System::Boolean(*)(::InfluxDB::PointData*, ::InfluxDB::PointData*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::InfluxDB::PointData* left, ::InfluxDB::PointData* right)
		{
			return ((::System::Boolean(*)(::InfluxDB::PointData*, ::InfluxDB::PointData*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INFLUXDB_POINTDATA___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
