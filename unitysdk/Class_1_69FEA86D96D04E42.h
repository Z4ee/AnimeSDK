#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_33C4301C87739F2C.h"
#include "unitysdk/Struct_2_5D2BAC4205773FE1.h"
#include "unitysdk/Struct_2_ADAAACC33621CB14.h"
#include "unitysdk/Struct_2_B04487F8B1A141C9.h"
#include "unitysdk/Struct_2_DD19C571EC5F66F2.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class ListFormatter_1; }

#define CLASS_1_69FEA86D96D04E42_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DD4930)
#define CLASS_1_69FEA86D96D04E42_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DD47D0)
#define CLASS_1_69FEA86D96D04E42__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD4B50)

inline static constexpr unsigned int Class_1_69FEA86D96D04E42_TypeDefinitionIndex = 66600;

class Class_1_69FEA86D96D04E42 : public ::System::Object
{
public:
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_5D2BAC4205773FE1>* Field_1_6; // 0x10
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_DD19C571EC5F66F2>* Field_1_0; // 0x18
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_B04487F8B1A141C9>* Field_1_1; // 0x20
	::MessagePack::Formatters::ListFormatter_1<::Struct_2_33C4301C87739F2C>* Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69FEA86D96D04E42__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_ADAAACC33621CB14 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_ADAAACC33621CB14, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_69FEA86D96D04E42_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_ADAAACC33621CB14 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_ADAAACC33621CB14(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_69FEA86D96D04E42_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
