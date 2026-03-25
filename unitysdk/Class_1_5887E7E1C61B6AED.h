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

#define CLASS_1_5887E7E1C61B6AED_METHOD_1_055AD22CA741AC8D_OFFSET UNITYSDK_OFFSET(0x16C78CF0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C791A0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C78FC0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_34E8F9E19A65B781_OFFSET UNITYSDK_OFFSET(0x16C78810)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_5470EB7481686A89_OFFSET UNITYSDK_OFFSET(0x16C791F0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_639D4554F53DFA7D_OFFSET UNITYSDK_OFFSET(0x16C78DB0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C78890)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C79060)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C78AE0)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C78F80)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C79100)
#define CLASS_1_5887E7E1C61B6AED_METHOD_1_F7DA22D3B305D67A_OFFSET UNITYSDK_OFFSET(0x16C78B40)
#define CLASS_1_5887E7E1C61B6AED__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C79550)

inline static constexpr unsigned int Class_1_5887E7E1C61B6AED_TypeDefinitionIndex = 10526;

class Class_1_5887E7E1C61B6AED : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x46D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x46D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x46E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x26A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5887E7E1C61B6AED_TypeDefinitionIndex)->GetStaticField(0x26A1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*> Method_1_F7DA22D3B305D67A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_F7DA22D3B305D67A_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>, ::RPG::GameCore::ActivityDiceCombatShopRow*> Method_1_055AD22CA741AC8D()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatShopRow*>, ::RPG::GameCore::ActivityDiceCombatShopRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_055AD22CA741AC8D_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatShopRow* Method_1_639D4554F53DFA7D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_639D4554F53DFA7D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5887E7E1C61B6AED_METHOD_1_30D1209326FA87FC_OFFSET))();
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
