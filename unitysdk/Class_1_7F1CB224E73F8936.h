#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole::Config { class InputEnableInfo; }

#define CLASS_1_7F1CB224E73F8936_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14631320)
#define CLASS_1_7F1CB224E73F8936_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14631290)
#define CLASS_1_7F1CB224E73F8936__CCTOR_OFFSET UNITYSDK_OFFSET(0x146313E0)
#define CLASS_1_7F1CB224E73F8936__CTOR_OFFSET UNITYSDK_OFFSET(0x146313D0)

inline static constexpr unsigned int Class_1_7F1CB224E73F8936_TypeDefinitionIndex = 73768;

class Class_1_7F1CB224E73F8936 : public ::System::Object
{
public:
	static ::Class_1_7F1CB224E73F8936** StaticGet_Field_1_0()
	{
		return (::Class_1_7F1CB224E73F8936**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F1CB224E73F8936_TypeDefinitionIndex)->GetStaticField(0x3BF70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F1CB224E73F8936__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F1CB224E73F8936__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::Config::InputEnableInfo* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::Config::InputEnableInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7F1CB224E73F8936_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::InputEnableInfo* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::Config::InputEnableInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7F1CB224E73F8936_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
