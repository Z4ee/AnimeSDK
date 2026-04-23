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

#define CLASS_1_6F146227E7E8C950_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x181F6240)
#define CLASS_1_6F146227E7E8C950_METHOD_1_2EA5BD7751B78487_OFFSET UNITYSDK_OFFSET(0x181F5BE0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x181F6060)
#define CLASS_1_6F146227E7E8C950_METHOD_1_51F9AF801841FEBA_OFFSET UNITYSDK_OFFSET(0x181F5E50)
#define CLASS_1_6F146227E7E8C950_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x181F5930)
#define CLASS_1_6F146227E7E8C950_METHOD_1_89BE949BE8B34E0C_OFFSET UNITYSDK_OFFSET(0x181F5D90)
#define CLASS_1_6F146227E7E8C950_METHOD_1_ACCDE0D13317F092_OFFSET UNITYSDK_OFFSET(0x181F58B0)
#define CLASS_1_6F146227E7E8C950_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x181F6100)
#define CLASS_1_6F146227E7E8C950_METHOD_1_CBDF6EC8C47E6110_OFFSET UNITYSDK_OFFSET(0x181F6290)
#define CLASS_1_6F146227E7E8C950_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x181F5B80)
#define CLASS_1_6F146227E7E8C950_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x181F6020)
#define CLASS_1_6F146227E7E8C950_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x181F61A0)
#define CLASS_1_6F146227E7E8C950__CCTOR_OFFSET UNITYSDK_OFFSET(0x181F65F0)

inline static constexpr unsigned int Class_1_6F146227E7E8C950_TypeDefinitionIndex = 10775;

class Class_1_6F146227E7E8C950 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x1E130);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x1E138);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x1E140);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x7BA0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F146227E7E8C950_TypeDefinitionIndex)->GetStaticField(0x7BA1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*> Method_1_2EA5BD7751B78487()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_2EA5BD7751B78487_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*> Method_1_89BE949BE8B34E0C()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>, ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_89BE949BE8B34E0C_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* Method_1_51F9AF801841FEBA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatSpecialRuleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_51F9AF801841FEBA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F146227E7E8C950_METHOD_1_30D1209326FA87FC_OFFSET))();
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
