#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Class_3_0DF89BBD481CD05C_Enum_3_FF5A6E8B389790A5_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_AF7A56E03A4D3952;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_0DF89BBD481CD05C_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x16259E20)
#define CLASS_3_0DF89BBD481CD05C_METHOD_3_65E65B732D078956_OFFSET UNITYSDK_OFFSET(0x1625AAC0)
#define CLASS_3_0DF89BBD481CD05C_METHOD_3_97936DF5E528D6C4_OFFSET UNITYSDK_OFFSET(0x1625A410)
#define CLASS_3_0DF89BBD481CD05C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1625AB30)
#define CLASS_3_0DF89BBD481CD05C_METHOD_3_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0x1625A820)
#define CLASS_3_0DF89BBD481CD05C_METHOD_3_DBA553A11D93935E_OFFSET UNITYSDK_OFFSET(0x1625ABC0)
#define CLASS_3_0DF89BBD481CD05C_METHOD_3_EA1CE0AF6E069614_OFFSET UNITYSDK_OFFSET(0x1625A080)
#define CLASS_3_0DF89BBD481CD05C__CTOR_OFFSET UNITYSDK_OFFSET(0x1625A880)

inline static constexpr unsigned int Class_3_0DF89BBD481CD05C_TypeDefinitionIndex = 74679;

class Class_3_0DF89BBD481CD05C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Struct_2_29439DBE2B63DCF3 Field_3_6; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40
	::Class_3_B537A0AA78803363* Field_3_3; // 0x48
	::Class_3_B537A0AA78803363* Field_3_5; // 0x50
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_2; // 0x58
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x60
	::Class_3_B537A0AA78803363* Field_3_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_EA1CE0AF6E069614(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_EA1CE0AF6E069614_OFFSET))(this, a1);
	}

	::System::String* Method_3_D8BF40F27BE9947D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_D8BF40F27BE9947D_OFFSET))(this);
	}

	::Class_3_0DF89BBD481CD05C_Enum_3_FF5A6E8B389790A5_1 Method_3_65E65B732D078956(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::Class_3_0DF89BBD481CD05C_Enum_3_FF5A6E8B389790A5_1(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_65E65B732D078956_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_DBA553A11D93935E(::Struct_2_29439DBE2B63DCF3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_DBA553A11D93935E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_97936DF5E528D6C4(::Class_3_AF7A56E03A4D3952* a1, ::System::Int32 a2, ::Struct_2_29439DBE2B63DCF3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::System::Int32, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0DF89BBD481CD05C_METHOD_3_97936DF5E528D6C4_OFFSET))(this, a1, a2, a3);
	}
};
