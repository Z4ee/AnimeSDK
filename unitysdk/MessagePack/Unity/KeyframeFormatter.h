#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_KEYFRAMEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D22310)
#define MESSAGEPACK_UNITY_KEYFRAMEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D222A0)
#define MESSAGEPACK_UNITY_KEYFRAMEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D22780)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int KeyframeFormatter_TypeDefinitionIndex = 9858;

	class KeyframeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_KEYFRAMEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Keyframe value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Keyframe, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_KEYFRAMEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Keyframe Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_KEYFRAMEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
