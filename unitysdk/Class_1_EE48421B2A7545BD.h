#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_EE48421B2A7545BD_METHOD_1_2F996FD8685BA4BF_OFFSET UNITYSDK_OFFSET(0x19D6D8D0)
#define CLASS_1_EE48421B2A7545BD_METHOD_1_6A67FFCD8A05FF52_OFFSET UNITYSDK_OFFSET(0x19D6D040)
#define CLASS_1_EE48421B2A7545BD_METHOD_1_C8AFC7741066509C_OFFSET UNITYSDK_OFFSET(0x19D6D6E0)
#define CLASS_1_EE48421B2A7545BD_METHOD_1_CC6B6361A70B05BF_OFFSET UNITYSDK_OFFSET(0x19D6D150)
#define CLASS_1_EE48421B2A7545BD_METHOD_1_DA8DCE889EF32DAD_OFFSET UNITYSDK_OFFSET(0x19D6CFA0)
#define CLASS_1_EE48421B2A7545BD_METHOD_1_F5790DD9D8E52337_OFFSET UNITYSDK_OFFSET(0x19D6CF00)
#define CLASS_1_EE48421B2A7545BD__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6D970)

inline static constexpr unsigned int Class_1_EE48421B2A7545BD_TypeDefinitionIndex = 9712;

class Class_1_EE48421B2A7545BD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F5790DD9D8E52337(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD_METHOD_1_F5790DD9D8E52337_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_DA8DCE889EF32DAD(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD_METHOD_1_DA8DCE889EF32DAD_OFFSET))(a1);
	}

	static ::System::IO::Stream* Method_1_6A67FFCD8A05FF52(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD_METHOD_1_6A67FFCD8A05FF52_OFFSET))(a1, a2);
	}

	static ::System::IO::Stream* Method_1_CC6B6361A70B05BF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD_METHOD_1_CC6B6361A70B05BF_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_C8AFC7741066509C(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD_METHOD_1_C8AFC7741066509C_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_2F996FD8685BA4BF(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE48421B2A7545BD_METHOD_1_2F996FD8685BA4BF_OFFSET))(a1);
	}
};
