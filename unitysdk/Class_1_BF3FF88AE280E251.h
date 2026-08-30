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

#define CLASS_1_BF3FF88AE280E251_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C7165A0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_507228A2190CBEF5_OFFSET UNITYSDK_OFFSET(0x1C715E00)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7163D0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_93BD5D462D4DEE6A_OFFSET UNITYSDK_OFFSET(0x1C7165F0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C716460)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7160B0)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_DAA4BD9D37B203DF_OFFSET UNITYSDK_OFFSET(0x1C716110)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C715E80)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_E19F7F2108622558_OFFSET UNITYSDK_OFFSET(0x1C716240)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C716390)
#define CLASS_1_BF3FF88AE280E251_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C716500)
#define CLASS_1_BF3FF88AE280E251__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C716910)

inline static constexpr unsigned int Class_1_BF3FF88AE280E251_TypeDefinitionIndex = 11360;

class Class_1_BF3FF88AE280E251 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSeedConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x48F70);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x48F78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x48F80);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x10C10);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF3FF88AE280E251_TypeDefinitionIndex)->GetStaticField(0x10C11);
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
