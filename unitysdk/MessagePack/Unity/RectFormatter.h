#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x181303C0)
#define MESSAGEPACK_UNITY_RECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18130350)
#define MESSAGEPACK_UNITY_RECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18130820)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RectFormatter_TypeDefinitionIndex = 9817;

	class RectFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Rect a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Rect, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rect Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
