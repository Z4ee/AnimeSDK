#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5887E7E1C61B6AED_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D1E8D20)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_34E8F9E19A65B781_OFFSET UNITYSDK_OFFSET(0x1D1E8480)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_407A57CC1C0C8AB6_OFFSET UNITYSDK_OFFSET(0x1D1E8790)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_5470EB7481686A89_OFFSET UNITYSDK_OFFSET(0x1D1E8D70)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1E8B50)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1E8BE0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_BF34E4257F2C5F5C_OFFSET UNITYSDK_OFFSET(0x1D1E8900)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_C33B66F3314CF12A_OFFSET UNITYSDK_OFFSET(0x1D1E8980)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1E8730)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1E8500)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1E8B10)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1E8C80)
#define CLASS_1_5887E7E1C61B6AED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E90E0)

inline static constexpr unsigned int Class_1_5887E7E1C61B6AED_TypeDefinitionIndex = 11230;

class Class_1_5887E7E1C61B6AED : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x3B610);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x3B618);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x3B620);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0xF410);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0xF411);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>* Method_1_34E8F9E19A65B781()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_34E8F9E19A65B781_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*> Method_1_407A57CC1C0C8AB6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_407A57CC1C0C8AB6_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>, ::RPG::GameCore::ActivityDiceCombatShopRow*> Method_1_BF34E4257F2C5F5C()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>, ::RPG::GameCore::ActivityDiceCombatShopRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_BF34E4257F2C5F5C_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatShopRow* Method_1_C33B66F3314CF12A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_C33B66F3314CF12A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5470EB7481686A89(::RPG::GameCore::ActivityDiceCombatShopRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatShopRow*))((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_5470EB7481686A89_OFFSET))(a1);
	}
};
