#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackPrimitives_Decoders_IReadInt64; }
namespace MessagePack { class MessagePackPrimitives_Decoders_IReadUInt64; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB95CC0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_TypeDefinitionIndex = 7174;

	class MessagePackPrimitives_Decoders : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MessagePack::MessagePackPrimitives_Decoders_IReadUInt64*>** StaticGet_UInt64JumpTable()
		{
			return (::Il2CppArray<::MessagePack::MessagePackPrimitives_Decoders_IReadUInt64*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_TypeDefinitionIndex)->GetStaticField(0x4C3C0);
		}
		static ::Il2CppArray<::MessagePack::MessagePackPrimitives_Decoders_IReadInt64*>** StaticGet_Int64JumpTable()
		{
			return (::Il2CppArray<::MessagePack::MessagePackPrimitives_Decoders_IReadInt64*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackPrimitives_Decoders_TypeDefinitionIndex)->GetStaticField(0x4C3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS__CCTOR_OFFSET))();
		}
	};
}
