#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C3CB84E07DDE41A.h"
#include "unitysdk/Struct_2_A391FBC09B5D7A1C.h"
#include "unitysdk/Struct_2_CC86B677214AB654.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_587;
class Class_1_3C44DCABCC8A5FD5;
class Class_1_E4DCFD174698F990;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_182B9C1E078022EA_METHOD_1_26398B98C49ACBF1_OFFSET UNITYSDK_OFFSET(0x12C41130)
#define CLASS_1_182B9C1E078022EA_METHOD_1_461A6EE07D8A988C_OFFSET UNITYSDK_OFFSET(0x12C41B80)
#define CLASS_1_182B9C1E078022EA_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x12C3FDD0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_4B10614E1C1CD79D_OFFSET UNITYSDK_OFFSET(0x12C412D0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_5C25F95FDDA722AC_OFFSET UNITYSDK_OFFSET(0x12C43030)
#define CLASS_1_182B9C1E078022EA_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x12C43100)
#define CLASS_1_182B9C1E078022EA_METHOD_1_667A81ABE9342DA6_OFFSET UNITYSDK_OFFSET(0x12C40380)
#define CLASS_1_182B9C1E078022EA_METHOD_1_730333BEF249B128_OFFSET UNITYSDK_OFFSET(0x12C415B0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_88A38449C90F61C7_OFFSET UNITYSDK_OFFSET(0x12C40E20)
#define CLASS_1_182B9C1E078022EA_METHOD_1_9199ED8D6E75C674_OFFSET UNITYSDK_OFFSET(0x12C3FAD0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_B3951169BD0FC0AB_OFFSET UNITYSDK_OFFSET(0x12C3FFC0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_C56BD76AC73704D3_OFFSET UNITYSDK_OFFSET(0x12C42540)
#define CLASS_1_182B9C1E078022EA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C41290)
#define CLASS_1_182B9C1E078022EA_METHOD_1_D30CC5B4F0E44E1B_OFFSET UNITYSDK_OFFSET(0x12C41540)
#define CLASS_1_182B9C1E078022EA_METHOD_1_EBD8C3E24DD8C8EC_OFFSET UNITYSDK_OFFSET(0x12C3FAE0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_FACDC4A1D489A005_OFFSET UNITYSDK_OFFSET(0x12C41C30)
#define CLASS_1_182B9C1E078022EA_METHOD_1_FBF7A1E2EB5EE197_OFFSET UNITYSDK_OFFSET(0x12C40830)
#define CLASS_1_182B9C1E078022EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C3F9A0)
#define CLASS_1_182B9C1E078022EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12C3F430)
#define CLASS_1_182B9C1E078022EA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C3EEE0)

inline static constexpr unsigned int Class_1_182B9C1E078022EA_TypeDefinitionIndex = 66805;

class Class_1_182B9C1E078022EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_20()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_182B9C1E078022EA_TypeDefinitionIndex)->GetStaticField(0x471E0);
	}
	// static const ::System::String* Field_1_9; // 0x0
	::System::String* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_2C3CB84E07DDE41A>* Field_1_1; // 0x28
	::System::Text::RegularExpressions::Regex* Field_1_10; // 0x30
	::System::Text::StringBuilder* Field_1_6; // 0x38
	::System::Type* Field_1_16; // 0x40
	::Class_1_3C44DCABCC8A5FD5* Field_1_14; // 0x48
	::System::Type* Field_1_17; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_5; // 0x58
	::System::String* Field_1_8; // 0x60
	::Class_0_16E4307DCC419505_587* Field_1_18; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_3; // 0x70
	::System::String* Field_1_19; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>* Field_1_0; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A391FBC09B5D7A1C>* Field_1_2; // 0x88
	::System::Boolean Field_1_13; // 0x90
	::System::Boolean Field_1_12; // 0x91
	::System::Boolean Field_1_11; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_587* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_587*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::ICollection_1<::System::String*>* Method_1_9199ED8D6E75C674()
	{
		return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_9199ED8D6E75C674_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>* Method_1_EBD8C3E24DD8C8EC(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_EBD8C3E24DD8C8EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B3951169BD0FC0AB(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_B3951169BD0FC0AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_88A38449C90F61C7(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_88A38449C90F61C7_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_26398B98C49ACBF1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_26398B98C49ACBF1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_FBF7A1E2EB5EE197(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_FBF7A1E2EB5EE197_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_730333BEF249B128(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_730333BEF249B128_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4B10614E1C1CD79D(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_4B10614E1C1CD79D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_667A81ABE9342DA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_667A81ABE9342DA6_OFFSET))(this);
	}

	::System::UInt64 Method_1_D30CC5B4F0E44E1B(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_D30CC5B4F0E44E1B_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_FACDC4A1D489A005(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_FACDC4A1D489A005_OFFSET))(a1, a2);
	}

	::Struct_2_CC86B677214AB654 Method_1_461A6EE07D8A988C(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_CC86B677214AB654(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_461A6EE07D8A988C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C56BD76AC73704D3(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_C56BD76AC73704D3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_5C25F95FDDA722AC(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_5C25F95FDDA722AC_OFFSET))(a1);
	}

	::System::Void Method_1_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_6632BA9E17A7643A_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_489E0B827662C211_OFFSET))(this);
	}
};
