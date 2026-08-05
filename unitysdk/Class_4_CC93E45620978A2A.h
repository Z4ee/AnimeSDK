#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0_1;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_CC93E45620978A2A_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1669B9E0)
#define CLASS_4_CC93E45620978A2A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1669BEA0)
#define CLASS_4_CC93E45620978A2A_METHOD_4_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0x1669BB30)
#define CLASS_4_CC93E45620978A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1669BDA0)

inline static constexpr unsigned int Class_4_CC93E45620978A2A_TypeDefinitionIndex = 74841;

class Class_4_CC93E45620978A2A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x28
	::Class_4_425BBC3CBFD638A0_1* Field_4_1; // 0x30
	::Class_4_8D3E479B491881B3<::System::String*>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC93E45620978A2A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC93E45620978A2A_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_CC93E45620978A2A_METHOD_4_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC93E45620978A2A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
