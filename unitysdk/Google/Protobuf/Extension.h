#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IExtensionValue; }
namespace System { class Type; }

#define GOOGLE_PROTOBUF_EXTENSION_GET_FIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x1AA7A0F0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int Extension_TypeDefinitionIndex = 5364;

	class Extension : public ::System::Object
	{
	public:
		::System::Int32 _FieldNumber_k__BackingField; // 0x10

		::System::Int32 get_FieldNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSION_GET_FIELDNUMBER_OFFSET))(this);
		}
	};
}
