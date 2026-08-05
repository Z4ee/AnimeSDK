#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_8ED698723B657FCE_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14522CA0)
#define CLASS_3_8ED698723B657FCE_METHOD_3_BFD9C6B0B8BAEFA7_OFFSET UNITYSDK_OFFSET(0x14522DE0)
#define CLASS_3_8ED698723B657FCE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14523580)
#define CLASS_3_8ED698723B657FCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14523460)

inline static constexpr unsigned int Class_3_8ED698723B657FCE_TypeDefinitionIndex = 68094;

class Class_3_8ED698723B657FCE : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_7; // 0x20
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ED698723B657FCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ED698723B657FCE_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_BFD9C6B0B8BAEFA7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_8ED698723B657FCE_METHOD_3_BFD9C6B0B8BAEFA7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ED698723B657FCE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
