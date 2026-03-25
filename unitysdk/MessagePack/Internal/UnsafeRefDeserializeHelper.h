#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFDESERIALIZEHELPER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2BD90)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefDeserializeHelper_TypeDefinitionIndex = 9160;

	class UnsafeRefDeserializeHelper : public ::System::Object
	{
	public:
		static ::System::Int32 Deserialize(::System::Byte& input, ::System::Int32 length, ::System::Boolean& output)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFDESERIALIZEHELPER_DESERIALIZE_OFFSET))(input, length, output);
		}
	};
}
