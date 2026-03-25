#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatUnlockTipsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F13CF90A7CF59E77_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16DF67C0)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_2EF4FCD60CC1E01F_OFFSET UNITYSDK_OFFSET(0x16DF6310)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DF65E0)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_3C9DFD9F47A6FB88_OFFSET UNITYSDK_OFFSET(0x16DF63D0)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DF5EB0)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_83EC9DFD599A4973_OFFSET UNITYSDK_OFFSET(0x16DF6810)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_86A57388D93B25DB_OFFSET UNITYSDK_OFFSET(0x16DF5E30)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_9620B660FE1635DC_OFFSET UNITYSDK_OFFSET(0x16DF6160)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DF6680)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DF6100)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DF65A0)
#define CLASS_1_F13CF90A7CF59E77_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DF6720)
#define CLASS_1_F13CF90A7CF59E77__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DF6B70)

inline static constexpr unsigned int Class_1_F13CF90A7CF59E77_TypeDefinitionIndex = 10530;

class Class_1_F13CF90A7CF59E77 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13CF90A7CF59E77_TypeDefinitionIndex)->GetStaticField(0x180B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13CF90A7CF59E77_TypeDefinitionIndex)->GetStaticField(0x180B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13CF90A7CF59E77_TypeDefinitionIndex)->GetStaticField(0x180C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13CF90A7CF59E77_TypeDefinitionIndex)->GetStaticField(0x6D90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13CF90A7CF59E77_TypeDefinitionIndex)->GetStaticField(0x6D91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>* Method_1_86A57388D93B25DB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_86A57388D93B25DB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*> Method_1_9620B660FE1635DC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_9620B660FE1635DC_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*> Method_1_2EF4FCD60CC1E01F()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>, ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_2EF4FCD60CC1E01F_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatUnlockTipsRow* Method_1_3C9DFD9F47A6FB88(::RPG::GameCore::ConditionType a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*(*)(::RPG::GameCore::ConditionType))((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_3C9DFD9F47A6FB88_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_83EC9DFD599A4973(::RPG::GameCore::ActivityDiceCombatUnlockTipsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatUnlockTipsRow*))((::PBYTE)hIl2Cpp + CLASS_1_F13CF90A7CF59E77_METHOD_1_83EC9DFD599A4973_OFFSET))(a1);
	}
};
