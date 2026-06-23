#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace UnityEngine { class RectOffset; }

#define MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D5269B0)
#define MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D526930)
#define MESSAGEPACK_UNITY_RECTOFFSETFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D526BC0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RectOffsetFormatter_TypeDefinitionIndex = 30091;

	class RectOffsetFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTOFFSETFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::RectOffset* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::RectOffset*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::RectOffset* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTOFFSETFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
