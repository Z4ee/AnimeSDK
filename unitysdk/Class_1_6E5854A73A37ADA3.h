#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RandomEventChoiceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6E5854A73A37ADA3_METHOD_1_06D0F96C52589EC2_OFFSET UNITYSDK_OFFSET(0x1AF1FCF0)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AF20090)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_1290C5C20D61C8F1_OFFSET UNITYSDK_OFFSET(0x1AF200E0)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_797F209C7E56ACF8_OFFSET UNITYSDK_OFFSET(0x1AF1FB80)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF1FEC0)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF1FF50)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF1FB20)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF1F8F0)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_DEB5C60EA38CC2CB_OFFSET UNITYSDK_OFFSET(0x1AF1F870)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF1FE80)
#define CLASS_1_6E5854A73A37ADA3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF1FFF0)
#define CLASS_1_6E5854A73A37ADA3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF20450)

inline static constexpr unsigned int Class_1_6E5854A73A37ADA3_TypeDefinitionIndex = 13725;

class Class_1_6E5854A73A37ADA3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E5854A73A37ADA3_TypeDefinitionIndex)->GetStaticField(0x48B0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E5854A73A37ADA3_TypeDefinitionIndex)->GetStaticField(0x48B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E5854A73A37ADA3_TypeDefinitionIndex)->GetStaticField(0x48C0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E5854A73A37ADA3_TypeDefinitionIndex)->GetStaticField(0x2E70);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E5854A73A37ADA3_TypeDefinitionIndex)->GetStaticField(0x2E71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>* Method_1_DEB5C60EA38CC2CB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_DEB5C60EA38CC2CB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*> Method_1_797F209C7E56ACF8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RandomEventChoiceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_797F209C7E56ACF8_OFFSET))();
	}

	static ::RPG::GameCore::RandomEventChoiceRow* Method_1_06D0F96C52589EC2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RandomEventChoiceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_06D0F96C52589EC2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1290C5C20D61C8F1(::RPG::GameCore::RandomEventChoiceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RandomEventChoiceRow*))((::PBYTE)hIl2Cpp + CLASS_1_6E5854A73A37ADA3_METHOD_1_1290C5C20D61C8F1_OFFSET))(a1);
	}
};
