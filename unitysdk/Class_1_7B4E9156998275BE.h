#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

class Class_0_16E4307DCC419505_288;
class Class_1_116CDD209CC17C5E;
class Class_1_60B5E5A0CB5606E4;
class Class_1_96F671E4E83A73C0;
class Class_1_B56147E1D2DBC8DE;
class Class_1_B56147E1D2DBC8DE_1;
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

#define CLASS_1_7B4E9156998275BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1837D4C0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x1837DBE0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_11C527E58DAEDBCA_OFFSET UNITYSDK_OFFSET(0x1837F580)
#define CLASS_1_7B4E9156998275BE_METHOD_1_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x1837F040)
#define CLASS_1_7B4E9156998275BE_METHOD_1_1B1FDB466FF75250_OFFSET UNITYSDK_OFFSET(0x1837C650)
#define CLASS_1_7B4E9156998275BE_METHOD_1_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0x18380060)
#define CLASS_1_7B4E9156998275BE_METHOD_1_28FDD4273D1B7A85_OFFSET UNITYSDK_OFFSET(0x1837B6D0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0x1837E100)
#define CLASS_1_7B4E9156998275BE_METHOD_1_2FC60AEFF57E0BA5_OFFSET UNITYSDK_OFFSET(0x183824D0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1837C1A0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_3F395860CA7A018A_OFFSET UNITYSDK_OFFSET(0x1837E5F0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_45E10D749EF38FBE_OFFSET UNITYSDK_OFFSET(0x18381420)
#define CLASS_1_7B4E9156998275BE_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x1837C8B0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_6FC2B4BA0BC47576_1_OFFSET UNITYSDK_OFFSET(0x1837E360)
#define CLASS_1_7B4E9156998275BE_METHOD_1_6FC2B4BA0BC47576_OFFSET UNITYSDK_OFFSET(0x1837DDA0)
#define CLASS_1_7B4E9156998275BE_METHOD_1_750C1B5F346A6BB9_OFFSET UNITYSDK_OFFSET(0x1837BF40)
#define CLASS_1_7B4E9156998275BE_METHOD_1_AD0C5EA533E53ECB_OFFSET UNITYSDK_OFFSET(0x1837FF00)
#define CLASS_1_7B4E9156998275BE_METHOD_1_C014A821192D32A2_OFFSET UNITYSDK_OFFSET(0x1837E570)
#define CLASS_1_7B4E9156998275BE_METHOD_1_CC2FBC3BD9171E9F_OFFSET UNITYSDK_OFFSET(0x18380A00)
#define CLASS_1_7B4E9156998275BE_METHOD_1_E3953ED5354E014E_OFFSET UNITYSDK_OFFSET(0x1837F600)
#define CLASS_1_7B4E9156998275BE_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1837C920)
#define CLASS_1_7B4E9156998275BE_METHOD_1_F5D0DE62B372C4C0_OFFSET UNITYSDK_OFFSET(0x18380550)
#define CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x18382490)
#define CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x18382450)
#define CLASS_1_7B4E9156998275BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x183829F0)
#define CLASS_1_7B4E9156998275BE__CTOR_OFFSET UNITYSDK_OFFSET(0x18382550)
#define CLASS_1_7B4E9156998275BE___RESOLVEMULTI_B__25_0_OFFSET UNITYSDK_OFFSET(0x18382A00)

inline static constexpr unsigned int Class_1_7B4E9156998275BE_TypeDefinitionIndex = 34028;

class Class_1_7B4E9156998275BE : public ::System::Object
{
public:
	static ::System::TimeSpan* StaticGet_Field_1_0()
	{
		return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B4E9156998275BE_TypeDefinitionIndex)->GetStaticField(0xC8A0);
	}
	::System::Threading::ThreadLocal_1<::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*>* Field_1_5; // 0x10
	::Class_1_B56147E1D2DBC8DE* Field_1_10; // 0x18
	::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::Struct_2_B9E6DC87D4879FCD>*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_B9E6DC87D4879FCD, ::System::Collections::Generic::List_1<::System::Guid>*>* Field_1_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_B9E6DC87D4879FCD, ::System::Guid>* Field_1_7; // 0x30
	::Class_1_B56147E1D2DBC8DE_1* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Class_1_116CDD209CC17C5E*>* Field_1_3; // 0x40
	::System::Collections::Generic::List_1<::Class_1_96F671E4E83A73C0*>* Field_1_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Guid, ::Class_1_60B5E5A0CB5606E4*>* Field_1_9; // 0x50
	::System::Boolean Field_1_1; // 0x58
	::System::Boolean Field_1_2; // 0x59
	::System::Boolean Field_1_12; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_28FDD4273D1B7A85(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_28FDD4273D1B7A85_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_1B1FDB466FF75250()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_1B1FDB466FF75250_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_288* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_288*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
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

	::System::Object* Method_1_3F395860CA7A018A(::Struct_2_B9E6DC87D4879FCD a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_3F395860CA7A018A_OFFSET))(this, a1);
	}

	::System::Object* Method_1_750C1B5F346A6BB9(::System::Guid a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_750C1B5F346A6BB9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* Method_1_11C527E58DAEDBCA(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_11C527E58DAEDBCA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* Method_1_E3953ED5354E014E(::Struct_2_B9E6DC87D4879FCD a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_E3953ED5354E014E_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD0C5EA533E53ECB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_AD0C5EA533E53ECB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC2FBC3BD9171E9F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_CC2FBC3BD9171E9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DFB9896143A3689(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_1DFB9896143A3689_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5D0DE62B372C4C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_F5D0DE62B372C4C0_OFFSET))(this, a1);
	}

	::Class_1_96F671E4E83A73C0* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_96F671E4E83A73C0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_2F8C1CDF056C52FC_OFFSET))(this);
	}

	::System::Void Method_1_45E10D749EF38FBE(::Class_1_96F671E4E83A73C0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96F671E4E83A73C0*))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_45E10D749EF38FBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::Class_1_B56147E1D2DBC8DE* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_B56147E1D2DBC8DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_B56147E1D2DBC8DE_1* Method_1_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_B56147E1D2DBC8DE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::System::Collections::Generic::ICollection_1<::Class_1_60B5E5A0CB5606E4*>* Method_1_2FC60AEFF57E0BA5()
	{
		return ((::System::Collections::Generic::ICollection_1<::Class_1_60B5E5A0CB5606E4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE_METHOD_1_2FC60AEFF57E0BA5_OFFSET))(this);
	}

	::Class_1_60B5E5A0CB5606E4* __ResolveMulti_b__25_0(::System::Guid guid)
	{
		return ((::Class_1_60B5E5A0CB5606E4*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_1_7B4E9156998275BE___RESOLVEMULTI_B__25_0_OFFSET))(this, guid);
	}
};
