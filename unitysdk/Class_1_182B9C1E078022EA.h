#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C3CB84E07DDE41A.h"
#include "unitysdk/Struct_2_A391FBC09B5D7A1C.h"
#include "unitysdk/Struct_2_ADAAACC33621CB14.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_204;
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

#define CLASS_1_182B9C1E078022EA_METHOD_1_26398B98C49ACBF1_OFFSET UNITYSDK_OFFSET(0x167FEB30)
#define CLASS_1_182B9C1E078022EA_METHOD_1_461A6EE07D8A988C_OFFSET UNITYSDK_OFFSET(0x167FCB10)
#define CLASS_1_182B9C1E078022EA_METHOD_1_46B75BEB9162D674_OFFSET UNITYSDK_OFFSET(0x167FE540)
#define CLASS_1_182B9C1E078022EA_METHOD_1_46E36AA2496B0D46_OFFSET UNITYSDK_OFFSET(0x167FCBC0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x167FE350)
#define CLASS_1_182B9C1E078022EA_METHOD_1_4B10614E1C1CD79D_OFFSET UNITYSDK_OFFSET(0x167FEC90)
#define CLASS_1_182B9C1E078022EA_METHOD_1_5C25F95FDDA722AC_OFFSET UNITYSDK_OFFSET(0x167FDA00)
#define CLASS_1_182B9C1E078022EA_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x167FF5A0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_730333BEF249B128_OFFSET UNITYSDK_OFFSET(0x167FD440)
#define CLASS_1_182B9C1E078022EA_METHOD_1_88A38449C90F61C7_OFFSET UNITYSDK_OFFSET(0x167FE000)
#define CLASS_1_182B9C1E078022EA_METHOD_1_9199ED8D6E75C674_OFFSET UNITYSDK_OFFSET(0x167FEF00)
#define CLASS_1_182B9C1E078022EA_METHOD_1_9263023380DC172C_OFFSET UNITYSDK_OFFSET(0x167FF740)
#define CLASS_1_182B9C1E078022EA_METHOD_1_96E82C37F6E585C5_OFFSET UNITYSDK_OFFSET(0x167FF2D0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_B3951169BD0FC0AB_OFFSET UNITYSDK_OFFSET(0x167FEF10)
#define CLASS_1_182B9C1E078022EA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167FE310)
#define CLASS_1_182B9C1E078022EA_METHOD_1_D30CC5B4F0E44E1B_OFFSET UNITYSDK_OFFSET(0x167FDAD0)
#define CLASS_1_182B9C1E078022EA_METHOD_1_F694B421797D6F27_OFFSET UNITYSDK_OFFSET(0x167FDB40)
#define CLASS_1_182B9C1E078022EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x167FC9E0)
#define CLASS_1_182B9C1E078022EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167FC480)
#define CLASS_1_182B9C1E078022EA__CTOR_OFFSET UNITYSDK_OFFSET(0x167FBF30)

inline static constexpr unsigned int Class_1_182B9C1E078022EA_TypeDefinitionIndex = 85545;

class Class_1_182B9C1E078022EA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_Field_1_22()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_182B9C1E078022EA_TypeDefinitionIndex)->GetStaticField(0x50270);
	}
	// static const ::System::String* Field_1_9; // 0x0
	::Class_1_3C44DCABCC8A5FD5* Field_1_12; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>* Field_1_2; // 0x18
	::System::Text::StringBuilder* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_6; // 0x28
	::System::Type* Field_1_18; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A391FBC09B5D7A1C>* Field_1_0; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_2C3CB84E07DDE41A>* Field_1_1; // 0x48
	::System::Text::RegularExpressions::Regex* Field_1_8; // 0x50
	::Class_0_16E4307DCC419505_204* Field_1_16; // 0x58
	::System::String* Field_1_11; // 0x60
	::System::Type* Field_1_17; // 0x68
	::System::String* Field_1_23; // 0x70
	::System::String* Field_1_10; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_1_19; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_7; // 0x88
	::System::Boolean Field_1_14; // 0x90
	::System::Boolean Field_1_13; // 0x91
	::System::Boolean Field_1_15; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_204* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_204*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA__CCTOR_OFFSET))();
	}

	::Struct_2_ADAAACC33621CB14 Method_1_461A6EE07D8A988C(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_ADAAACC33621CB14(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_461A6EE07D8A988C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46E36AA2496B0D46(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_46E36AA2496B0D46_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_5C25F95FDDA722AC(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_5C25F95FDDA722AC_OFFSET))(a1);
	}

	::System::UInt64 Method_1_D30CC5B4F0E44E1B(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_D30CC5B4F0E44E1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F694B421797D6F27()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_F694B421797D6F27_OFFSET))(this);
	}

	::System::Void Method_1_88A38449C90F61C7(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_88A38449C90F61C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_46B75BEB9162D674(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_46B75BEB9162D674_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::ICollection_1<::System::String*>* Method_1_9199ED8D6E75C674()
	{
		return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_9199ED8D6E75C674_OFFSET))(this);
	}

	::System::Void Method_1_B3951169BD0FC0AB(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_B3951169BD0FC0AB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>* Method_1_96E82C37F6E585C5(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E4DCFD174698F990*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_96E82C37F6E585C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_730333BEF249B128(::System::String* a1, ::SimpleJSON::JSONNode* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_730333BEF249B128_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_6632BA9E17A7643A_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_9263023380DC172C(::SimpleJSON::JSONNode* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_9263023380DC172C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_26398B98C49ACBF1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_26398B98C49ACBF1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_4B10614E1C1CD79D(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3C44DCABCC8A5FD5*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_182B9C1E078022EA_METHOD_1_4B10614E1C1CD79D_OFFSET))(this, a1, a2, a3, a4);
	}
};
