#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_COLORFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1812C4A0)
#define MESSAGEPACK_UNITY_COLORFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1812C430)
#define MESSAGEPACK_UNITY_COLORFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1812C900)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int ColorFormatter_TypeDefinitionIndex = 9815;

	class ColorFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLORFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Color a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Color, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLORFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLORFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
