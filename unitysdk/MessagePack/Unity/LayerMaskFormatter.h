#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_LAYERMASKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D281F30)
#define MESSAGEPACK_UNITY_LAYERMASKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D281EE0)
#define MESSAGEPACK_UNITY_LAYERMASKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D282120)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int LayerMaskFormatter_TypeDefinitionIndex = 9843;

	class LayerMaskFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_LAYERMASKFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::LayerMask a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::LayerMask, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_LAYERMASKFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::LayerMask Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_LAYERMASKFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
