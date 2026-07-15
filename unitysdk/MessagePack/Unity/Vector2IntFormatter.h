#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D2883D0)
#define MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D288370)
#define MESSAGEPACK_UNITY_VECTOR2INTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D287FF0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Vector2IntFormatter_TypeDefinitionIndex = 9844;

	class Vector2IntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2INTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Vector2Int a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Vector2Int, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2Int Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_VECTOR2INTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
