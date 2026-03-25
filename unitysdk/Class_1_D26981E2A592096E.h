#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesTaskRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D26981E2A592096E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16B07350)
#define CLASS_1_D26981E2A592096E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B07170)
#define CLASS_1_D26981E2A592096E_METHOD_1_4DA9E489F5FE7C5A_OFFSET UNITYSDK_OFFSET(0x16B073A0)
#define CLASS_1_D26981E2A592096E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B06B00)
#define CLASS_1_D26981E2A592096E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B07210)
#define CLASS_1_D26981E2A592096E_METHOD_1_BFB0B2E41E8F42E4_OFFSET UNITYSDK_OFFSET(0x16B06F60)
#define CLASS_1_D26981E2A592096E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B06D50)
#define CLASS_1_D26981E2A592096E_METHOD_1_DA209EFB18DDEF46_OFFSET UNITYSDK_OFFSET(0x16B06A80)
#define CLASS_1_D26981E2A592096E_METHOD_1_EC12520E4B82DC87_OFFSET UNITYSDK_OFFSET(0x16B06DB0)
#define CLASS_1_D26981E2A592096E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B07130)
#define CLASS_1_D26981E2A592096E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B072B0)
#define CLASS_1_D26981E2A592096E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B07700)

inline static constexpr unsigned int Class_1_D26981E2A592096E_TypeDefinitionIndex = 11156;

class Class_1_D26981E2A592096E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D26981E2A592096E_TypeDefinitionIndex)->GetStaticField(0x28120);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesTaskRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesTaskRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D26981E2A592096E_TypeDefinitionIndex)->GetStaticField(0x28128);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D26981E2A592096E_TypeDefinitionIndex)->GetStaticField(0x28130);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D26981E2A592096E_TypeDefinitionIndex)->GetStaticField(0xD2C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D26981E2A592096E_TypeDefinitionIndex)->GetStaticField(0xD2C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesTaskRow*>* Method_1_DA209EFB18DDEF46()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesTaskRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_DA209EFB18DDEF46_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesTaskRow*> Method_1_EC12520E4B82DC87()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesTaskRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_EC12520E4B82DC87_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesTaskRow* Method_1_BFB0B2E41E8F42E4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_BFB0B2E41E8F42E4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4DA9E489F5FE7C5A(::RPG::GameCore::PlanetFesTaskRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesTaskRow*))((::PBYTE)hIl2Cpp + CLASS_1_D26981E2A592096E_METHOD_1_4DA9E489F5FE7C5A_OFFSET))(a1);
	}
};
