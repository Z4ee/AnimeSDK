#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_C8DD3189F0674DFD_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x114E3F50)
#define CLASS_3_C8DD3189F0674DFD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114E4380)
#define CLASS_3_C8DD3189F0674DFD_METHOD_3_DB905DEF666A9606_OFFSET UNITYSDK_OFFSET(0x114E4090)
#define CLASS_3_C8DD3189F0674DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x114E4280)

inline static constexpr unsigned int Class_3_C8DD3189F0674DFD_TypeDefinitionIndex = 76953;

class Class_3_C8DD3189F0674DFD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8DD3189F0674DFD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8DD3189F0674DFD_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_DB905DEF666A9606(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C8DD3189F0674DFD_METHOD_3_DB905DEF666A9606_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8DD3189F0674DFD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
