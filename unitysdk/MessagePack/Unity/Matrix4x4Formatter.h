#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1812EE50)
#define MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1812ED30)
#define MESSAGEPACK_UNITY_MATRIX4X4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1812FB30)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int Matrix4x4Formatter_TypeDefinitionIndex = 9822;

	class Matrix4x4Formatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MATRIX4X4FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::UnityEngine::Matrix4x4 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::UnityEngine::Matrix4x4, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Matrix4x4 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_MATRIX4X4FORMATTER_DESERIALIZE_OFFSET))(this, a1, a2);
		}
	};
}
