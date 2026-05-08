#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/PrimitiveObjectFormatter.h"
#include "unitysdk/MessagePack/MessagePackReader.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System { class Object; }

#define MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER_PRIMITIVEOBJECTWITHEXPANDOMAPS_DESERIALIZEMAP_OFFSET UNITYSDK_OFFSET(0x1AF28B70)
#define MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER_PRIMITIVEOBJECTWITHEXPANDOMAPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF29030)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int ExpandoObjectResolver_PrimitiveObjectWithExpandoMaps_TypeDefinitionIndex = 28242;

	class ExpandoObjectResolver_PrimitiveObjectWithExpandoMaps : public ::MessagePack::Formatters::PrimitiveObjectFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER_PRIMITIVEOBJECTWITHEXPANDOMAPS__CTOR_OFFSET))(this);
		}

		::System::Object* DeserializeMap(::MessagePack::MessagePackReader& reader, ::System::Int32 length, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::System::Int32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_EXPANDOOBJECTRESOLVER_PRIMITIVEOBJECTWITHEXPANDOMAPS_DESERIALIZEMAP_OFFSET))(this, reader, length, options);
		}
	};
}
