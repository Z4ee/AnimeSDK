#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F04BD3B7848119B0_1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1614E050)
#define CLASS_1_F04BD3B7848119B0_1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1614DFD0)
#define CLASS_1_F04BD3B7848119B0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1614E0C0)

inline static constexpr unsigned int Class_1_F04BD3B7848119B0_1_TypeDefinitionIndex = 70684;

class Class_1_F04BD3B7848119B0_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_1__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_00CDCC1C68AC93EE_1 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_00CDCC1C68AC93EE_1, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_00CDCC1C68AC93EE_1 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_00CDCC1C68AC93EE_1(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
