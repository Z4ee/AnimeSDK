#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirEquipPriceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_801B97C6854B556F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18FBFF20)
#define CLASS_1_801B97C6854B556F_METHOD_1_17D8293D57AE161D_OFFSET UNITYSDK_OFFSET(0x18FBFB30)
#define CLASS_1_801B97C6854B556F_METHOD_1_2FB4990F2FC6D7FC_OFFSET UNITYSDK_OFFSET(0x18FBF9C0)
#define CLASS_1_801B97C6854B556F_METHOD_1_4F584C8FE2D9CCC5_OFFSET UNITYSDK_OFFSET(0x18FBFF70)
#define CLASS_1_801B97C6854B556F_METHOD_1_8378BB70EE1AFA07_OFFSET UNITYSDK_OFFSET(0x18FBF6B0)
#define CLASS_1_801B97C6854B556F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FBFD50)
#define CLASS_1_801B97C6854B556F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FBFDE0)
#define CLASS_1_801B97C6854B556F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FBF960)
#define CLASS_1_801B97C6854B556F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FBF730)
#define CLASS_1_801B97C6854B556F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FBFD10)
#define CLASS_1_801B97C6854B556F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FBFE80)
#define CLASS_1_801B97C6854B556F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FC0320)

inline static constexpr unsigned int Class_1_801B97C6854B556F_TypeDefinitionIndex = 11594;

class Class_1_801B97C6854B556F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_801B97C6854B556F_TypeDefinitionIndex)->GetStaticField(0x34F70);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_801B97C6854B556F_TypeDefinitionIndex)->GetStaticField(0x34F78);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_801B97C6854B556F_TypeDefinitionIndex)->GetStaticField(0x34F80);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_801B97C6854B556F_TypeDefinitionIndex)->GetStaticField(0xA6B0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_801B97C6854B556F_TypeDefinitionIndex)->GetStaticField(0xA6B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>* Method_1_8378BB70EE1AFA07()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_8378BB70EE1AFA07_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*> Method_1_2FB4990F2FC6D7FC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEquipPriceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_2FB4990F2FC6D7FC_OFFSET))();
	}

	static ::RPG::GameCore::PixAirEquipPriceRow* Method_1_17D8293D57AE161D(::RPG::GameCore::PixAirSlotType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::PixAirEquipPriceRow*(*)(::RPG::GameCore::PixAirSlotType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_17D8293D57AE161D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4F584C8FE2D9CCC5(::RPG::GameCore::PixAirEquipPriceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PixAirEquipPriceRow*))((::PBYTE)hIl2Cpp + CLASS_1_801B97C6854B556F_METHOD_1_4F584C8FE2D9CCC5_OFFSET))(a1);
	}
};
