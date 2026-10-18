#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_FBC50176498126D8_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6ED720)
#define CLASS_1_FBC50176498126D8_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6ED650)
#define CLASS_1_FBC50176498126D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EDBF0)

inline static constexpr unsigned int Class_1_FBC50176498126D8_TypeDefinitionIndex = 37204;

class Class_1_FBC50176498126D8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBC50176498126D8__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_331ACDD60B60D2E3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_331ACDD60B60D2E3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_FBC50176498126D8_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_331ACDD60B60D2E3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_331ACDD60B60D2E3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_FBC50176498126D8_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
