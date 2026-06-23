#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

class Class_1_DD623DBDE484C8A1;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F0A747821C140515_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A2061B0)
#define CLASS_1_F0A747821C140515_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A206100)
#define CLASS_1_F0A747821C140515__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2062A0)
#define CLASS_1_F0A747821C140515__CTOR_OFFSET UNITYSDK_OFFSET(0x1A206290)

inline static constexpr unsigned int Class_1_F0A747821C140515_TypeDefinitionIndex = 53193;

class Class_1_F0A747821C140515 : public ::System::Object
{
public:
	static ::Class_1_F0A747821C140515** StaticGet_Field_1_0()
	{
		return (::Class_1_F0A747821C140515**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0A747821C140515_TypeDefinitionIndex)->GetStaticField(0x36230);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0A747821C140515__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0A747821C140515__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Class_1_DD623DBDE484C8A1* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_1_DD623DBDE484C8A1*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F0A747821C140515_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DD623DBDE484C8A1* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Class_1_DD623DBDE484C8A1*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F0A747821C140515_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
