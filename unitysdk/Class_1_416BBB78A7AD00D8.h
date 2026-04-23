#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerGuestCommentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_416BBB78A7AD00D8_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18426D30)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18426B50)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_366E342095D8912A_OFFSET UNITYSDK_OFFSET(0x18426940)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_54A3CB3CF5CDE0D4_OFFSET UNITYSDK_OFFSET(0x18426460)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x184264E0)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18426BF0)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18426730)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_CED8FC8E53E6BDF1_OFFSET UNITYSDK_OFFSET(0x18426790)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_D5AB5BB21A13A430_OFFSET UNITYSDK_OFFSET(0x18426D80)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18426B10)
#define CLASS_1_416BBB78A7AD00D8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18426C90)
#define CLASS_1_416BBB78A7AD00D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x184270E0)

inline static constexpr unsigned int Class_1_416BBB78A7AD00D8_TypeDefinitionIndex = 12474;

class Class_1_416BBB78A7AD00D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_416BBB78A7AD00D8_TypeDefinitionIndex)->GetStaticField(0x28910);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_416BBB78A7AD00D8_TypeDefinitionIndex)->GetStaticField(0x28918);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_416BBB78A7AD00D8_TypeDefinitionIndex)->GetStaticField(0x28920);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_416BBB78A7AD00D8_TypeDefinitionIndex)->GetStaticField(0xAC40);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_416BBB78A7AD00D8_TypeDefinitionIndex)->GetStaticField(0xAC41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>* Method_1_54A3CB3CF5CDE0D4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_54A3CB3CF5CDE0D4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*> Method_1_CED8FC8E53E6BDF1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestCommentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_CED8FC8E53E6BDF1_OFFSET))();
	}

	static ::RPG::GameCore::DrinkMakerGuestCommentRow* Method_1_366E342095D8912A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DrinkMakerGuestCommentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_366E342095D8912A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D5AB5BB21A13A430(::RPG::GameCore::DrinkMakerGuestCommentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DrinkMakerGuestCommentRow*))((::PBYTE)hIl2Cpp + CLASS_1_416BBB78A7AD00D8_METHOD_1_D5AB5BB21A13A430_OFFSET))(a1);
	}
};
