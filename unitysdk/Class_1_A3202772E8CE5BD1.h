#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole { class BubbleGroupPlayGraphContent; }

#define CLASS_1_A3202772E8CE5BD1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x10F31340)
#define CLASS_1_A3202772E8CE5BD1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x10F310F0)
#define CLASS_1_A3202772E8CE5BD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F315B0)
#define CLASS_1_A3202772E8CE5BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x10F315A0)

inline static constexpr unsigned int Class_1_A3202772E8CE5BD1_TypeDefinitionIndex = 62280;

class Class_1_A3202772E8CE5BD1 : public ::System::Object
{
public:
	static ::Class_1_A3202772E8CE5BD1** StaticGet_Field_1_0()
	{
		return (::Class_1_A3202772E8CE5BD1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3202772E8CE5BD1_TypeDefinitionIndex)->GetStaticField(0x36210);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3202772E8CE5BD1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3202772E8CE5BD1__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::BubbleGroupPlayGraphContent* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleGroupPlayGraphContent*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A3202772E8CE5BD1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::BubbleGroupPlayGraphContent* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::BubbleGroupPlayGraphContent*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A3202772E8CE5BD1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
