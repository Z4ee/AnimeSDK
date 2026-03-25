#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundsInt.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D1F770)
#define MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D1F510)
#define MESSAGEPACK_UNITY_BOUNDSINTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1FB90)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int BoundsIntFormatter_TypeDefinitionIndex = 9871;

	class BoundsIntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSINTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::BoundsInt value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::BoundsInt, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::BoundsInt Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::BoundsInt(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
