#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantAbilityConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CEE7B10)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_12837A6F31750693_OFFSET UNITYSDK_OFFSET(0x1CEE7770)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_78C66EAD00A4F496_OFFSET UNITYSDK_OFFSET(0x1CEE7B60)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_8107FDD2A2290E62_OFFSET UNITYSDK_OFFSET(0x1CEE72F0)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEE7940)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEE79D0)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_BD2C8259C2CC380B_OFFSET UNITYSDK_OFFSET(0x1CEE7600)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEE75A0)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEE7370)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEE7900)
#define CLASS_1_78EAA3A3EC44DEE2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEE7A70)
#define CLASS_1_78EAA3A3EC44DEE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE7ED0)

inline static constexpr unsigned int Class_1_78EAA3A3EC44DEE2_TypeDefinitionIndex = 11327;

class Class_1_78EAA3A3EC44DEE2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78EAA3A3EC44DEE2_TypeDefinitionIndex)->GetStaticField(0x47CD0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78EAA3A3EC44DEE2_TypeDefinitionIndex)->GetStaticField(0x47CD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78EAA3A3EC44DEE2_TypeDefinitionIndex)->GetStaticField(0x47CE0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_78EAA3A3EC44DEE2_TypeDefinitionIndex)->GetStaticField(0x109C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_78EAA3A3EC44DEE2_TypeDefinitionIndex)->GetStaticField(0x109C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>* Method_1_8107FDD2A2290E62()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_8107FDD2A2290E62_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*> Method_1_BD2C8259C2CC380B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantAbilityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_BD2C8259C2CC380B_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantAbilityConfigRow* Method_1_12837A6F31750693(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantAbilityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_12837A6F31750693_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_78C66EAD00A4F496(::RPG::GameCore::RestaurantAbilityConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantAbilityConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_78EAA3A3EC44DEE2_METHOD_1_78C66EAD00A4F496_OFFSET))(a1);
	}
};
