#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_B04487F8B1A141C9.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F038B3B620D2B296_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17820A50)
#define CLASS_1_F038B3B620D2B296_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x178209D0)
#define CLASS_1_F038B3B620D2B296__CTOR_OFFSET UNITYSDK_OFFSET(0x17820BA0)

inline static constexpr unsigned int Class_1_F038B3B620D2B296_TypeDefinitionIndex = 68537;

class Class_1_F038B3B620D2B296 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F038B3B620D2B296__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_B04487F8B1A141C9 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_B04487F8B1A141C9, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F038B3B620D2B296_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_B04487F8B1A141C9 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_B04487F8B1A141C9(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F038B3B620D2B296_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
