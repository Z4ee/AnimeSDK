#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0_1;
class Class_4_685254A3A1DA8006;
namespace System::Collections { class IList; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_0DEA6D5A4ED8E6DE_OFFSET UNITYSDK_OFFSET(0x16AF0C90)
#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_145C35B8F5416538_OFFSET UNITYSDK_OFFSET(0x16AF0280)
#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_1C7FADDBF87C487C_OFFSET UNITYSDK_OFFSET(0x16AF0450)
#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16AF00D0)
#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_545CBA80D05544C8_OFFSET UNITYSDK_OFFSET(0x16AF10E0)
#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16AF1050)
#define CLASS_3_938D6AAF5D37ACA4_METHOD_3_F4B3618561FD2492_OFFSET UNITYSDK_OFFSET(0x16AF06F0)
#define CLASS_3_938D6AAF5D37ACA4__CTOR_OFFSET UNITYSDK_OFFSET(0x16AF05F0)

inline static constexpr unsigned int Class_3_938D6AAF5D37ACA4_TypeDefinitionIndex = 42022;

class Class_3_938D6AAF5D37ACA4 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_685254A3A1DA8006* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_1; // 0x20
	::Class_4_425BBC3CBFD638A0_1* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_145C35B8F5416538(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_145C35B8F5416538_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F4B3618561FD2492(::System::Collections::IList* a1, ::System::Collections::IList* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_F4B3618561FD2492_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_0DEA6D5A4ED8E6DE(::System::Collections::IList* a1)
	{
		return ((::System::Void(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_0DEA6D5A4ED8E6DE_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Collections::IList* Method_3_1C7FADDBF87C487C(::System::Collections::IList* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Collections::IList*(*)(::System::Collections::IList*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_1C7FADDBF87C487C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_545CBA80D05544C8(::System::Collections::IList* a1, ::System::Collections::IList* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_938D6AAF5D37ACA4_METHOD_3_545CBA80D05544C8_OFFSET))(a1, a2, a3);
	}
};
