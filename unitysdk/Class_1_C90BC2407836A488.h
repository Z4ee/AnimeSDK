#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_2060BEF305855C48.h"
#include "unitysdk/Struct_2_94A0E3A9A04C3F23.h"
#include "unitysdk/Struct_2_C32040AFC39CAE18.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class Class_1_534AF681CC2BD5FD_235;

#define CLASS_1_C90BC2407836A488_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF2006C0)
#define CLASS_1_C90BC2407836A488_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xF2004E0)
#define CLASS_1_C90BC2407836A488__CTOR_OFFSET UNITYSDK_OFFSET(0xF2008F0)

inline static constexpr unsigned int Class_1_C90BC2407836A488_TypeDefinitionIndex = 82542;

class Class_1_C90BC2407836A488 : public ::System::Object
{
public:
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_2060BEF305855C48>* Field_1_1; // 0x10
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_94A0E3A9A04C3F23>* Field_1_2; // 0x18
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_C32040AFC39CAE18>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C90BC2407836A488__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_E89D96144D6E93F8 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E89D96144D6E93F8, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C90BC2407836A488_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_E89D96144D6E93F8 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_E89D96144D6E93F8(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C90BC2407836A488_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
