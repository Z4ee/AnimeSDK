#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantSeedConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BF3FF88AE280E251_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F42AF0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_507228A2190CBEF5_OFFSET UNITYSDK_OFFSET(0x18F42350)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F42920)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_93BD5D462D4DEE6A_OFFSET UNITYSDK_OFFSET(0x18F42B40)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F429B0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F42600)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_DAA4BD9D37B203DF_OFFSET UNITYSDK_OFFSET(0x18F42660)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F423D0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_E19F7F2108622558_OFFSET UNITYSDK_OFFSET(0x18F42790)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F428E0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F42A50)
#define CLASS_1_BF3FF88AE280E251__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F42E60)

inline static constexpr unsigned int Class_1_BF3FF88AE280E251_TypeDefinitionIndex = 10935;

class Class_1_BF3FF88AE280E251 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x34EE0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x34EE8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x34EF0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0xA680);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0xA681);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>* Method_1_507228A2190CBEF5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_507228A2190CBEF5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*> Method_1_DAA4BD9D37B203DF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_DAA4BD9D37B203DF_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantSeedConfigRow* Method_1_E19F7F2108622558(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantSeedConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_E19F7F2108622558_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_93BD5D462D4DEE6A(::RPG::GameCore::RestaurantSeedConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantSeedConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_BF3FF88AE280E251_METHOD_1_93BD5D462D4DEE6A_OFFSET))(a1);
	}
};
