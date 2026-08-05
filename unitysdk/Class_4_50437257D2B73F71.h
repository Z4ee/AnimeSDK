#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_50437257D2B73F71_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1292E100)
#define CLASS_4_50437257D2B73F71_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1292D8E0)
#define CLASS_4_50437257D2B73F71_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1292D730)
#define CLASS_4_50437257D2B73F71_METHOD_4_EA1CE0AF6E069614_OFFSET UNITYSDK_OFFSET(0x1292D950)
#define CLASS_4_50437257D2B73F71__CTOR_OFFSET UNITYSDK_OFFSET(0x1292DF30)

inline static constexpr unsigned int Class_4_50437257D2B73F71_TypeDefinitionIndex = 70694;

class Class_4_50437257D2B73F71 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_3; // 0x28
	::Class_3_B537A0AA78803363* Field_4_0; // 0x30
	::Class_3_B537A0AA78803363* Field_4_1; // 0x38
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_50437257D2B73F71__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_50437257D2B73F71_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_50437257D2B73F71_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_50437257D2B73F71_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_EA1CE0AF6E069614(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_50437257D2B73F71_METHOD_4_EA1CE0AF6E069614_OFFSET))(this, a1);
	}
};
