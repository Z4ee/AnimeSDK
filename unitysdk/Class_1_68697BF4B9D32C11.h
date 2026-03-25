#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UniqueActorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_68697BF4B9D32C11_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16B85120)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_1B054FAE9F6D956D_OFFSET UNITYSDK_OFFSET(0x16B84830)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B84F40)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_45B7733377675B8E_OFFSET UNITYSDK_OFFSET(0x16B84D10)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B848B0)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B84FE0)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B84B00)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_CE88166AD6898A1E_OFFSET UNITYSDK_OFFSET(0x16B84B60)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B84F00)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B85080)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_FFBD8788952EF133_OFFSET UNITYSDK_OFFSET(0x16B85170)
#define CLASS_1_68697BF4B9D32C11__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B854D0)

inline static constexpr unsigned int Class_1_68697BF4B9D32C11_TypeDefinitionIndex = 11955;

class Class_1_68697BF4B9D32C11 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0x2B190);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0x2B198);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0x2B1A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0xE3D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0xE3D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>* Method_1_1B054FAE9F6D956D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_1B054FAE9F6D956D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*> Method_1_CE88166AD6898A1E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_CE88166AD6898A1E_OFFSET))();
	}

	static ::RPG::GameCore::UniqueActorRow* Method_1_45B7733377675B8E(::System::String* a1)
	{
		return ((::RPG::GameCore::UniqueActorRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_45B7733377675B8E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_FFBD8788952EF133(::RPG::GameCore::UniqueActorRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::UniqueActorRow*))((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_FFBD8788952EF133_OFFSET))(a1);
	}
};
