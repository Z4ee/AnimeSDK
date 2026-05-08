#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define CLASS_1_84E68876EDE828FB_METHOD_1_5B0F817132408BF8_OFFSET UNITYSDK_OFFSET(0x136402B0)
#define CLASS_1_84E68876EDE828FB_METHOD_1_F753645BC4263183_OFFSET UNITYSDK_OFFSET(0x13640200)

inline static constexpr unsigned int Class_1_84E68876EDE828FB_TypeDefinitionIndex = 45502;

class Class_1_84E68876EDE828FB : public ::System::Object
{
public:
	static ::FlatBuffers::ByteBuffer* Method_1_F753645BC4263183(::System::String* a1)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_84E68876EDE828FB_METHOD_1_F753645BC4263183_OFFSET))(a1);
	}

	static ::FlatBuffers::ByteBuffer* Method_1_5B0F817132408BF8(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_84E68876EDE828FB_METHOD_1_5B0F817132408BF8_OFFSET))(a1);
	}
};
