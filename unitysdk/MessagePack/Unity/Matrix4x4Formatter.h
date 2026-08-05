#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB75520)
#define MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB75430)
#define MESSAGEPACK_UNITY_MATRIX4X4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB75970)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Matrix4x4Formatter_TypeDefinitionIndex = 30224;

	class Matrix4x4Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MATRIX4X4FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Matrix4x4 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Matrix4x4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Matrix4x4 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
