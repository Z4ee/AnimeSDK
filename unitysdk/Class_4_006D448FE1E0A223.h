#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_006D448FE1E0A223_METHOD_4_0E33DB8260AE45D4_OFFSET UNITYSDK_OFFSET(0x1416E9E0)
#define CLASS_4_006D448FE1E0A223_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1416EC60)
#define CLASS_4_006D448FE1E0A223_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1416E900)
#define CLASS_4_006D448FE1E0A223__CTOR_OFFSET UNITYSDK_OFFSET(0x1416EB70)

inline static constexpr unsigned int Class_4_006D448FE1E0A223_TypeDefinitionIndex = 90642;

class Class_4_006D448FE1E0A223 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_006D448FE1E0A223__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_006D448FE1E0A223_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_0E33DB8260AE45D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_006D448FE1E0A223_METHOD_4_0E33DB8260AE45D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_006D448FE1E0A223_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
