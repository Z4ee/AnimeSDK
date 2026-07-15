#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_0_16E4307DCC419505_327;
class Class_1_105C32866538BE74;
class Class_1_116CDD209CC17C5E;
class Class_1_96F671E4E83A73C0;
class Class_1_A7ACC20C71373A38;
class Class_1_B56147E1D2DBC8DE;
class Class_5_734EB4F352412506;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }
template <typename T> class Class_5_534AF681CC2BD5F4;

#define CLASS_1_7B4E9156998275BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0EE940)
#define CLASS_1_7B4E9156998275BE_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x1D0EF0F0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_11C527E58DAEDBCA_OFFSET UNITYSDK_OFFSET(0x1D0F0390)
#define CLASS_1_7B4E9156998275BE_METHOD_1_1B1FDB466FF75250_OFFSET UNITYSDK_OFFSET(0x1D0EDA40)
#define CLASS_1_7B4E9156998275BE_METHOD_1_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0x1D0F1590)
#define CLASS_1_7B4E9156998275BE_METHOD_1_20A48AE86AD3FECB_OFFSET UNITYSDK_OFFSET(0x1D0F3610)
#define CLASS_1_7B4E9156998275BE_METHOD_1_50E73B0DB6BDA075_OFFSET UNITYSDK_OFFSET(0x1D0F0410)
#define CLASS_1_7B4E9156998275BE_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x1D0EDCA0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1D0F0160)
#define CLASS_1_7B4E9156998275BE_METHOD_1_6FC2B4BA0BC47576_1_OFFSET UNITYSDK_OFFSET(0x1D0EF610)
#define CLASS_1_7B4E9156998275BE_METHOD_1_6FC2B4BA0BC47576_OFFSET UNITYSDK_OFFSET(0x1D0EF310)
#define CLASS_1_7B4E9156998275BE_METHOD_1_703299C3DD1F5B47_OFFSET UNITYSDK_OFFSET(0x1D0F29C0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_7180D11BD8FDADB6_OFFSET UNITYSDK_OFFSET(0x1D0F1C70)
#define CLASS_1_7B4E9156998275BE_METHOD_1_786F810ABB57AF39_OFFSET UNITYSDK_OFFSET(0x1D0E2F40)
#define CLASS_1_7B4E9156998275BE_METHOD_1_97E422D0599EA04D_OFFSET UNITYSDK_OFFSET(0x1D0ECC70)
#define CLASS_1_7B4E9156998275BE_METHOD_1_9BADE3E301981C8B_OFFSET UNITYSDK_OFFSET(0x1D0EF500)
#define CLASS_1_7B4E9156998275BE_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x1D0ED4D0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_C014A821192D32A2_OFFSET UNITYSDK_OFFSET(0x1D0E2DE0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_C8B62C11A5CF54F0_OFFSET UNITYSDK_OFFSET(0x1D0ED260)
#define CLASS_1_7B4E9156998275BE_METHOD_1_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x1D0F0E00)
#define CLASS_1_7B4E9156998275BE_METHOD_1_CD92459672FD31FA_OFFSET UNITYSDK_OFFSET(0x1D0EF810)
#define CLASS_1_7B4E9156998275BE_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x1D0EDD10)
#define CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x1D0E80B0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1D0F35D0)
#define CLASS_1_7B4E9156998275BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F3C50)
#define CLASS_1_7B4E9156998275BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F3730)
#define CLASS_1_7B4E9156998275BE___RESOLVEMULTI_B__25_0_OFFSET UNITYSDK_OFFSET(0x1D0F3C60)

inline static constexpr unsigned int Class_1_7B4E9156998275BE_TypeDefinitionIndex = 41494;

class Class_1_7B4E9156998275BE : public ::System::Object
{
public:
	static ::System::TimeSpan* StaticGet_Field_1_0()
	{
		return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE_TypeDefinitionIndex)->GetStaticField(0xE000);
	}
	::System::Threading::ThreadLocal_1<::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_96F671E4E83A73C0*>* Field_1_2; // 0x18
	::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Guid, ::Class_1_105C32866538BE74*>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_B9E6DC87D4879FCD, ::System::Guid>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::Struct_2_B9E6DC87D4879FCD, ::System::Collections::Generic::List_1<::System::Guid>*>* Field_1_6; // 0x38
	::Class_1_A7ACC20C71373A38* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::Class_1_116CDD209CC17C5E*>* Field_1_8; // 0x48
	::Class_1_B56147E1D2DBC8DE* Field_1_9; // 0x50
	::System::Boolean Field_1_10; // 0x58
	::System::Boolean Field_1_11; // 0x59
	::System::Boolean Field_1_12; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_97E422D0599EA04D(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_97E422D0599EA04D_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_1B1FDB466FF75250()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_1B1FDB466FF75250_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_327* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
	}

	::Class_5_734EB4F352412506* Method_1_6FC2B4BA0BC47576(::System::Type* a1, ::System::String* a2)
	{
		return ((::Class_5_734EB4F352412506*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_6FC2B4BA0BC47576_OFFSET))(this, a1, a2);
	}

	::Class_5_734EB4F352412506* Method_1_6FC2B4BA0BC47576_1(::System::Type* a1, ::System::String* a2)
	{
		return ((::Class_5_734EB4F352412506*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_6FC2B4BA0BC47576_1_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_1_C014A821192D32A2(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_C014A821192D32A2_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_1_CD92459672FD31FA(::Struct_2_B9E6DC87D4879FCD a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_CD92459672FD31FA_OFFSET))(this, a1);
	}

	::System::Object* Method_1_C8B62C11A5CF54F0(::System::Guid a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_C8B62C11A5CF54F0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* Method_1_11C527E58DAEDBCA(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_11C527E58DAEDBCA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* Method_1_50E73B0DB6BDA075(::Struct_2_B9E6DC87D4879FCD a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_50E73B0DB6BDA075_OFFSET))(this, a1);
	}

	::System::Void Method_1_786F810ABB57AF39(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_786F810ABB57AF39_OFFSET))(this, a1);
	}

	::System::Void Method_1_7180D11BD8FDADB6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_7180D11BD8FDADB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DFB9896143A3689(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_1DFB9896143A3689_OFFSET))(this, a1);
	}

	::Class_1_96F671E4E83A73C0* Method_1_9BADE3E301981C8B()
	{
		return ((::Class_1_96F671E4E83A73C0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_9BADE3E301981C8B_OFFSET))(this);
	}

	::System::Void Method_1_703299C3DD1F5B47(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_703299C3DD1F5B47_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::Class_1_A7ACC20C71373A38* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_A7ACC20C71373A38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_B56147E1D2DBC8DE* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_B56147E1D2DBC8DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::System::Collections::Generic::ICollection_1<::Class_1_105C32866538BE74*>* Method_1_20A48AE86AD3FECB()
	{
		return ((::System::Collections::Generic::ICollection_1<::Class_1_105C32866538BE74*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_20A48AE86AD3FECB_OFFSET))(this);
	}

	::Class_1_105C32866538BE74* __ResolveMulti_b__25_0(::System::Guid a1)
	{
		return ((::Class_1_105C32866538BE74*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___RESOLVEMULTI_B__25_0_OFFSET))(this, a1);
	}
};
