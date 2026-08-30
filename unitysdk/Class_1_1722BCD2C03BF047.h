#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Sample/SampleViewRule.h"
#include "unitysdk/Struct_2_5B01A4D9DE10D034.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1722BCD2C03BF047_METHOD_1_162EC8A6C87C4607_OFFSET UNITYSDK_OFFSET(0x152AF6E0)
#define CLASS_1_1722BCD2C03BF047_METHOD_1_565B84936AE8B354_OFFSET UNITYSDK_OFFSET(0x152AFD10)
#define CLASS_1_1722BCD2C03BF047_METHOD_1_7979BF8726F3B3C7_OFFSET UNITYSDK_OFFSET(0x152AFDC0)
#define CLASS_1_1722BCD2C03BF047_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x152AF5C0)
#define CLASS_1_1722BCD2C03BF047_METHOD_1_A3BA87458D94FE12_OFFSET UNITYSDK_OFFSET(0x152AF950)
#define CLASS_1_1722BCD2C03BF047_METHOD_1_D910F4D36FEA1766_OFFSET UNITYSDK_OFFSET(0x152AF610)
#define CLASS_1_1722BCD2C03BF047_METHOD_1_E1AB55AD01517096_OFFSET UNITYSDK_OFFSET(0x152AFB50)
#define CLASS_1_1722BCD2C03BF047__CTOR_1_OFFSET UNITYSDK_OFFSET(0x152AF7A0)
#define CLASS_1_1722BCD2C03BF047__CTOR_OFFSET UNITYSDK_OFFSET(0x152AF790)

inline static constexpr unsigned int Class_1_1722BCD2C03BF047_TypeDefinitionIndex = 73944;

class Class_1_1722BCD2C03BF047 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MAILAIKINGH; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_5B01A4D9DE10D034>* LCBLBNDICJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::Struct_2_5B01A4D9DE10D034>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_5B01A4D9DE10D034>*))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Struct_2_5B01A4D9DE10D034 Method_1_D910F4D36FEA1766(::System::Int32 a1)
	{
		return ((::Struct_2_5B01A4D9DE10D034(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_D910F4D36FEA1766_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_162EC8A6C87C4607(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_162EC8A6C87C4607_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3BA87458D94FE12(::RPG::Client::Sample::SampleViewRule a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Sample::SampleViewRule))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_A3BA87458D94FE12_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E1AB55AD01517096(::Struct_2_5B01A4D9DE10D034 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_5B01A4D9DE10D034))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_E1AB55AD01517096_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* Method_1_565B84936AE8B354()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_565B84936AE8B354_OFFSET))(this);
	}

	::System::Void Method_1_7979BF8726F3B3C7(::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + CLASS_1_1722BCD2C03BF047_METHOD_1_7979BF8726F3B3C7_OFFSET))(this, a1);
	}
};
