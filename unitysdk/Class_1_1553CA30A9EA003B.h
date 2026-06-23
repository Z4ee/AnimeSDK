#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_291;
class Class_1_1BDCF298D6EFEE00;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_1553CA30A9EA003B_METHOD_1_3A882C947AE1E8B8_OFFSET UNITYSDK_OFFSET(0x15B0C0B0)
#define CLASS_1_1553CA30A9EA003B_METHOD_1_3FCA0652B4B9043B_OFFSET UNITYSDK_OFFSET(0x15B0BE90)

inline static constexpr unsigned int Class_1_1553CA30A9EA003B_TypeDefinitionIndex = 59787;

class Class_1_1553CA30A9EA003B : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_291* Method_1_3FCA0652B4B9043B(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_1553CA30A9EA003B_METHOD_1_3FCA0652B4B9043B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3A882C947AE1E8B8(::MessagePack::MessagePackWriter& a1, ::Class_1_1BDCF298D6EFEE00* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::Class_1_1BDCF298D6EFEE00*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_1553CA30A9EA003B_METHOD_1_3A882C947AE1E8B8_OFFSET))(a1, a2, a3);
	}
};
