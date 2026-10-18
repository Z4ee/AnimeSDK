#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatGoodsUnlockTipsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D1B3890)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_56256968451ED441_OFFSET UNITYSDK_OFFSET(0x1D1B38E0)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_79D00BC415B086D2_OFFSET UNITYSDK_OFFSET(0x1D1B3470)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1B36C0)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1B3750)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_B846D993A26EB96F_OFFSET UNITYSDK_OFFSET(0x1D1B2FF0)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_B9DADD7183D1CFBC_OFFSET UNITYSDK_OFFSET(0x1D1B3300)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1B32A0)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_D5BA1BD65D045812_OFFSET UNITYSDK_OFFSET(0x1D1B34F0)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1B3070)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1B3680)
#define CLASS_1_C1AF8F20426EA1F7_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1B37F0)
#define CLASS_1_C1AF8F20426EA1F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B3C50)

inline static constexpr unsigned int Class_1_C1AF8F20426EA1F7_TypeDefinitionIndex = 11250;

class Class_1_C1AF8F20426EA1F7 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1AF8F20426EA1F7_TypeDefinitionIndex)->GetStaticField(0x4D6C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1AF8F20426EA1F7_TypeDefinitionIndex)->GetStaticField(0x4D6C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1AF8F20426EA1F7_TypeDefinitionIndex)->GetStaticField(0x4D6D0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1AF8F20426EA1F7_TypeDefinitionIndex)->GetStaticField(0x11CA0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1AF8F20426EA1F7_TypeDefinitionIndex)->GetStaticField(0x11CA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>* Method_1_B846D993A26EB96F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_B846D993A26EB96F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*> Method_1_B9DADD7183D1CFBC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_B9DADD7183D1CFBC_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*> Method_1_79D00BC415B086D2()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>, ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_79D00BC415B086D2_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow* Method_1_D5BA1BD65D045812(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_D5BA1BD65D045812_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_56256968451ED441(::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatGoodsUnlockTipsRow*))((::PBYTE)hIl2Cpp + CLASS_1_C1AF8F20426EA1F7_METHOD_1_56256968451ED441_OFFSET))(a1);
	}
};
