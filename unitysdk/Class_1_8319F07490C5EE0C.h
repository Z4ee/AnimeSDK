#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerOutfitBaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8319F07490C5EE0C_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1842CC40)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1842CA60)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_53D3F2EF9594832E_OFFSET UNITYSDK_OFFSET(0x1842C850)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1842C420)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1842CB00)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_C17BD1B50BBEE0A0_OFFSET UNITYSDK_OFFSET(0x1842C3A0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1842C670)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_D6CB4F7F7335BF75_OFFSET UNITYSDK_OFFSET(0x1842CC90)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1842CA20)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1842CBA0)
#define CLASS_1_8319F07490C5EE0C_METHOD_1_FD3EBDB875F2C7F2_OFFSET UNITYSDK_OFFSET(0x1842C6D0)
#define CLASS_1_8319F07490C5EE0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1842CFA0)

inline static constexpr unsigned int Class_1_8319F07490C5EE0C_TypeDefinitionIndex = 13711;

class Class_1_8319F07490C5EE0C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x28D50);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x28D58);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0x28D60);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0xAD60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8319F07490C5EE0C_TypeDefinitionIndex)->GetStaticField(0xAD61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>* Method_1_C17BD1B50BBEE0A0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_C17BD1B50BBEE0A0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*> Method_1_FD3EBDB875F2C7F2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_FD3EBDB875F2C7F2_OFFSET))();
	}

	static ::RPG::GameCore::PlayerOutfitBaseRow* Method_1_53D3F2EF9594832E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerOutfitBaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_53D3F2EF9594832E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6CB4F7F7335BF75(::RPG::GameCore::PlayerOutfitBaseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerOutfitBaseRow*))((::PBYTE)hIl2Cpp + CLASS_1_8319F07490C5EE0C_METHOD_1_D6CB4F7F7335BF75_OFFSET))(a1);
	}
};
