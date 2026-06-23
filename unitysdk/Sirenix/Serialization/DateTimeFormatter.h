#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/MinimalBaseFormatter_1.h"
#include "unitysdk/System/DateTime.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define SIRENIX_SERIALIZATION_DATETIMEFORMATTER_READ_OFFSET UNITYSDK_OFFSET(0x1E7F6CB0)
#define SIRENIX_SERIALIZATION_DATETIMEFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1E7F6E40)
#define SIRENIX_SERIALIZATION_DATETIMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F6F60)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DateTimeFormatter_TypeDefinitionIndex = 7449;

	class DateTimeFormatter : public ::Sirenix::Serialization::MinimalBaseFormatter_1<::System::DateTime>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DATETIMEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Read(::System::DateTime& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DATETIMEFORMATTER_READ_OFFSET))(this, value, reader);
		}

		::System::Void Write(::System::DateTime& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DATETIMEFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
