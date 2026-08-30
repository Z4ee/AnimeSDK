#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF7A240)
#define MESSAGEPACK_UNITY_VECTOR4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF7A1D0)
#define MESSAGEPACK_UNITY_VECTOR4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF79320)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector4Formatter_TypeDefinitionIndex = 10107;

	class Vector4Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR4FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Vector4 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR4FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector4 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR4FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
