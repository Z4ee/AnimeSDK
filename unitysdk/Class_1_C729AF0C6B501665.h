#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_C729AF0C6B501665_METHOD_1_203F33612E75CFC1_OFFSET UNITYSDK_OFFSET(0x1327C510)
#define CLASS_1_C729AF0C6B501665_METHOD_1_C461EACC9A16ADD9_OFFSET UNITYSDK_OFFSET(0x1327C480)
#define CLASS_1_C729AF0C6B501665_METHOD_1_C70C5A8F6A0D3518_OFFSET UNITYSDK_OFFSET(0x1327BF20)
#define CLASS_1_C729AF0C6B501665_METHOD_1_D5CE9F8A7366982B_OFFSET UNITYSDK_OFFSET(0x1327BA30)
#define CLASS_1_C729AF0C6B501665__CTOR_OFFSET UNITYSDK_OFFSET(0x1327C470)

inline static constexpr unsigned int Class_1_C729AF0C6B501665_TypeDefinitionIndex = 70223;

class Class_1_C729AF0C6B501665 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5CE9F8A7366982B(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_METHOD_1_D5CE9F8A7366982B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_C70C5A8F6A0D3518(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_METHOD_1_C70C5A8F6A0D3518_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C461EACC9A16ADD9(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_METHOD_1_C461EACC9A16ADD9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_203F33612E75CFC1(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C729AF0C6B501665_METHOD_1_203F33612E75CFC1_OFFSET))(this, a1, a2, a3);
	}
};
