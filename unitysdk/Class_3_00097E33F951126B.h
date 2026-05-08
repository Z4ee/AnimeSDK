#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_00097E33F951126B_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x13088580)
#define CLASS_3_00097E33F951126B_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x130883D0)
#define CLASS_3_00097E33F951126B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13088A40)
#define CLASS_3_00097E33F951126B_METHOD_3_E5BCB69F266CDEF4_OFFSET UNITYSDK_OFFSET(0x130885F0)
#define CLASS_3_00097E33F951126B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13088A30)
#define CLASS_3_00097E33F951126B__CTOR_OFFSET UNITYSDK_OFFSET(0x130888F0)

inline static constexpr unsigned int Class_3_00097E33F951126B_TypeDefinitionIndex = 77262;

class Class_3_00097E33F951126B : public ::Class_2_52F82E04F7FEE529
{
public:
	static ::System::Int32* StaticGet_Field_3_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_00097E33F951126B_TypeDefinitionIndex)->GetStaticField(0xBB00);
	}
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Object*>*>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00097E33F951126B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_00097E33F951126B__CCTOR_OFFSET))();
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00097E33F951126B_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_00097E33F951126B_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_00097E33F951126B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_E5BCB69F266CDEF4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_00097E33F951126B_METHOD_3_E5BCB69F266CDEF4_OFFSET))(this, a1);
	}
};
