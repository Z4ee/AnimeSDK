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

#define CLASS_1_83ADD41085B783DC_METHOD_1_02D79CA9DCC38223_OFFSET UNITYSDK_OFFSET(0x1D0EAE00)
#define CLASS_1_83ADD41085B783DC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D0EB160)
#define CLASS_1_83ADD41085B783DC_METHOD_1_2D32C7DA9FD2A715_OFFSET UNITYSDK_OFFSET(0x1D0EB1B0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_41D97E4CC5BE8ECF_OFFSET UNITYSDK_OFFSET(0x1D0EAC10)
#define CLASS_1_83ADD41085B783DC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0EAF90)
#define CLASS_1_83ADD41085B783DC_METHOD_1_9601FA34D907C8C6_OFFSET UNITYSDK_OFFSET(0x1D0EA900)
#define CLASS_1_83ADD41085B783DC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0EB020)
#define CLASS_1_83ADD41085B783DC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0EABB0)
#define CLASS_1_83ADD41085B783DC_METHOD_1_DD159454FB4AD5E1_OFFSET UNITYSDK_OFFSET(0x1D0EAD80)
#define CLASS_1_83ADD41085B783DC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0EA980)
#define CLASS_1_83ADD41085B783DC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0EAF50)
#define CLASS_1_83ADD41085B783DC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0EB0C0)
#define CLASS_1_83ADD41085B783DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EB4D0)

inline static constexpr unsigned int Class_1_83ADD41085B783DC_TypeDefinitionIndex = 11200;

class Class_1_83ADD41085B783DC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x17E90);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x17E98);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x17EA0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x8CB0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83ADD41085B783DC_TypeDefinitionIndex)->GetStaticField(0x8CB1);
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
