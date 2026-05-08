#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_A0A54F727B666678_METHOD_1_36A7DFCCA1B36841_OFFSET UNITYSDK_OFFSET(0x107F4BE0)
#define CLASS_1_A0A54F727B666678_METHOD_1_4F9C62003C31EAFB_OFFSET UNITYSDK_OFFSET(0x107F4C50)
#define CLASS_1_A0A54F727B666678_METHOD_1_C8D47799B259D72D_OFFSET UNITYSDK_OFFSET(0x107F4270)
#define CLASS_1_A0A54F727B666678_METHOD_1_D44B679ADCE44DD9_OFFSET UNITYSDK_OFFSET(0x107F47F0)
#define CLASS_1_A0A54F727B666678__CTOR_OFFSET UNITYSDK_OFFSET(0x107F4BD0)

inline static constexpr unsigned int Class_1_A0A54F727B666678_TypeDefinitionIndex = 72358;

class Class_1_A0A54F727B666678 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0A54F727B666678__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C8D47799B259D72D(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A0A54F727B666678_METHOD_1_C8D47799B259D72D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Object* Method_1_D44B679ADCE44DD9(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A0A54F727B666678_METHOD_1_D44B679ADCE44DD9_OFFSET))(this, a1, a2, a3);
	}

	::System::Object* Method_1_36A7DFCCA1B36841(::MessagePack::MessagePackReader& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A0A54F727B666678_METHOD_1_36A7DFCCA1B36841_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4F9C62003C31EAFB(::MessagePack::MessagePackWriter& a1, ::Struct_2_E147DFD2A4EE8B0B& a2, ::System::Object* a3, ::MessagePack::MessagePackSerializerOptions* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_E147DFD2A4EE8B0B&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A0A54F727B666678_METHOD_1_4F9C62003C31EAFB_OFFSET))(this, a1, a2, a3, a4);
	}
};
