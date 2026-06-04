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

#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_15FC4D4279E6518D_1_OFFSET UNITYSDK_OFFSET(0x1ABECBE0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_15FC4D4279E6518D_OFFSET UNITYSDK_OFFSET(0x1ABEC7F0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_1A2740E2FE318634_OFFSET UNITYSDK_OFFSET(0x1ABEC470)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_1DA5205CE3F58C2A_OFFSET UNITYSDK_OFFSET(0x1ABEE7A0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_288B200696A854CE_OFFSET UNITYSDK_OFFSET(0x1ABEE640)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_3298D651ACB79A77_OFFSET UNITYSDK_OFFSET(0x1ABEDAB0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1ABEB750)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_1_OFFSET UNITYSDK_OFFSET(0x1ABED820)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_2_OFFSET UNITYSDK_OFFSET(0x1ABED830)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_3_OFFSET UNITYSDK_OFFSET(0x1ABED840)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_4_OFFSET UNITYSDK_OFFSET(0x1ABED850)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_5_OFFSET UNITYSDK_OFFSET(0x1ABED860)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_36B0CC208063D29D_OFFSET UNITYSDK_OFFSET(0x1ABED810)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x1ABEC1C0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1ABEBAD0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4823200AFCAE38F5_OFFSET UNITYSDK_OFFSET(0x1ABED200)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_1_OFFSET UNITYSDK_OFFSET(0x1ABEE790)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_2_OFFSET UNITYSDK_OFFSET(0x1ABEE880)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1ABEBAC0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_4E6520C027CC5A76_OFFSET UNITYSDK_OFFSET(0x1ABED160)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_56F65626149842A5_OFFSET UNITYSDK_OFFSET(0x1ABEC290)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1ABEAE50)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1ABEC430)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1ABEBAE0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1ABEB740)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_957BB991E9B4160B_OFFSET UNITYSDK_OFFSET(0x1ABEB350)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_B3BD374EE2590121_1_OFFSET UNITYSDK_OFFSET(0x1ABECFB0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_B3BD374EE2590121_OFFSET UNITYSDK_OFFSET(0x1ABEC650)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_BFED3DFB9493020C_OFFSET UNITYSDK_OFFSET(0x1ABED870)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_C7594E7F7B34CCD9_OFFSET UNITYSDK_OFFSET(0x1ABED4A0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_D1AED587F12862AC_OFFSET UNITYSDK_OFFSET(0x1ABEBAF0)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_D5F3DB743C14B940_OFFSET UNITYSDK_OFFSET(0x1ABED800)
#define CLASS_1_2FC28EAECE1B8B36_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1ABEC4E0)
#define CLASS_1_2FC28EAECE1B8B36__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABEE890)
#define CLASS_1_2FC28EAECE1B8B36__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABEA980)

inline static constexpr unsigned int Class_1_2FC28EAECE1B8B36_TypeDefinitionIndex = 33475;

class Class_1_2FC28EAECE1B8B36 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FC28EAECE1B8B36_TypeDefinitionIndex)->GetStaticField(0xCCF0);
	}
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_4*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x30
	::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE* Field_1_6; // 0x38
	::System::String* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0x58
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_11; // 0x60
	::System::Collections::Generic::List_1<::Class_1_5425922A8B586808*>* Field_1_12; // 0x68
	::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* Field_1_13; // 0x70
	::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE_1* Field_1_14; // 0x78
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_3*>* Field_1_15; // 0x80
	::Class_1_2FC28EAECE1B8B36_Class_3_8661546F242498DE* Field_1_16; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* Field_1_17; // 0x90
	::System::Collections::Generic::List_1<::System::String*>* Field_1_18; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5425922A8B586808*>* Field_1_19; // 0xA0
	::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* Field_1_20; // 0xA8
	::System::Collections::Generic::List_1<::System::String*>* Field_1_21; // 0xB0
	::Class_1_2FC28EAECE1B8B36_Class_3_D490A575DB652D0B* Field_1_22; // 0xB8
	::System::Collections::Generic::List_1<::System::Text::RegularExpressions::Regex*>* Field_1_23; // 0xC0
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

	::System::Void Method_1_56F65626149842A5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_56F65626149842A5_OFFSET))(this, a1);
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

	::System::Void Method_1_B3BD374EE2590121(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_B3BD374EE2590121_OFFSET))(this, a1);
	}

	::System::Void Method_1_15FC4D4279E6518D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_15FC4D4279E6518D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15FC4D4279E6518D_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_15FC4D4279E6518D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B3BD374EE2590121_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_B3BD374EE2590121_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E6520C027CC5A76(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_4E6520C027CC5A76_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4823200AFCAE38F5(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_4823200AFCAE38F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C7594E7F7B34CCD9(::System::String* a1, ::RPG::Client::FileIncludeOrExcludeReason& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::FileIncludeOrExcludeReason&))((::PBYTE)hIl2Cpp + CLASS_1_2FC28EAECE1B8B36_METHOD_1_C7594E7F7B34CCD9_OFFSET))(this, a1, a2);
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
