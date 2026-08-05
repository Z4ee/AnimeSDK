#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_97AE04196F822371_METHOD_3_0C53D5E3AF8561C4_OFFSET UNITYSDK_OFFSET(0x1168FE90)
#define CLASS_3_97AE04196F822371_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1168FDC0)
#define CLASS_3_97AE04196F822371_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116905D0)
#define CLASS_3_97AE04196F822371__CTOR_OFFSET UNITYSDK_OFFSET(0x116904E0)

inline static constexpr unsigned int Class_3_97AE04196F822371_TypeDefinitionIndex = 81698;

class Class_3_97AE04196F822371 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97AE04196F822371__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97AE04196F822371_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_0C53D5E3AF8561C4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_97AE04196F822371_METHOD_3_0C53D5E3AF8561C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97AE04196F822371_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
