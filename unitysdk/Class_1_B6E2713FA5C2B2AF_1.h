#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_151B8F817F53A5A5.h"
#include "unitysdk/Struct_2_7F39F8692AFCECD1.h"
#include "unitysdk/Struct_2_94A0E3A9A04C3F23.h"
#include "unitysdk/Struct_2_D19F1A95B589BD6B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class Class_1_534AF681CC2BD5FD_235;

#define CLASS_1_B6E2713FA5C2B2AF_1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13FDE300)
#define CLASS_1_B6E2713FA5C2B2AF_1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13FDE020)
#define CLASS_1_B6E2713FA5C2B2AF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13FDE880)

inline static constexpr unsigned int Class_1_B6E2713FA5C2B2AF_1_TypeDefinitionIndex = 77339;

class Class_1_B6E2713FA5C2B2AF_1 : public ::System::Object
{
public:
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_D19F1A95B589BD6B>* Field_1_0; // 0x10
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_7F39F8692AFCECD1>* Field_1_1; // 0x18
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_151B8F817F53A5A5>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E2713FA5C2B2AF_1__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_94A0E3A9A04C3F23 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_94A0E3A9A04C3F23, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B6E2713FA5C2B2AF_1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_94A0E3A9A04C3F23 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_94A0E3A9A04C3F23(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B6E2713FA5C2B2AF_1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
