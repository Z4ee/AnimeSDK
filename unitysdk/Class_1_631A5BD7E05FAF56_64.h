#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_E2ED5CFC288D1227;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CEBA6A0)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x1CEBA6F0)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_259066F45778461D_OFFSET UNITYSDK_OFFSET(0x1CEBA300)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_6B371E7FD4C13999_OFFSET UNITYSDK_OFFSET(0x1CEBA110)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_7E80B35EF5C1C6BE_OFFSET UNITYSDK_OFFSET(0x1CEBA280)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEBA4D0)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1CEB9E00)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEBA560)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEBA0B0)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEB9E80)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEBA490)
#define CLASS_1_631A5BD7E05FAF56_64_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEBA600)
#define CLASS_1_631A5BD7E05FAF56_64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBAA60)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_64_TypeDefinitionIndex = 11559;

class Class_1_631A5BD7E05FAF56_64 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_64_TypeDefinitionIndex)->GetStaticField(0x36DC0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_64_TypeDefinitionIndex)->GetStaticField(0x36DC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_64_TypeDefinitionIndex)->GetStaticField(0x36DD0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_64_TypeDefinitionIndex)->GetStaticField(0xE6A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_64_TypeDefinitionIndex)->GetStaticField(0xE6A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*> Method_1_6B371E7FD4C13999()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_6B371E7FD4C13999_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>, ::Class_1_E2ED5CFC288D1227*> Method_1_7E80B35EF5C1C6BE()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_E2ED5CFC288D1227*>, ::Class_1_E2ED5CFC288D1227*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_7E80B35EF5C1C6BE_OFFSET))();
	}

	static ::Class_1_E2ED5CFC288D1227* Method_1_259066F45778461D(::System::UInt32 a1)
	{
		return ((::Class_1_E2ED5CFC288D1227*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_259066F45778461D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C490FF1F071E8D4(::Class_1_E2ED5CFC288D1227* a1)
	{
		return ((::System::Void(*)(::Class_1_E2ED5CFC288D1227*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_64_METHOD_1_0C490FF1F071E8D4_OFFSET))(a1);
	}
};
