#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_291;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_93877329A233EEA7_METHOD_1_34135264A5561995_OFFSET UNITYSDK_OFFSET(0x11C13020)
#define CLASS_1_93877329A233EEA7_METHOD_1_5EBE7327FDA78044_OFFSET UNITYSDK_OFFSET(0x11C13A10)
#define CLASS_1_93877329A233EEA7_METHOD_1_D885FA252AC5070C_OFFSET UNITYSDK_OFFSET(0x11C12890)
#define CLASS_1_93877329A233EEA7__CTOR_OFFSET UNITYSDK_OFFSET(0x11C13A00)

inline static constexpr unsigned int Class_1_93877329A233EEA7_TypeDefinitionIndex = 49385;

class Class_1_93877329A233EEA7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93877329A233EEA7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D885FA252AC5070C(::MessagePack::MessagePackWriter& a1, ::Class_0_16E4307DCC419505_291* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_0_16E4307DCC419505_291*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_93877329A233EEA7_METHOD_1_D885FA252AC5070C_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_291* Method_1_34135264A5561995(::Struct_2_174BD6D3EB04B2EE& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_93877329A233EEA7_METHOD_1_34135264A5561995_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_291* Method_1_5EBE7327FDA78044(::Struct_2_174BD6D3EB04B2EE& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_291*(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_93877329A233EEA7_METHOD_1_5EBE7327FDA78044_OFFSET))(this, a1, a2, a3);
	}
};
