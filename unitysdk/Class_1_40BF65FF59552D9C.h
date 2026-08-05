#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole { class BubbleGroupPlayGraphContent; }

#define CLASS_1_40BF65FF59552D9C_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EF5F50)
#define CLASS_1_40BF65FF59552D9C_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EF5D10)
#define CLASS_1_40BF65FF59552D9C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EF61C0)
#define CLASS_1_40BF65FF59552D9C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF61B0)

inline static constexpr unsigned int Class_1_40BF65FF59552D9C_TypeDefinitionIndex = 64135;

class Class_1_40BF65FF59552D9C : public ::System::Object
{
public:
	static ::Class_1_40BF65FF59552D9C** StaticGet_Field_1_0()
	{
		return (::Class_1_40BF65FF59552D9C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40BF65FF59552D9C_TypeDefinitionIndex)->GetStaticField(0x38940);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40BF65FF59552D9C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40BF65FF59552D9C__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::BubbleGroupPlayGraphContent* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleGroupPlayGraphContent*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_40BF65FF59552D9C_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::BubbleGroupPlayGraphContent* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::BubbleGroupPlayGraphContent*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_40BF65FF59552D9C_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
