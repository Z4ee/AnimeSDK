#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_WRAPMODEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D29C30)
#define MESSAGEPACK_UNITY_WRAPMODEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D29C20)
#define MESSAGEPACK_UNITY_WRAPMODEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D288D0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int WrapModeFormatter_TypeDefinitionIndex = 9856;

	class WrapModeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_WRAPMODEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::UnityEngine::WrapMode value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::WrapMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_WRAPMODEFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::UnityEngine::WrapMode Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::UnityEngine::WrapMode(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_WRAPMODEFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
