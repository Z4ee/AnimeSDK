#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_9A57456E759DE2E2.h"
#include "unitysdk/Struct_2_C32040AFC39CAE18.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class Class_1_89C9471D0A0E4933;

#define CLASS_1_C90BC2407836A488_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D8E140)
#define CLASS_1_C90BC2407836A488_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D8DF70)
#define CLASS_1_C90BC2407836A488__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8E370)

inline static constexpr unsigned int Class_1_C90BC2407836A488_TypeDefinitionIndex = 50032;

class Class_1_C90BC2407836A488 : public ::System::Object
{
public:
	::Class_1_89C9471D0A0E4933<::Struct_2_C32040AFC39CAE18>* Field_1_2; // 0x10
	::Class_1_89C9471D0A0E4933<::Struct_2_9A57456E759DE2E2>* Field_1_1; // 0x18
	::Class_1_89C9471D0A0E4933<::Struct_2_E89D96144D6E93F8>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C90BC2407836A488__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_E89D96144D6E93F8_1 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E89D96144D6E93F8_1, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C90BC2407836A488_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_E89D96144D6E93F8_1 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_E89D96144D6E93F8_1(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C90BC2407836A488_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
