#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_60925D628256D7AC_METHOD_1_24183EE5C8C3E4B4_OFFSET UNITYSDK_OFFSET(0x11237D70)
#define CLASS_1_60925D628256D7AC_METHOD_1_4455A1F2E888156B_OFFSET UNITYSDK_OFFSET(0x11237CC0)
#define CLASS_1_60925D628256D7AC_METHOD_1_B7860418168904A3_OFFSET UNITYSDK_OFFSET(0x11237DF0)
#define CLASS_1_60925D628256D7AC_METHOD_1_ED8A6D2CAA2D836C_OFFSET UNITYSDK_OFFSET(0x11237C50)
#define CLASS_1_60925D628256D7AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x11237D30)
#define CLASS_1_60925D628256D7AC__CTOR_OFFSET UNITYSDK_OFFSET(0x11237D20)

inline static constexpr unsigned int Class_1_60925D628256D7AC_TypeDefinitionIndex = 83566;

class Class_1_60925D628256D7AC : public ::System::Object
{
public:
	static ::Class_1_60925D628256D7AC** StaticGet_Field_1_0()
	{
		return (::Class_1_60925D628256D7AC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60925D628256D7AC_TypeDefinitionIndex)->GetStaticField(0x36140);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60925D628256D7AC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60925D628256D7AC__CCTOR_OFFSET))();
	}

	::System::Void Method_1_ED8A6D2CAA2D836C(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_60925D628256D7AC_METHOD_1_ED8A6D2CAA2D836C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_4455A1F2E888156B(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_60925D628256D7AC_METHOD_1_4455A1F2E888156B_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* Method_1_24183EE5C8C3E4B4(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_60925D628256D7AC_METHOD_1_24183EE5C8C3E4B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7860418168904A3(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_60925D628256D7AC_METHOD_1_B7860418168904A3_OFFSET))(this, a1, a2, a3, a4);
	}
};
