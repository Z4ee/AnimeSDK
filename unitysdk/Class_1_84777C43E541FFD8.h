#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_174;
class Class_1_1BDCF298D6EFEE00;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_84777C43E541FFD8_METHOD_1_17CB78E77DFDA996_OFFSET UNITYSDK_OFFSET(0x109860A0)
#define CLASS_1_84777C43E541FFD8_METHOD_1_1EFC90D08056085E_OFFSET UNITYSDK_OFFSET(0x10985E80)

inline static constexpr unsigned int Class_1_84777C43E541FFD8_TypeDefinitionIndex = 49411;

class Class_1_84777C43E541FFD8 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_174* Method_1_1EFC90D08056085E(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_174*(*)(::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_84777C43E541FFD8_METHOD_1_1EFC90D08056085E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_17CB78E77DFDA996(::MessagePack::MessagePackWriter& a1, ::Class_1_1BDCF298D6EFEE00* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::Class_1_1BDCF298D6EFEE00*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_84777C43E541FFD8_METHOD_1_17CB78E77DFDA996_OFFSET))(a1, a2, a3);
	}
};
