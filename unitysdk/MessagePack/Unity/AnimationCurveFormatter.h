#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace UnityEngine { class AnimationCurve; }

#define MESSAGEPACK_UNITY_ANIMATIONCURVEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A8FE040)
#define MESSAGEPACK_UNITY_ANIMATIONCURVEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A8FDD60)
#define MESSAGEPACK_UNITY_ANIMATIONCURVEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FE4D0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int AnimationCurveFormatter_TypeDefinitionIndex = 26601;

	class AnimationCurveFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_ANIMATIONCURVEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::AnimationCurve* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::AnimationCurve*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_ANIMATIONCURVEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::AnimationCurve* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_ANIMATIONCURVEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
