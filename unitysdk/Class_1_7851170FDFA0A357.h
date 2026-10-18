#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_7851170FDFA0A357_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C5F9E60)
#define CLASS_1_7851170FDFA0A357_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C5F9D90)
#define CLASS_1_7851170FDFA0A357__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA1A0)

inline static constexpr unsigned int Class_1_7851170FDFA0A357_TypeDefinitionIndex = 37206;

class Class_1_7851170FDFA0A357 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7851170FDFA0A357__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::MVector2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::MVector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7851170FDFA0A357_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector2 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7851170FDFA0A357_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
