#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR3FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF79A50)
#define MESSAGEPACK_UNITY_VECTOR3FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF799E0)
#define MESSAGEPACK_UNITY_VECTOR3FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF79310)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector3Formatter_TypeDefinitionIndex = 10106;

	class Vector3Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR3FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Vector3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR3FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR3FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
