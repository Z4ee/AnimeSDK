#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RectInt.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_RECTINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF74FF0)
#define MESSAGEPACK_UNITY_RECTINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF74F80)
#define MESSAGEPACK_UNITY_RECTINTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF75450)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int RectIntFormatter_TypeDefinitionIndex = 10126;

	class RectIntFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTINTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::RectInt a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::RectInt, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTINTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::RectInt Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::RectInt(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_RECTINTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
