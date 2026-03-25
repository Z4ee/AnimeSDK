#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace UnityEngine { class Gradient; }

#define MESSAGEPACK_UNITY_GRADIENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D21D40)
#define MESSAGEPACK_UNITY_GRADIENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D21A40)
#define MESSAGEPACK_UNITY_GRADIENTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D221D0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientFormatter_TypeDefinitionIndex = 9863;

	class GradientFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Gradient* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Gradient*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Gradient* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
