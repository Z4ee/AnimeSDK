#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_C729AF0C6B501665_1_METHOD_1_203F33612E75CFC1_OFFSET UNITYSDK_OFFSET(0x1390F270)
#define CLASS_1_C729AF0C6B501665_1_METHOD_1_C461EACC9A16ADD9_OFFSET UNITYSDK_OFFSET(0x1390F1E0)
#define CLASS_1_C729AF0C6B501665_1_METHOD_1_C70C5A8F6A0D3518_OFFSET UNITYSDK_OFFSET(0x1390EC80)
#define CLASS_1_C729AF0C6B501665_1_METHOD_1_D5CE9F8A7366982B_OFFSET UNITYSDK_OFFSET(0x1390E790)
#define CLASS_1_C729AF0C6B501665_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1390F1D0)

inline static constexpr unsigned int Class_1_C729AF0C6B501665_1_TypeDefinitionIndex = 75764;

class Class_1_C729AF0C6B501665_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5CE9F8A7366982B(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_1_METHOD_1_D5CE9F8A7366982B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_C70C5A8F6A0D3518(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_1_METHOD_1_C70C5A8F6A0D3518_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C461EACC9A16ADD9(::MessagePack::MessagePackWriter& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_174BD6D3EB04B2EE&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_1_METHOD_1_C461EACC9A16ADD9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_203F33612E75CFC1(::MessagePack::MessagePackReader& a1, ::Struct_2_174BD6D3EB04B2EE& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_174BD6D3EB04B2EE&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_1_METHOD_1_203F33612E75CFC1_OFFSET))(this, a1, a2, a3);
	}
};
