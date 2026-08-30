#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_WRAPMODEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B66E2A0)
#define MESSAGEPACK_UNITY_WRAPMODEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B66E290)
#define MESSAGEPACK_UNITY_WRAPMODEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66CF20)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int WrapModeFormatter_TypeDefinitionIndex = 10112;

	class WrapModeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_WRAPMODEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::WrapMode a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::WrapMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_WRAPMODEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::WrapMode Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_WRAPMODEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
