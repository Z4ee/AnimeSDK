#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveTeamSlotUpgradeCostRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19160F50)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19160D70)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19160730)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_762ADAFD64295CED_OFFSET UNITYSDK_OFFSET(0x19160B60)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_840206D6908EB320_OFFSET UNITYSDK_OFFSET(0x19160FA0)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19160E10)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19160980)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_D05ED7B1662EE25B_OFFSET UNITYSDK_OFFSET(0x191609E0)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19160D30)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19160EB0)
#define CLASS_1_0B3F1BF669C61CBB_METHOD_1_F4563A81BF89A82B_OFFSET UNITYSDK_OFFSET(0x191606B0)
#define CLASS_1_0B3F1BF669C61CBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x191612B0)

inline static constexpr unsigned int Class_1_0B3F1BF669C61CBB_TypeDefinitionIndex = 11126;

class Class_1_0B3F1BF669C61CBB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3F1BF669C61CBB_TypeDefinitionIndex)->GetStaticField(0x422F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3F1BF669C61CBB_TypeDefinitionIndex)->GetStaticField(0x422F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3F1BF669C61CBB_TypeDefinitionIndex)->GetStaticField(0x42300);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3F1BF669C61CBB_TypeDefinitionIndex)->GetStaticField(0xED50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B3F1BF669C61CBB_TypeDefinitionIndex)->GetStaticField(0xED51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>* Method_1_F4563A81BF89A82B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_F4563A81BF89A82B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*> Method_1_D05ED7B1662EE25B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_D05ED7B1662EE25B_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow* Method_1_762ADAFD64295CED(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_762ADAFD64295CED_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_840206D6908EB320(::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotUpgradeCostRow*))((::PBYTE)hIl2Cpp + CLASS_1_0B3F1BF669C61CBB_METHOD_1_840206D6908EB320_OFFSET))(a1);
	}
};
