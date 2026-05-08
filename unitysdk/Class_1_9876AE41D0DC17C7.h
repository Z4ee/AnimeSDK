#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9876AE41D0DC17C7_EQUALS_OFFSET UNITYSDK_OFFSET(0x12DA4930)
#define CLASS_1_9876AE41D0DC17C7_METHOD_1_8FC6DF53B079D6C5_OFFSET UNITYSDK_OFFSET(0x12DA4B20)
#define CLASS_1_9876AE41D0DC17C7_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x12DA4B10)
#define CLASS_1_9876AE41D0DC17C7_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x12DA4AF0)
#define CLASS_1_9876AE41D0DC17C7_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x12DA4B80)
#define CLASS_1_9876AE41D0DC17C7_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12DA4B00)
#define CLASS_1_9876AE41D0DC17C7_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x12DA4B70)
#define CLASS_1_9876AE41D0DC17C7__CTOR_OFFSET UNITYSDK_OFFSET(0x12DA48F0)

inline static constexpr unsigned int Class_1_9876AE41D0DC17C7_TypeDefinitionIndex = 81153;

class Class_1_9876AE41D0DC17C7 : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::String* Field_1_5; // 0x28
	::System::String* Field_1_3; // 0x30
	::System::Int32 Field_1_2; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Int32 Field_1_1; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_EQUALS_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_8FC6DF53B079D6C5()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_METHOD_1_8FC6DF53B079D6C5_OFFSET))(this);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9876AE41D0DC17C7_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
