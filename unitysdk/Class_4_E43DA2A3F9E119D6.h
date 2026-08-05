#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_E43DA2A3F9E119D6_METHOD_4_0C78479E7EE59D65_OFFSET UNITYSDK_OFFSET(0x15545470)
#define CLASS_4_E43DA2A3F9E119D6_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15545760)
#define CLASS_4_E43DA2A3F9E119D6_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x155453C0)
#define CLASS_4_E43DA2A3F9E119D6_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x155451C0)
#define CLASS_4_E43DA2A3F9E119D6__CTOR_OFFSET UNITYSDK_OFFSET(0x155455A0)

inline static constexpr unsigned int Class_4_E43DA2A3F9E119D6_TypeDefinitionIndex = 61220;

class Class_4_E43DA2A3F9E119D6 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_3_B537A0AA78803363* Field_4_5; // 0x18
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_0; // 0x30
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E43DA2A3F9E119D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E43DA2A3F9E119D6_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E43DA2A3F9E119D6_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_0C78479E7EE59D65(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_E43DA2A3F9E119D6_METHOD_4_0C78479E7EE59D65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E43DA2A3F9E119D6_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
