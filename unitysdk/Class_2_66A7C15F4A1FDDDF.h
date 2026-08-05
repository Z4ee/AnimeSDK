#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A5136246E588D6D.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_8.h"

class Class_1_D87CC9E8B20EEC50;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_66A7C15F4A1FDDDF_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x11C686D0)
#define CLASS_2_66A7C15F4A1FDDDF_METHOD_2_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x11C68BC0)
#define CLASS_2_66A7C15F4A1FDDDF_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x11C68B50)
#define CLASS_2_66A7C15F4A1FDDDF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C68C70)
#define CLASS_2_66A7C15F4A1FDDDF__CTOR_OFFSET UNITYSDK_OFFSET(0x11C68630)

inline static constexpr unsigned int Class_2_66A7C15F4A1FDDDF_TypeDefinitionIndex = 82605;

class Class_2_66A7C15F4A1FDDDF : public ::Class_1_8A5136246E588D6D
{
public:
	::System::Collections::Generic::List_1<::Class_1_D87CC9E8B20EEC50*>* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3659D99D9E0DCBB9_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_8))((::PBYTE)hIl2Cpp + CLASS_2_66A7C15F4A1FDDDF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66A7C15F4A1FDDDF_METHOD_2_5835DC16FC46989B_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66A7C15F4A1FDDDF_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66A7C15F4A1FDDDF_METHOD_2_88B60F3B95FAA4F1_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66A7C15F4A1FDDDF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
