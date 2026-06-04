#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_83ADD41085B783DC_METHOD_1_02D79CA9DCC38223_OFFSET UNITYSDK_OFFSET(0x19E7C150)
#define CLASS_1_83ADD41085B783DC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19E7C4B0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_2D32C7DA9FD2A715_OFFSET UNITYSDK_OFFSET(0x19E7C500)
#define CLASS_1_83ADD41085B783DC_METHOD_1_41D97E4CC5BE8ECF_OFFSET UNITYSDK_OFFSET(0x19E7BF60)
#define CLASS_1_83ADD41085B783DC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19E7C2E0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_9601FA34D907C8C6_OFFSET UNITYSDK_OFFSET(0x19E7BC50)
#define CLASS_1_83ADD41085B783DC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19E7C370)
#define CLASS_1_83ADD41085B783DC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19E7BF00)
#define CLASS_1_83ADD41085B783DC_METHOD_1_DD159454FB4AD5E1_OFFSET UNITYSDK_OFFSET(0x19E7C0D0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19E7BCD0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19E7C2A0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19E7C410)
#define CLASS_1_83ADD41085B783DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E7C820)

inline static constexpr unsigned int Class_1_83ADD41085B783DC_TypeDefinitionIndex = 10775;

class Class_1_83ADD41085B783DC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x4D2B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x4D2B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x4D2C0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0xEC00);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0xEC01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>* Method_1_9601FA34D907C8C6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_9601FA34D907C8C6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*> Method_1_41D97E4CC5BE8ECF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_41D97E4CC5BE8ECF_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>, ::RPG::GameCore::ActivityTagRow*> Method_1_DD159454FB4AD5E1()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>, ::RPG::GameCore::ActivityTagRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_DD159454FB4AD5E1_OFFSET))();
	}

	static ::RPG::GameCore::ActivityTagRow* Method_1_02D79CA9DCC38223(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_02D79CA9DCC38223_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D32C7DA9FD2A715(::RPG::GameCore::ActivityTagRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityTagRow*))((::PBYTE)hIl2Cpp + CLASS_1_83ADD41085B783DC_METHOD_1_2D32C7DA9FD2A715_OFFSET))(a1);
	}
};
