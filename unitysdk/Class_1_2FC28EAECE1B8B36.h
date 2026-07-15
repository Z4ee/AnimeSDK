#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FileIncludeOrExcludeReason.h"
#include "unitysdk/System/Object.h"

class Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE;
class Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1;
class Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B;
class Class_1_5425922A8B586808;
class Class_1_945ACFB1FEBC7A2C_3;
class Class_1_945ACFB1FEBC7A2C_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_1A2740E2FE318634_OFFSET UNITYSDK_OFFSET(0x1AC789D0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_1A938C53D8488BE9_OFFSET UNITYSDK_OFFSET(0x1AC78CD0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_1DA5205CE3F58C2A_OFFSET UNITYSDK_OFFSET(0x1AC7AD60)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_288B200696A854CE_OFFSET UNITYSDK_OFFSET(0x1AC7AC00)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_3298D651ACB79A77_OFFSET UNITYSDK_OFFSET(0x1AC79CB0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1AC77D40)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_1_OFFSET UNITYSDK_OFFSET(0x1AC79A20)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_2_OFFSET UNITYSDK_OFFSET(0x1AC79A30)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_3_OFFSET UNITYSDK_OFFSET(0x1AC79A40)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_4_OFFSET UNITYSDK_OFFSET(0x1AC79A50)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_5_OFFSET UNITYSDK_OFFSET(0x1AC79A60)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_OFFSET UNITYSDK_OFFSET(0x1AC79A10)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x1AC787A0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1AC780C0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_44EAFEE7DA4DC9DC_OFFSET UNITYSDK_OFFSET(0x1AC795E0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x1AC7AD50)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_2_OFFSET UNITYSDK_OFFSET(0x1AC7AE40)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1AC780B0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_57835F2501467DBA_OFFSET UNITYSDK_OFFSET(0x1AC79420)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1AC773D0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1AC78990)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1AC780D0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1AC77D30)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x1AC78870)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_957BB991E9B4160B_OFFSET UNITYSDK_OFFSET(0x1AC778D0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_BFED3DFB9493020C_OFFSET UNITYSDK_OFFSET(0x1AC79A70)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_D1AED587F12862AC_OFFSET UNITYSDK_OFFSET(0x1AC780E0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_D5F3DB743C14B940_OFFSET UNITYSDK_OFFSET(0x1AC79A00)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1AC78A40)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_E169D5A7FD659E00_1_OFFSET UNITYSDK_OFFSET(0x1AC792D0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_E169D5A7FD659E00_OFFSET UNITYSDK_OFFSET(0x1AC78BB0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_E75712E73C5F62D8_OFFSET UNITYSDK_OFFSET(0x1AC78F80)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_F4BAA111CDCA9A64_OFFSET UNITYSDK_OFFSET(0x1AC793F0)
#define CLASS_1_2FC28EAECE1B8B36__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC7AE50)
#define CLASS_1_2FC28EAECE1B8B36__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC76EF0)

inline static constexpr unsigned int Class_1_2FC28EAECE1B8B36_TypeDefinitionIndex = 33845;

class Class_1_2FC28EAECE1B8B36 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FC28EAECE1B8B36_TypeDefinitionIndex)->GetStaticField(0xB1D0);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x18
	::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* Field_1_3; // 0x20
	::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE* Field_1_4; // 0x28
	::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x38
	::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x48
	::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>* Field_1_9; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5425922A8B586808*>* Field_1_11; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_1_12; // 0x68
	::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>* Field_1_13; // 0x70
	::System::String* Field_1_14; // 0x78
	::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* Field_1_15; // 0x80
	::System::Collections::Generic::List_1<::System::String*>* Field_1_16; // 0x88
	::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1* Field_1_17; // 0x90
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_18; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_1_19; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_4*>* Field_1_20; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_21; // 0xB0
	::System::Collections::Generic::List_1<::System::String*>* Field_1_22; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* Field_1_23; // 0xC0
	::System::Boolean Field_1_24; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36__CCTOR_OFFSET))();
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_1_D1AED587F12862AC(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_D1AED587F12862AC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_1A2740E2FE318634(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_1A2740E2FE318634_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_D7D0CD092E7E5457_OFFSET))(this, a1);
	}

	::System::Void Method_1_E169D5A7FD659E00(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_E169D5A7FD659E00_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A938C53D8488BE9(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_1A938C53D8488BE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E75712E73C5F62D8(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_E75712E73C5F62D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E169D5A7FD659E00_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_E169D5A7FD659E00_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F4BAA111CDCA9A64(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_F4BAA111CDCA9A64_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57835F2501467DBA(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_57835F2501467DBA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_44EAFEE7DA4DC9DC(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_44EAFEE7DA4DC9DC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D5F3DB743C14B940(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_D5F3DB743C14B940_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D(::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_1(::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_2(::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_3(::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_4(::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_36B0CC208063D29D_5(::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFED3DFB9493020C(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_BFED3DFB9493020C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3298D651ACB79A77(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_3298D651ACB79A77_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_957BB991E9B4160B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_957BB991E9B4160B_OFFSET))(this, a1);
	}

	::System::Void Method_1_288B200696A854CE(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_288B200696A854CE_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* Method_1_4993EDAE54425105_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_1_OFFSET))(this);
	}

	::System::Void Method_1_1DA5205CE3F58C2A(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_1DA5205CE3F58C2A_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_4*>* Method_1_4993EDAE54425105_2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_2_OFFSET))(this);
	}
};
