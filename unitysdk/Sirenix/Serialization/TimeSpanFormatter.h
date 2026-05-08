#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define SIRENIX_SERIALIZATION_TIMESPANFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1C1471C0)
#define SIRENIX_SERIALIZATION_TIMESPANFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1C147340)
#define SIRENIX_SERIALIZATION_TIMESPANFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C147420)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int TimeSpanFormatter_TypeDefinitionIndex = 7356;

	class TimeSpanFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::TimeSpan>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TIMESPANFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::TimeSpan& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TIMESPANFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::System::TimeSpan& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_TIMESPANFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
