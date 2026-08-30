#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFDESERIALIZEHELPER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1666D0C0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefDeserializeHelper_TypeDefinitionIndex = 7252;

	class UnsafeRefDeserializeHelper : public ::System::Object
	{
	public:
		static ::System::Int32 Deserialize(::System::Byte& a1, ::System::Int32 a2, ::System::Boolean& a3)
		{
			return ((::System::Int32(*)(::System::Byte&, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFDESERIALIZEHELPER_DESERIALIZE_OFFSET))(a1, a2, a3);
		}
	};
}
