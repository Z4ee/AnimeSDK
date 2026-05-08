#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_QUATERNIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4B24A0)
#define MESSAGEPACK_UNITY_QUATERNIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4B2440)
#define MESSAGEPACK_UNITY_QUATERNIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B26E0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int QuaternionFormatter_TypeDefinitionIndex = 26622;

	class QuaternionFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_QUATERNIONFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::Quaternion value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Quaternion, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_QUATERNIONFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::Quaternion Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_QUATERNIONFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
