#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirEquipEnchantRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_71C723CB353453F7_METHOD_1_012F0FF50E2C5227_OFFSET UNITYSDK_OFFSET(0x1D07C9C0)
#define CLASS_1_71C723CB353453F7_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D07D230)
#define CLASS_1_71C723CB353453F7_METHOD_1_29EF2EBCC976AF56_OFFSET UNITYSDK_OFFSET(0x1D07CE40)
#define CLASS_1_71C723CB353453F7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D07D060)
#define CLASS_1_71C723CB353453F7_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D07D0F0)
#define CLASS_1_71C723CB353453F7_METHOD_1_C3173E44860C6B1D_OFFSET UNITYSDK_OFFSET(0x1D07D280)
#define CLASS_1_71C723CB353453F7_METHOD_1_CAE0CF70CC926490_OFFSET UNITYSDK_OFFSET(0x1D07CCD0)
#define CLASS_1_71C723CB353453F7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D07CC70)
#define CLASS_1_71C723CB353453F7_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D07CA40)
#define CLASS_1_71C723CB353453F7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D07D020)
#define CLASS_1_71C723CB353453F7_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D07D190)
#define CLASS_1_71C723CB353453F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D07D620)

inline static constexpr unsigned int Class_1_71C723CB353453F7_TypeDefinitionIndex = 12079;

class Class_1_71C723CB353453F7 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C723CB353453F7_TypeDefinitionIndex)->GetStaticField(0x1F0A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C723CB353453F7_TypeDefinitionIndex)->GetStaticField(0x1F0A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C723CB353453F7_TypeDefinitionIndex)->GetStaticField(0x1F0B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C723CB353453F7_TypeDefinitionIndex)->GetStaticField(0xA4A0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C723CB353453F7_TypeDefinitionIndex)->GetStaticField(0xA4A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>* Method_1_012F0FF50E2C5227()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_012F0FF50E2C5227_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*> Method_1_CAE0CF70CC926490()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipEnchantRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_CAE0CF70CC926490_OFFSET))();
	}

	static ::RPG::GameCore::PixAirEquipEnchantRow* Method_1_29EF2EBCC976AF56(::System::UInt32 a1, ::RPG::GameCore::PixAirEnchantmentType a2)
	{
		return ((::RPG::GameCore::PixAirEquipEnchantRow*(*)(::System::UInt32, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_29EF2EBCC976AF56_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_C3173E44860C6B1D(::RPG::GameCore::PixAirEquipEnchantRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PixAirEquipEnchantRow*))((::PBYTE)hIl2Cpp + CLASS_1_71C723CB353453F7_METHOD_1_C3173E44860C6B1D_OFFSET))(a1);
	}
};
