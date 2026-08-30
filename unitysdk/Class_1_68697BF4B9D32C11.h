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

#define CLASS_1_68697BF4B9D32C11_METHOD_1_0062B3EBF3E9BBB5_OFFSET UNITYSDK_OFFSET(0x1D1E2CA0)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D1E3060)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_1B054FAE9F6D956D_OFFSET UNITYSDK_OFFSET(0x1D1E2820)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_822278544B29F0AA_OFFSET UNITYSDK_OFFSET(0x1D1E2B30)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1E2E90)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1E2F20)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1E2AD0)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1E28A0)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1E2E50)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1E2FC0)
#define CLASS_1_68697BF4B9D32C11_METHOD_1_FFBD8788952EF133_OFFSET UNITYSDK_OFFSET(0x1D1E30B0)
#define CLASS_1_68697BF4B9D32C11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3420)

inline static constexpr unsigned int Class_1_68697BF4B9D32C11_TypeDefinitionIndex = 13002;

class Class_1_68697BF4B9D32C11 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0x3AF80);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0x3AF88);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0x3AF90);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0xF210);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_68697BF4B9D32C11_TypeDefinitionIndex)->GetStaticField(0xF211);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*> Method_1_822278544B29F0AA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_822278544B29F0AA_OFFSET))();
	}

	static ::RPG::GameCore::UniqueActorRow* Method_1_0062B3EBF3E9BBB5(::System::String* a1)
	{
		return ((::RPG::GameCore::UniqueActorRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_0062B3EBF3E9BBB5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_68697BF4B9D32C11_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
