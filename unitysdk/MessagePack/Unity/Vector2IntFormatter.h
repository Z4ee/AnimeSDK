#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B32BE80)
#define MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B32BE40)
#define MESSAGEPACK_UNITY_VECTOR2INTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32C020)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector2IntFormatter_TypeDefinitionIndex = 27100;

	class Vector2IntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2INTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Vector2Int value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector2Int, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Vector2Int Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
