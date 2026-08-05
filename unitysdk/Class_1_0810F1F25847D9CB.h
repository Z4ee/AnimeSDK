#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

class Class_1_DD623DBDE484C8A1;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_0810F1F25847D9CB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1285CCA0)
#define CLASS_1_0810F1F25847D9CB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1285CBF0)
#define CLASS_1_0810F1F25847D9CB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1285CD90)
#define CLASS_1_0810F1F25847D9CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1285CD80)

inline static constexpr unsigned int Class_1_0810F1F25847D9CB_TypeDefinitionIndex = 51000;

class Class_1_0810F1F25847D9CB : public ::System::Object
{
public:
	static ::Class_1_0810F1F25847D9CB** StaticGet_Field_1_0()
	{
		return (::Class_1_0810F1F25847D9CB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0810F1F25847D9CB_TypeDefinitionIndex)->GetStaticField(0x41940);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0810F1F25847D9CB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0810F1F25847D9CB__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Class_1_DD623DBDE484C8A1* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_1_DD623DBDE484C8A1*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_0810F1F25847D9CB_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DD623DBDE484C8A1* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Class_1_DD623DBDE484C8A1*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_0810F1F25847D9CB_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
