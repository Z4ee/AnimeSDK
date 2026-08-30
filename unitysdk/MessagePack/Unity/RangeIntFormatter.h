#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RangeInt.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_RANGEINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF747D0)
#define MESSAGEPACK_UNITY_RANGEINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF74770)
#define MESSAGEPACK_UNITY_RANGEINTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF74A90)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RangeIntFormatter_TypeDefinitionIndex = 10125;

	class RangeIntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RANGEINTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::RangeInt a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::RangeInt, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RANGEINTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::RangeInt Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::RangeInt(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RANGEINTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
