#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_58835A4E6D174C64_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x10CD6E30)
#define CLASS_1_58835A4E6D174C64_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x10CD6DB0)
#define CLASS_1_58835A4E6D174C64__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CD6ED0)
#define CLASS_1_58835A4E6D174C64__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD6EC0)

inline static constexpr unsigned int Class_1_58835A4E6D174C64_TypeDefinitionIndex = 56165;

class Class_1_58835A4E6D174C64 : public ::System::Object
{
public:
	static ::Class_1_58835A4E6D174C64** StaticGet_Field_1_0()
	{
		return (::Class_1_58835A4E6D174C64**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58835A4E6D174C64_TypeDefinitionIndex)->GetStaticField(0x41930);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58835A4E6D174C64__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58835A4E6D174C64__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::BubbleSpeakerPair a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleSpeakerPair, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_58835A4E6D174C64_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::BubbleSpeakerPair Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::BubbleSpeakerPair(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_58835A4E6D174C64_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
