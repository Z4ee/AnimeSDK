#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhoneCaseConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6514C65E57D2C30B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19EA4420)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_2A717DD69EB76879_OFFSET UNITYSDK_OFFSET(0x19EA4470)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_55CACEBD93A8E224_OFFSET UNITYSDK_OFFSET(0x19EA3F10)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19EA4250)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_8E355907FC60606B_OFFSET UNITYSDK_OFFSET(0x19EA3C00)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19EA42E0)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_BE9A4D626ACE248A_OFFSET UNITYSDK_OFFSET(0x19EA4080)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19EA3EB0)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19EA3C80)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19EA4210)
#define CLASS_1_6514C65E57D2C30B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19EA4380)
#define CLASS_1_6514C65E57D2C30B__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EA47E0)

inline static constexpr unsigned int Class_1_6514C65E57D2C30B_TypeDefinitionIndex = 13719;

class Class_1_6514C65E57D2C30B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6514C65E57D2C30B_TypeDefinitionIndex)->GetStaticField(0x4E390);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6514C65E57D2C30B_TypeDefinitionIndex)->GetStaticField(0x4E398);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6514C65E57D2C30B_TypeDefinitionIndex)->GetStaticField(0x4E3A0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6514C65E57D2C30B_TypeDefinitionIndex)->GetStaticField(0xF190);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6514C65E57D2C30B_TypeDefinitionIndex)->GetStaticField(0xF191);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>* Method_1_8E355907FC60606B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_8E355907FC60606B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*> Method_1_55CACEBD93A8E224()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_55CACEBD93A8E224_OFFSET))();
	}

	static ::RPG::GameCore::PhoneCaseConfigRow* Method_1_BE9A4D626ACE248A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PhoneCaseConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_BE9A4D626ACE248A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2A717DD69EB76879(::RPG::GameCore::PhoneCaseConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PhoneCaseConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6514C65E57D2C30B_METHOD_1_2A717DD69EB76879_OFFSET))(a1);
	}
};
