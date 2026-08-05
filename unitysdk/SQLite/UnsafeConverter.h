#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SQLITE_UNSAFECONVERTER_TOINT_OFFSET UNITYSDK_OFFSET(0x1EA06AD0)
#define SQLITE_UNSAFECONVERTER_TOLONG_OFFSET UNITYSDK_OFFSET(0x1EA06AE0)
#define SQLITE_UNSAFECONVERTER_TOUINT_OFFSET UNITYSDK_OFFSET(0x1EA07690)
#define SQLITE_UNSAFECONVERTER_TOULONG_OFFSET UNITYSDK_OFFSET(0x1EA07680)

namespace SQLite
{
	inline static constexpr unsigned int UnsafeConverter_TypeDefinitionIndex = 39154;

	class UnsafeConverter : public ::System::Object
	{
	public:
		static ::System::Int64 ToLong(::System::UInt64 value)
		{
			return ((::System::Int64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SQLITE_UNSAFECONVERTER_TOLONG_OFFSET))(value);
		}

		static ::System::UInt64 ToULong(::System::Int64 value)
		{
			return ((::System::UInt64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SQLITE_UNSAFECONVERTER_TOULONG_OFFSET))(value);
		}

		static ::System::Int32 ToInt(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SQLITE_UNSAFECONVERTER_TOINT_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt(::System::Int32 value)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_UNSAFECONVERTER_TOUINT_OFFSET))(value);
		}
	};
}
