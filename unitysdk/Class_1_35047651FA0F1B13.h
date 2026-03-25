#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResourceDeletionUsmWhitelistRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_35047651FA0F1B13_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16DAAF30)
#define CLASS_1_35047651FA0F1B13_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DAAD50)
#define CLASS_1_35047651FA0F1B13_METHOD_1_4D3DFDAE4553E8E1_OFFSET UNITYSDK_OFFSET(0x16DAAF80)
#define CLASS_1_35047651FA0F1B13_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DAA6E0)
#define CLASS_1_35047651FA0F1B13_METHOD_1_80BE996ADC3E7945_OFFSET UNITYSDK_OFFSET(0x16DAAB40)
#define CLASS_1_35047651FA0F1B13_METHOD_1_8F5BA45031B30378_OFFSET UNITYSDK_OFFSET(0x16DAA990)
#define CLASS_1_35047651FA0F1B13_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DAADF0)
#define CLASS_1_35047651FA0F1B13_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DAA930)
#define CLASS_1_35047651FA0F1B13_METHOD_1_F0817A7FEF7C81CB_OFFSET UNITYSDK_OFFSET(0x16DAA660)
#define CLASS_1_35047651FA0F1B13_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DAAD10)
#define CLASS_1_35047651FA0F1B13_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DAAE90)
#define CLASS_1_35047651FA0F1B13__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DAB2E0)

inline static constexpr unsigned int Class_1_35047651FA0F1B13_TypeDefinitionIndex = 13379;

class Class_1_35047651FA0F1B13 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35047651FA0F1B13_TypeDefinitionIndex)->GetStaticField(0x15E40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35047651FA0F1B13_TypeDefinitionIndex)->GetStaticField(0x15E48);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceDeletionUsmWhitelistRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceDeletionUsmWhitelistRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35047651FA0F1B13_TypeDefinitionIndex)->GetStaticField(0x15E50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_35047651FA0F1B13_TypeDefinitionIndex)->GetStaticField(0x6630);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_35047651FA0F1B13_TypeDefinitionIndex)->GetStaticField(0x6631);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceDeletionUsmWhitelistRow*>* Method_1_F0817A7FEF7C81CB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceDeletionUsmWhitelistRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_F0817A7FEF7C81CB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceDeletionUsmWhitelistRow*> Method_1_8F5BA45031B30378()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ResourceDeletionUsmWhitelistRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_8F5BA45031B30378_OFFSET))();
	}

	static ::RPG::GameCore::ResourceDeletionUsmWhitelistRow* Method_1_80BE996ADC3E7945(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ResourceDeletionUsmWhitelistRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_80BE996ADC3E7945_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D3DFDAE4553E8E1(::RPG::GameCore::ResourceDeletionUsmWhitelistRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ResourceDeletionUsmWhitelistRow*))((::PBYTE)hIl2Cpp + CLASS_1_35047651FA0F1B13_METHOD_1_4D3DFDAE4553E8E1_OFFSET))(a1);
	}
};
