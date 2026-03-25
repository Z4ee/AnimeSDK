#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D216E0)
#define MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D21560)
#define MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D21A30)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientColorKeyFormatter_TypeDefinitionIndex = 9861;

	class GradientColorKeyFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::GradientColorKey value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::GradientColorKey, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::GradientColorKey Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::GradientColorKey(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
