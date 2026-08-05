#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_151B8F817F53A5A5.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_DE30066922DA69B4_1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x164B69E0)
#define CLASS_1_DE30066922DA69B4_1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x164B6550)
#define CLASS_1_DE30066922DA69B4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x164B6EB0)

inline static constexpr unsigned int Class_1_DE30066922DA69B4_1_TypeDefinitionIndex = 75670;

class Class_1_DE30066922DA69B4_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE30066922DA69B4_1__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_151B8F817F53A5A5 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_151B8F817F53A5A5, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DE30066922DA69B4_1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_151B8F817F53A5A5 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_151B8F817F53A5A5(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_DE30066922DA69B4_1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
