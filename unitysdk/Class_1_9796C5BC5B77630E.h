#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_174;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_9796C5BC5B77630E_METHOD_1_73A6D8705698E25F_OFFSET UNITYSDK_OFFSET(0x176A05E0)
#define CLASS_1_9796C5BC5B77630E_METHOD_1_7682FCE5404DCF0D_OFFSET UNITYSDK_OFFSET(0x1769F3D0)
#define CLASS_1_9796C5BC5B77630E_METHOD_1_C8279E6C0C140B2B_OFFSET UNITYSDK_OFFSET(0x1769FC00)
#define CLASS_1_9796C5BC5B77630E__CTOR_OFFSET UNITYSDK_OFFSET(0x176A05D0)

inline static constexpr unsigned int Class_1_9796C5BC5B77630E_TypeDefinitionIndex = 60852;

class Class_1_9796C5BC5B77630E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9796C5BC5B77630E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7682FCE5404DCF0D(::MessagePack::MessagePackWriter& a1, ::Class_0_16E4307DCC419505_174* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_0_16E4307DCC419505_174*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_9796C5BC5B77630E_METHOD_1_7682FCE5404DCF0D_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_174* Method_1_C8279E6C0C140B2B(::Struct_2_174BD6D3EB04B2EE& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_174*(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_9796C5BC5B77630E_METHOD_1_C8279E6C0C140B2B_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_174* Method_1_73A6D8705698E25F(::Struct_2_174BD6D3EB04B2EE& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_174*(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_9796C5BC5B77630E_METHOD_1_73A6D8705698E25F_OFFSET))(this, a1, a2, a3);
	}
};
