#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_RECTINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D40E2B0)
#define MESSAGEPACK_UNITY_RECTINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D40E260)
#define MESSAGEPACK_UNITY_RECTINTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40E4C0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RectIntFormatter_TypeDefinitionIndex = 30127;

	class RectIntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTINTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::RectInt value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::RectInt, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTINTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::RectInt Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::RectInt(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTINTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
