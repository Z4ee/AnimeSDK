#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_BOUNDSFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1812B4C0)
#define MESSAGEPACK_UNITY_BOUNDSFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1812B260)
#define MESSAGEPACK_UNITY_BOUNDSFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1812B8B0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int BoundsFormatter_TypeDefinitionIndex = 9816;

	class BoundsFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Bounds a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Bounds, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSFORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_BOUNDSFORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
