#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_309C66F1326114D7.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D6C349C31864351E_METHOD_2_20F4806358A3520A_OFFSET UNITYSDK_OFFSET(0x815C60)
#define STRUCT_2_D6C349C31864351E_METHOD_2_A39080B57B55848D_OFFSET UNITYSDK_OFFSET(0x15074F00)
#define STRUCT_2_D6C349C31864351E_METHOD_2_D126582672457EA7_OFFSET UNITYSDK_OFFSET(0x815C30)
#define STRUCT_2_D6C349C31864351E__CTOR_OFFSET UNITYSDK_OFFSET(0x815C20)

inline static constexpr unsigned int Struct_2_D6C349C31864351E_TypeDefinitionIndex = 52670;

struct alignas(4) Struct_2_D6C349C31864351E
{
	::Enum_3_309C66F1326114D7 Field_2_1; // 0x10
	::Enum_3_AB9CCA0B2E05A401 Field_2_0; // 0x14

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_D6C349C31864351E__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Boolean Method_2_D126582672457EA7(::Struct_2_300DB4F0FE095A56 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_300DB4F0FE095A56))((::PBYTE)hIl2Cpp + STRUCT_2_D6C349C31864351E_METHOD_2_D126582672457EA7_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Boolean Method_2_20F4806358A3520A(::Struct_2_300DB4F0FE095A56 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_300DB4F0FE095A56))((::PBYTE)hIl2Cpp + STRUCT_2_D6C349C31864351E_METHOD_2_20F4806358A3520A_OFFSET))(this, a1);
	}
	*/

	static ::System::Collections::Generic::List_1<::Struct_2_D6C349C31864351E>* Method_2_A39080B57B55848D(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_D6C349C31864351E>*(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_D6C349C31864351E_METHOD_2_A39080B57B55848D_OFFSET))(a1);
	}
};
