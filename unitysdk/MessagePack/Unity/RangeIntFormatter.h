#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RangeInt.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_RANGEINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D23D30)
#define MESSAGEPACK_UNITY_RANGEINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D23CD0)
#define MESSAGEPACK_UNITY_RANGEINTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D23FF0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RangeIntFormatter_TypeDefinitionIndex = 9869;

	class RangeIntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RANGEINTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::RangeInt value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::RangeInt, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RANGEINTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::RangeInt Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::RangeInt(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RANGEINTFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
