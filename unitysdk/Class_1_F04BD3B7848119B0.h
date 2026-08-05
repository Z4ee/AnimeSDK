#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_D19F1A95B589BD6B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F04BD3B7848119B0_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14140250)
#define CLASS_1_F04BD3B7848119B0_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x141401D0)
#define CLASS_1_F04BD3B7848119B0__CTOR_OFFSET UNITYSDK_OFFSET(0x141402E0)

inline static constexpr unsigned int Class_1_F04BD3B7848119B0_TypeDefinitionIndex = 43707;

class Class_1_F04BD3B7848119B0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_D19F1A95B589BD6B a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_D19F1A95B589BD6B, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_D19F1A95B589BD6B Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_D19F1A95B589BD6B(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F04BD3B7848119B0_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
