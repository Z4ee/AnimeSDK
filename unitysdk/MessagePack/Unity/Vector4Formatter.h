#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7C2D00)
#define MESSAGEPACK_UNITY_VECTOR4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7C2CA0)
#define MESSAGEPACK_UNITY_VECTOR4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C2F40)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector4Formatter_TypeDefinitionIndex = 30848;

	class Vector4Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR4FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Vector4 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR4FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Vector4 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR4FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
