#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace UnityEngine { class RectOffset; }

#define MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF75500)
#define MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF75460)
#define MESSAGEPACK_UNITY_RECTOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF75930)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RectOffsetFormatter_TypeDefinitionIndex = 10121;

	class RectOffsetFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::RectOffset* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::RectOffset*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::RectOffset* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
