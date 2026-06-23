#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/System/DateTimeOffset.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define SIRENIX_SERIALIZATION_DATETIMEOFFSETFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1E7F6FC0)
#define SIRENIX_SERIALIZATION_DATETIMEOFFSETFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E7F7160)
#define SIRENIX_SERIALIZATION_DATETIMEOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F7260)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DateTimeOffsetFormatter_TypeDefinitionIndex = 7450;

	class DateTimeOffsetFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::DateTimeOffset>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DATETIMEOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::DateTimeOffset& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DATETIMEOFFSETFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::System::DateTimeOffset& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DATETIMEOFFSETFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
