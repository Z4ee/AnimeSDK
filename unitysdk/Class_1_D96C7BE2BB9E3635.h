#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_D96C7BE2BB9E3635_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FE0280)
#define CLASS_1_D96C7BE2BB9E3635_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FE0200)
#define CLASS_1_D96C7BE2BB9E3635__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FE0320)
#define CLASS_1_D96C7BE2BB9E3635__CTOR_OFFSET UNITYSDK_OFFSET(0x11FE0310)

inline static constexpr unsigned int Class_1_D96C7BE2BB9E3635_TypeDefinitionIndex = 64765;

class Class_1_D96C7BE2BB9E3635 : public ::System::Object
{
public:
	static ::Class_1_D96C7BE2BB9E3635** StaticGet_Field_1_0()
	{
		return (::Class_1_D96C7BE2BB9E3635**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96C7BE2BB9E3635_TypeDefinitionIndex)->GetStaticField(0x36220);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D96C7BE2BB9E3635__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96C7BE2BB9E3635__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::BubbleSpeakerPair a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleSpeakerPair, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_D96C7BE2BB9E3635_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::BubbleSpeakerPair Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::BubbleSpeakerPair(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_D96C7BE2BB9E3635_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
