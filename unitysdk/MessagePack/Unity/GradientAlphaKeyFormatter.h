#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientAlphaKey.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_GRADIENTALPHAKEYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D21270)
#define MESSAGEPACK_UNITY_GRADIENTALPHAKEYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D21210)
#define MESSAGEPACK_UNITY_GRADIENTALPHAKEYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D21550)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientAlphaKeyFormatter_TypeDefinitionIndex = 9862;

	class GradientAlphaKeyFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTALPHAKEYFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::GradientAlphaKey value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::GradientAlphaKey, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTALPHAKEYFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::GradientAlphaKey Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::GradientAlphaKey(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTALPHAKEYFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
