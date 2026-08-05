#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_33C4301C87739F2C.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_134B10DEF2730813_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A2C3D80)
#define CLASS_1_134B10DEF2730813_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A2C3970)
#define CLASS_1_134B10DEF2730813__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C41F0)

inline static constexpr unsigned int Class_1_134B10DEF2730813_TypeDefinitionIndex = 55203;

class Class_1_134B10DEF2730813 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_134B10DEF2730813__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_33C4301C87739F2C a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_33C4301C87739F2C, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_134B10DEF2730813_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_33C4301C87739F2C Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_33C4301C87739F2C(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_134B10DEF2730813_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
