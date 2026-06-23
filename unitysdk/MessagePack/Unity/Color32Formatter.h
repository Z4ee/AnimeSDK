#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_COLOR32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1E2EB0)
#define MESSAGEPACK_UNITY_COLOR32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1E2E40)
#define MESSAGEPACK_UNITY_COLOR32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E30C0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Color32Formatter_TypeDefinitionIndex = 30223;

	class Color32Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLOR32FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Color32 value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Color32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLOR32FORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Color32 Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLOR32FORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
