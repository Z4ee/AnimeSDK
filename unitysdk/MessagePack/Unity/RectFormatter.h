#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D24070)
#define MESSAGEPACK_UNITY_RECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D24000)
#define MESSAGEPACK_UNITY_RECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D244D0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RectFormatter_TypeDefinitionIndex = 9855;

	class RectFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Rect value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Rect, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Rect Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
