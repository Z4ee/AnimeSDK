#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_38.h"
#include "unitysdk/Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1.h"
#include "unitysdk/Class_2_4CD221E5A917D3C2_Struct_2_AAF384C1D8A9F5D3.h"
#include "unitysdk/Enum_3_DF71DA21872A8AF5.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28.h"
#include "unitysdk/Struct_2_EDB3A19738BDAA61.h"

class Class_1_72B4371C7CF9949D;
class Class_1_7807B2B04302CD7B_23;
class Class_1_FD31E4216DD30F97;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4CD221E5A917D3C2_METHOD_2_4632488F8CF64E41_OFFSET UNITYSDK_OFFSET(0x10926590)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_6BDC9958F7521C78_OFFSET UNITYSDK_OFFSET(0x109276E0)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_956BFB137C850354_OFFSET UNITYSDK_OFFSET(0x10925F20)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x10925F10)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_B2C98E52EB2E086D_OFFSET UNITYSDK_OFFSET(0x10926A40)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_B43DC230F1244F3D_OFFSET UNITYSDK_OFFSET(0x109273C0)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_C4DC31320FA0BC0B_OFFSET UNITYSDK_OFFSET(0x10927A30)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_EB8822E41F249A81_OFFSET UNITYSDK_OFFSET(0x10926290)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_ED0F23EE85DC733A_OFFSET UNITYSDK_OFFSET(0x109272C0)
#define CLASS_2_4CD221E5A917D3C2_METHOD_2_FFD70BABDD8A888B_OFFSET UNITYSDK_OFFSET(0x109275F0)
#define CLASS_2_4CD221E5A917D3C2__CTOR_OFFSET UNITYSDK_OFFSET(0x10925EA0)

inline static constexpr unsigned int Class_2_4CD221E5A917D3C2_TypeDefinitionIndex = 73525;

class Class_2_4CD221E5A917D3C2 : public ::Class_1_43BD383C98B4C0C5_38
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3; // 0x0
	::Struct_2_9C9516EC1DA3BB28 Field_2_1; // 0x10
	::Struct_2_9C9516EC1DA3BB28 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2__CTOR_OFFSET))(this);
	}

	::Enum_3_DF71DA21872A8AF5 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_DF71DA21872A8AF5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_956BFB137C850354(::Class_1_72B4371C7CF9949D* a1, ::Struct_2_EDB3A19738BDAA61& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72B4371C7CF9949D*, ::Struct_2_EDB3A19738BDAA61&))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_956BFB137C850354_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4632488F8CF64E41(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*>* a1, ::Class_1_72B4371C7CF9949D* a2, ::Struct_2_EDB3A19738BDAA61& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*>*, ::Class_1_72B4371C7CF9949D*, ::Struct_2_EDB3A19738BDAA61&))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_4632488F8CF64E41_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_ED0F23EE85DC733A(::Class_1_72B4371C7CF9949D* a1, ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1& a2, ::Class_1_7807B2B04302CD7B_23*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_72B4371C7CF9949D*, ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1&, ::Class_1_7807B2B04302CD7B_23*&))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_ED0F23EE85DC733A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* Method_2_B43DC230F1244F3D(::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1& a1, ::Class_1_72B4371C7CF9949D* a2, ::System::Func_2<::Class_1_FD31E4216DD30F97*, ::System::Boolean>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*(*)(::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1&, ::Class_1_72B4371C7CF9949D*, ::System::Func_2<::Class_1_FD31E4216DD30F97*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_B43DC230F1244F3D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_EB8822E41F249A81(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_EB8822E41F249A81_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FFD70BABDD8A888B(::Class_1_FD31E4216DD30F97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD31E4216DD30F97*))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_FFD70BABDD8A888B_OFFSET))(this, a1);
	}

	static ::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1 Method_2_6BDC9958F7521C78(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a1, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a2)
	{
		return ((::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1(*)(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_6BDC9958F7521C78_OFFSET))(a1, a2);
	}

	::System::Void Method_2_B2C98E52EB2E086D(::System::Int32& a1, ::System::Int32 a2, ::Class_2_4CD221E5A917D3C2_Struct_2_AAF384C1D8A9F5D3 a3, ::Class_1_72B4371C7CF9949D* a4, ::Struct_2_EDB3A19738BDAA61& a5, ::System::Int32& a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32, ::Class_2_4CD221E5A917D3C2_Struct_2_AAF384C1D8A9F5D3, ::Class_1_72B4371C7CF9949D*, ::Struct_2_EDB3A19738BDAA61&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_B2C98E52EB2E086D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1>* Method_2_C4DC31320FA0BC0B(::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>* a1, ::Class_1_72B4371C7CF9949D* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_4CD221E5A917D3C2_Struct_2_529B3F495DCAB259_1>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FD31E4216DD30F97*>*, ::Class_1_72B4371C7CF9949D*))((::PBYTE)hIl2Cpp + CLASS_2_4CD221E5A917D3C2_METHOD_2_C4DC31320FA0BC0B_OFFSET))(this, a1, a2);
	}
};
