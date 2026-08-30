#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF793E0)
#define MESSAGEPACK_UNITY_VECTOR2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF79360)
#define MESSAGEPACK_UNITY_VECTOR2FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF79300)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector2Formatter_TypeDefinitionIndex = 10105;

	class Vector2Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Vector2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
