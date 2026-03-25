#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelTriggerEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_95C558B2152F0768_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x179AF1E0)
#define CLASS_1_95C558B2152F0768_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179AF000)
#define CLASS_1_95C558B2152F0768_METHOD_1_43F44858B4B995DC_OFFSET UNITYSDK_OFFSET(0x179AEC70)
#define CLASS_1_95C558B2152F0768_METHOD_1_5E6ED96170D5432E_OFFSET UNITYSDK_OFFSET(0x179AEDF0)
#define CLASS_1_95C558B2152F0768_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179AE9C0)
#define CLASS_1_95C558B2152F0768_METHOD_1_A74984F2BD6B66C5_OFFSET UNITYSDK_OFFSET(0x179AF230)
#define CLASS_1_95C558B2152F0768_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179AF0A0)
#define CLASS_1_95C558B2152F0768_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179AEC10)
#define CLASS_1_95C558B2152F0768_METHOD_1_D889929D67A6006E_OFFSET UNITYSDK_OFFSET(0x179AE940)
#define CLASS_1_95C558B2152F0768_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179AEFC0)
#define CLASS_1_95C558B2152F0768_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179AF140)
#define CLASS_1_95C558B2152F0768__CCTOR_OFFSET UNITYSDK_OFFSET(0x179AF540)

inline static constexpr unsigned int Class_1_95C558B2152F0768_TypeDefinitionIndex = 10427;

class Class_1_95C558B2152F0768 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95C558B2152F0768_TypeDefinitionIndex)->GetStaticField(0x25FB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95C558B2152F0768_TypeDefinitionIndex)->GetStaticField(0x25FB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95C558B2152F0768_TypeDefinitionIndex)->GetStaticField(0x25FC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_95C558B2152F0768_TypeDefinitionIndex)->GetStaticField(0xC580);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_95C558B2152F0768_TypeDefinitionIndex)->GetStaticField(0xC581);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>* Method_1_D889929D67A6006E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_D889929D67A6006E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*> Method_1_43F44858B4B995DC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelTriggerEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_43F44858B4B995DC_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelTriggerEventRow* Method_1_5E6ED96170D5432E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelTriggerEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_5E6ED96170D5432E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_A74984F2BD6B66C5(::RPG::GameCore::ChimeraDuelTriggerEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelTriggerEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_95C558B2152F0768_METHOD_1_A74984F2BD6B66C5_OFFSET))(a1);
	}
};
