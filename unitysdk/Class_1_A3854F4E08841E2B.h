#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3854F4E08841E2B_METHOD_1_3BE0C15BA155428B_OFFSET UNITYSDK_OFFSET(0x147A1E40)
#define CLASS_1_A3854F4E08841E2B_METHOD_1_82D66E624C92FF2B_OFFSET UNITYSDK_OFFSET(0x147A1F10)
#define CLASS_1_A3854F4E08841E2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A1DA0)

inline static constexpr unsigned int Class_1_A3854F4E08841E2B_TypeDefinitionIndex = 53908;

class Class_1_A3854F4E08841E2B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Enum_3_A865FEC42C70DCB5>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_A865FEC42C70DCB5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3854F4E08841E2B_TypeDefinitionIndex)->GetStaticField(0x39C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3854F4E08841E2B__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_3BE0C15BA155428B(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Boolean(*)(::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_A3854F4E08841E2B_METHOD_1_3BE0C15BA155428B_OFFSET))(a1);
	}

	static ::Class_1_D375C91CCE5D3999* Method_1_82D66E624C92FF2B()
	{
		return ((::Class_1_D375C91CCE5D3999*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3854F4E08841E2B_METHOD_1_82D66E624C92FF2B_OFFSET))();
	}
};
