#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientColorKey.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF71EF0)
#define MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF71D20)
#define MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF722B0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientColorKeyFormatter_TypeDefinitionIndex = 10117;

	class GradientColorKeyFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::GradientColorKey a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::GradientColorKey, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GradientColorKey Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::GradientColorKey(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTCOLORKEYFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
