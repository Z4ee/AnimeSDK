#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatAvatarLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2AD52ACB62816254_METHOD_1_05A48C983A1ACED6_OFFSET UNITYSDK_OFFSET(0x182CD690)
#define CLASS_1_2AD52ACB62816254_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x182CDA80)
#define CLASS_1_2AD52ACB62816254_METHOD_1_2AE2DF4BB973F228_OFFSET UNITYSDK_OFFSET(0x182CD5D0)
#define CLASS_1_2AD52ACB62816254_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182CD8A0)
#define CLASS_1_2AD52ACB62816254_METHOD_1_63913B909B214CFE_OFFSET UNITYSDK_OFFSET(0x182CD0F0)
#define CLASS_1_2AD52ACB62816254_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182CD170)
#define CLASS_1_2AD52ACB62816254_METHOD_1_7C2C87A74EA1E8C3_OFFSET UNITYSDK_OFFSET(0x182CD420)
#define CLASS_1_2AD52ACB62816254_METHOD_1_93E109F89E1CD594_OFFSET UNITYSDK_OFFSET(0x182CDAD0)
#define CLASS_1_2AD52ACB62816254_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182CD940)
#define CLASS_1_2AD52ACB62816254_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182CD3C0)
#define CLASS_1_2AD52ACB62816254_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182CD860)
#define CLASS_1_2AD52ACB62816254_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182CD9E0)
#define CLASS_1_2AD52ACB62816254__CCTOR_OFFSET UNITYSDK_OFFSET(0x182CDE30)

inline static constexpr unsigned int Class_1_2AD52ACB62816254_TypeDefinitionIndex = 10770;

class Class_1_2AD52ACB62816254 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AD52ACB62816254_TypeDefinitionIndex)->GetStaticField(0x22C10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AD52ACB62816254_TypeDefinitionIndex)->GetStaticField(0x22C18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AD52ACB62816254_TypeDefinitionIndex)->GetStaticField(0x22C20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AD52ACB62816254_TypeDefinitionIndex)->GetStaticField(0x8CB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2AD52ACB62816254_TypeDefinitionIndex)->GetStaticField(0x8CB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>* Method_1_63913B909B214CFE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_63913B909B214CFE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*> Method_1_7C2C87A74EA1E8C3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_7C2C87A74EA1E8C3_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*> Method_1_2AE2DF4BB973F228()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_2AE2DF4BB973F228_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* Method_1_05A48C983A1ACED6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_05A48C983A1ACED6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_93E109F89E1CD594(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_2AD52ACB62816254_METHOD_1_93E109F89E1CD594_OFFSET))(a1);
	}
};
