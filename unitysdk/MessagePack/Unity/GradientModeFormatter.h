#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientMode.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D221F0)
#define MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D221E0)
#define MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D22290)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientModeFormatter_TypeDefinitionIndex = 9857;

	class GradientModeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::GradientMode value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::GradientMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::GradientMode Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::GradientMode(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
