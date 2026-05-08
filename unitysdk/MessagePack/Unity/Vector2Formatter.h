#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B45A090)
#define MESSAGEPACK_UNITY_VECTOR2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B45A030)
#define MESSAGEPACK_UNITY_VECTOR2FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45A250)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector2Formatter_TypeDefinitionIndex = 26682;

	class Vector2Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Vector2 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Vector2 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
