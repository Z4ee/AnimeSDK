#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_89DF3D0A8AB3AFDC_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xE1FBCF0)
#define CLASS_3_89DF3D0A8AB3AFDC_METHOD_3_66C5F1268DD8D2FC_OFFSET UNITYSDK_OFFSET(0xE1FBEA0)
#define CLASS_3_89DF3D0A8AB3AFDC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE1FC500)
#define CLASS_3_89DF3D0A8AB3AFDC__CTOR_OFFSET UNITYSDK_OFFSET(0xE1FC3A0)

inline static constexpr unsigned int Class_3_89DF3D0A8AB3AFDC_TypeDefinitionIndex = 88771;

class Class_3_89DF3D0A8AB3AFDC : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x18
	::Class_4_8D3E479B491881B3<::System::String*>* Field_3_7; // 0x20
	::Class_4_8D3E479B491881B3<::System::String*>* Field_3_0; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89DF3D0A8AB3AFDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89DF3D0A8AB3AFDC_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_66C5F1268DD8D2FC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_89DF3D0A8AB3AFDC_METHOD_3_66C5F1268DD8D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89DF3D0A8AB3AFDC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
