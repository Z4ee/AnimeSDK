#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F04BD3B7848119B0_2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1257A060)
#define CLASS_1_F04BD3B7848119B0_2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12579FE0)
#define CLASS_1_F04BD3B7848119B0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1257A0D0)

inline static constexpr unsigned int Class_1_F04BD3B7848119B0_2_TypeDefinitionIndex = 70984;

class Class_1_F04BD3B7848119B0_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_2__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_00CDCC1C68AC93EE a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_00CDCC1C68AC93EE, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_2_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_00CDCC1C68AC93EE Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_00CDCC1C68AC93EE(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_2_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
