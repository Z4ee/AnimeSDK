#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR3INTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF79E40)
#define MESSAGEPACK_UNITY_VECTOR3INTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF79DE0)
#define MESSAGEPACK_UNITY_VECTOR3INTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF79350)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector3IntFormatter_TypeDefinitionIndex = 10124;

	class Vector3IntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR3INTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Vector3Int a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector3Int, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR3INTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3Int Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR3INTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
