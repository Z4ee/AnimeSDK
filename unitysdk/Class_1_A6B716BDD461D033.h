#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_535E4088B549C341;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A6B716BDD461D033_METHOD_1_5110E061C0DF5692_OFFSET UNITYSDK_OFFSET(0xA7D7140)
#define CLASS_1_A6B716BDD461D033_METHOD_1_535079AAF5EDFF62_OFFSET UNITYSDK_OFFSET(0xA7D7380)
#define CLASS_1_A6B716BDD461D033_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA7D72F0)
#define CLASS_1_A6B716BDD461D033_METHOD_1_D31158F0CD6D711E_OFFSET UNITYSDK_OFFSET(0xA7D7060)
#define CLASS_1_A6B716BDD461D033_METHOD_1_E10B4092FFA54980_OFFSET UNITYSDK_OFFSET(0xA7D7280)
#define CLASS_1_A6B716BDD461D033_METHOD_1_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0xA7D6F00)
#define CLASS_1_A6B716BDD461D033__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D6FE0)

inline static constexpr unsigned int Class_1_A6B716BDD461D033_TypeDefinitionIndex = 65248;

class Class_1_A6B716BDD461D033 : public ::System::Object
{
public:
	static ::Class_1_A6B716BDD461D033** StaticGet_Field_1_0()
	{
		return (::Class_1_A6B716BDD461D033**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6B716BDD461D033_TypeDefinitionIndex)->GetStaticField(0x62BC0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_535E4088B549C341*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033__CTOR_OFFSET))(this);
	}

	static ::Class_1_A6B716BDD461D033* Method_1_F2B94768004EB1C1()
	{
		return ((::Class_1_A6B716BDD461D033*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_F2B94768004EB1C1_OFFSET))();
	}

	::Class_1_535E4088B549C341* Method_1_D31158F0CD6D711E(::System::String* a1)
	{
		return ((::Class_1_535E4088B549C341*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_D31158F0CD6D711E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5110E061C0DF5692(::Class_1_535E4088B549C341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_535E4088B549C341*))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_5110E061C0DF5692_OFFSET))(this, a1);
	}

	::System::Void Method_1_E10B4092FFA54980(::Class_1_535E4088B549C341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_535E4088B549C341*))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_E10B4092FFA54980_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_535079AAF5EDFF62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B716BDD461D033_METHOD_1_535079AAF5EDFF62_OFFSET))(this);
	}
};
