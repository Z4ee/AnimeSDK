#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_COLORFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1FEDC0)
#define MESSAGEPACK_UNITY_COLORFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1FED60)
#define MESSAGEPACK_UNITY_COLORFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1FF000)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int ColorFormatter_TypeDefinitionIndex = 27069;

	class ColorFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLORFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Color value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Color, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLORFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Color Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLORFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
