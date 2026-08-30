#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace UnityEngine { class Gradient; }

#define MESSAGEPACK_UNITY_GRADIENTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B6662B0)
#define MESSAGEPACK_UNITY_GRADIENTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B665EB0)
#define MESSAGEPACK_UNITY_GRADIENTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B666860)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int GradientFormatter_TypeDefinitionIndex = 10119;

	class GradientFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Gradient* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Gradient*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Gradient* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_GRADIENTFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
