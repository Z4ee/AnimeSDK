#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_2060BEF305855C48.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_962E2DFF6794A4FC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1375F310)
#define CLASS_1_962E2DFF6794A4FC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1375EED0)
#define CLASS_1_962E2DFF6794A4FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1375F760)

inline static constexpr unsigned int Class_1_962E2DFF6794A4FC_TypeDefinitionIndex = 44230;

class Class_1_962E2DFF6794A4FC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_962E2DFF6794A4FC__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_2060BEF305855C48 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_2060BEF305855C48, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_962E2DFF6794A4FC_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_2060BEF305855C48 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_2060BEF305855C48(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_962E2DFF6794A4FC_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
