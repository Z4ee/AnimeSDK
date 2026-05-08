#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_9A57456E759DE2E2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_FACBD453F6466229_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F641E0)
#define CLASS_1_FACBD453F6466229_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13F63D90)
#define CLASS_1_FACBD453F6466229__CTOR_OFFSET UNITYSDK_OFFSET(0x13F64640)

inline static constexpr unsigned int Class_1_FACBD453F6466229_TypeDefinitionIndex = 66123;

class Class_1_FACBD453F6466229 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FACBD453F6466229__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_9A57456E759DE2E2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_9A57456E759DE2E2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_FACBD453F6466229_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_9A57456E759DE2E2 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_9A57456E759DE2E2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_FACBD453F6466229_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
