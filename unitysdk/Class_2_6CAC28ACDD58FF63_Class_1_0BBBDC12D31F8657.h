#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/System/Object.h"

class Class_2_6CAC28ACDD58FF63_Class_1_119CE23D89A4C9A3_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_0BBBDC12D31F8657_METHOD_1_C2E8BBDD048A1B46_OFFSET UNITYSDK_OFFSET(0x10F2F3F0)
#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_0BBBDC12D31F8657__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2F3E0)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Class_1_0BBBDC12D31F8657_TypeDefinitionIndex = 58016;

class Class_2_6CAC28ACDD58FF63_Class_1_0BBBDC12D31F8657 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10
	::Class_2_6CAC28ACDD58FF63_Class_1_119CE23D89A4C9A3_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_0BBBDC12D31F8657__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C2E8BBDD048A1B46(::Struct_2_5887222B9AE38D34_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5887222B9AE38D34_2))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_0BBBDC12D31F8657_METHOD_1_C2E8BBDD048A1B46_OFFSET))(this, a1);
	}
};
