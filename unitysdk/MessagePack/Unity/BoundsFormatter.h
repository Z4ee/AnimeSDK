#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_BOUNDSFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D1F110)
#define MESSAGEPACK_UNITY_BOUNDSFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D1EEC0)
#define MESSAGEPACK_UNITY_BOUNDSFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F500)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int BoundsFormatter_TypeDefinitionIndex = 9854;

	class BoundsFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Bounds value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Bounds, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Bounds Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
