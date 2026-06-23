#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_568BBAF07CE1AAF7.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F821FF1AB41CB2F2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12772930)
#define CLASS_1_F821FF1AB41CB2F2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12772650)
#define CLASS_1_F821FF1AB41CB2F2__CTOR_OFFSET UNITYSDK_OFFSET(0x12772C20)

inline static constexpr unsigned int Class_1_F821FF1AB41CB2F2_TypeDefinitionIndex = 41910;

class Class_1_F821FF1AB41CB2F2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F821FF1AB41CB2F2__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_568BBAF07CE1AAF7 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_568BBAF07CE1AAF7, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F821FF1AB41CB2F2_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_568BBAF07CE1AAF7 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_568BBAF07CE1AAF7(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F821FF1AB41CB2F2_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
