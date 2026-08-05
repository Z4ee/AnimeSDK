#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_CC187623C7379597_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13EA2850)
#define CLASS_4_CC187623C7379597_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13EA2330)
#define CLASS_4_CC187623C7379597_METHOD_4_B5CEF7C539A7DC9B_OFFSET UNITYSDK_OFFSET(0x13EA2410)
#define CLASS_4_CC187623C7379597__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA2760)

inline static constexpr unsigned int Class_4_CC187623C7379597_TypeDefinitionIndex = 80081;

class Class_4_CC187623C7379597 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC187623C7379597__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC187623C7379597_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_B5CEF7C539A7DC9B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_CC187623C7379597_METHOD_4_B5CEF7C539A7DC9B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC187623C7379597_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
