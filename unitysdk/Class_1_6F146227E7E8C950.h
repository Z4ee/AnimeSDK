#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6F146227E7E8C950_METHOD_1_00E9426982FEDE5B_OFFSET UNITYSDK_OFFSET(0x1C75FB50)
#define CLASS_1_6F146227E7E8C950_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C7600E0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_0F4EBB4D18DC5725_OFFSET UNITYSDK_OFFSET(0x1C75FCC0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_3F8BF0D28AB06151_OFFSET UNITYSDK_OFFSET(0x1C75FD40)
#define CLASS_1_6F146227E7E8C950_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C75FF10)
#define CLASS_1_6F146227E7E8C950_METHOD_1_ACCDE0D13317F092_OFFSET UNITYSDK_OFFSET(0x1C75F840)
#define CLASS_1_6F146227E7E8C950_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C75FFA0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_CBDF6EC8C47E6110_OFFSET UNITYSDK_OFFSET(0x1C760130)
#define CLASS_1_6F146227E7E8C950_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C75FAF0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C75F8C0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C75FED0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C760040)
#define CLASS_1_6F146227E7E8C950__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7604A0)

inline static constexpr unsigned int Class_1_6F146227E7E8C950_TypeDefinitionIndex = 11255;

class Class_1_6F146227E7E8C950 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x28530);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x28538);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x28540);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0xBE30);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0xBE31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>* Method_1_ACCDE0D13317F092()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_ACCDE0D13317F092_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*> Method_1_00E9426982FEDE5B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_00E9426982FEDE5B_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*> Method_1_0F4EBB4D18DC5725()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_0F4EBB4D18DC5725_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* Method_1_3F8BF0D28AB06151(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_3F8BF0D28AB06151_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_CBDF6EC8C47E6110(::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*))((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_CBDF6EC8C47E6110_OFFSET))(a1);
	}
};
