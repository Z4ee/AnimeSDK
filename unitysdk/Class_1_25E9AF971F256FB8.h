#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FuncUnlockHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_25E9AF971F256FB8_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x191F6400)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x191F6230)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_94D96514CEF28657_OFFSET UNITYSDK_OFFSET(0x191F60A0)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_A12328BF4CD497A9_OFFSET UNITYSDK_OFFSET(0x191F6450)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191F62C0)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_BCE60A54F08D1411_OFFSET UNITYSDK_OFFSET(0x191F5F30)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191F5ED0)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_D5DA0A4549B3FC6C_OFFSET UNITYSDK_OFFSET(0x191F5C20)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x191F5CA0)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191F61F0)
#define CLASS_1_25E9AF971F256FB8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191F6360)
#define CLASS_1_25E9AF971F256FB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x191F6770)

inline static constexpr unsigned int Class_1_25E9AF971F256FB8_TypeDefinitionIndex = 12686;

class Class_1_25E9AF971F256FB8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25E9AF971F256FB8_TypeDefinitionIndex)->GetStaticField(0x4FA70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25E9AF971F256FB8_TypeDefinitionIndex)->GetStaticField(0x4FA78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25E9AF971F256FB8_TypeDefinitionIndex)->GetStaticField(0x4FA80);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_25E9AF971F256FB8_TypeDefinitionIndex)->GetStaticField(0xF8C0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_25E9AF971F256FB8_TypeDefinitionIndex)->GetStaticField(0xF8C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>* Method_1_D5DA0A4549B3FC6C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_D5DA0A4549B3FC6C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*> Method_1_BCE60A54F08D1411()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_BCE60A54F08D1411_OFFSET))();
	}

	static ::RPG::GameCore::FuncUnlockHintRow* Method_1_94D96514CEF28657(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FuncUnlockHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_94D96514CEF28657_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A12328BF4CD497A9(::RPG::GameCore::FuncUnlockHintRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FuncUnlockHintRow*))((::PBYTE)hIl2Cpp + CLASS_1_25E9AF971F256FB8_METHOD_1_A12328BF4CD497A9_OFFSET))(a1);
	}
};
