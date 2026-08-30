#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GradientMode.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF72C90)
#define MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF72C80)
#define MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF72D30)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientModeFormatter_TypeDefinitionIndex = 10113;

	class GradientModeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::GradientMode a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::GradientMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GradientMode Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::GradientMode(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTMODEFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
