#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_COLOR32FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D27F100)
#define MESSAGEPACK_UNITY_COLOR32FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D27F080)
#define MESSAGEPACK_UNITY_COLOR32FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27F550)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Color32Formatter_TypeDefinitionIndex = 9841;

	class Color32Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLOR32FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Color32 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Color32, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLOR32FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Color32 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_COLOR32FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
