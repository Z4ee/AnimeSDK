#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A5B50644ACC1F734.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A6FB168C249C0919_METHOD_1_0F925D28301F6B4C_OFFSET UNITYSDK_OFFSET(0x1526C630)
#define CLASS_1_A6FB168C249C0919_METHOD_1_7699FFD511FB900F_OFFSET UNITYSDK_OFFSET(0x1526C500)
#define CLASS_1_A6FB168C249C0919__CCTOR_OFFSET UNITYSDK_OFFSET(0x1526C6F0)

inline static constexpr unsigned int Class_1_A6FB168C249C0919_TypeDefinitionIndex = 55264;

class Class_1_A6FB168C249C0919 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6FB168C249C0919_TypeDefinitionIndex)->GetStaticField(0x537B0);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_A5B50644ACC1F734>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_A5B50644ACC1F734>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6FB168C249C0919_TypeDefinitionIndex)->GetStaticField(0x537B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6FB168C249C0919__CCTOR_OFFSET))();
	}

	static ::Struct_2_A5B50644ACC1F734 Method_1_7699FFD511FB900F(::System::Int32 a1)
	{
		return ((::Struct_2_A5B50644ACC1F734(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A6FB168C249C0919_METHOD_1_7699FFD511FB900F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0F925D28301F6B4C(::System::RuntimeTypeHandle a1)
	{
		return ((::System::Int32(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_A6FB168C249C0919_METHOD_1_0F925D28301F6B4C_OFFSET))(a1);
	}
};
