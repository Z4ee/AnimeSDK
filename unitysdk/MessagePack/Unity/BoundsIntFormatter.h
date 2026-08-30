#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundsInt.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B663AA0)
#define MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6637A0)
#define MESSAGEPACK_UNITY_BOUNDSINTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B663F70)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int BoundsIntFormatter_TypeDefinitionIndex = 10127;

	class BoundsIntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSINTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::BoundsInt a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::BoundsInt, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::BoundsInt Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::BoundsInt(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSINTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
