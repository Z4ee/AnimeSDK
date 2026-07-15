#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int PrimitiveTypeCode_TypeDefinitionIndex = 9317;

	enum class PrimitiveTypeCode : ::System::Int32
	{
		Empty = 0,
		Object = 1,
		Char = 2,
		CharNullable = 3,
		Boolean = 4,
		BooleanNullable = 5,
		SByte = 6,
		SByteNullable = 7,
		Int16 = 8,
		Int16Nullable = 9,
		UInt16 = 10,
		UInt16Nullable = 11,
		Int32 = 12,
		Int32Nullable = 13,
		Byte = 14,
		ByteNullable = 15,
		UInt32 = 16,
		UInt32Nullable = 17,
		Int64 = 18,
		Int64Nullable = 19,
		UInt64 = 20,
		UInt64Nullable = 21,
		Single = 22,
		SingleNullable = 23,
		Double = 24,
		DoubleNullable = 25,
		DateTime = 26,
		DateTimeNullable = 27,
		DateTimeOffset = 28,
		DateTimeOffsetNullable = 29,
		Decimal = 30,
		DecimalNullable = 31,
		Guid = 32,
		GuidNullable = 33,
		TimeSpan = 34,
		TimeSpanNullable = 35,
		BigInteger = 36,
		BigIntegerNullable = 37,
		Uri = 38,
		String = 39,
		Bytes = 40,
		DBNull = 41,
	};
}
