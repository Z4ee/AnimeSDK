#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoadingStratageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D0A4FA661E224704_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19E9AEE0)
#define CLASS_1_D0A4FA661E224704_METHOD_1_16CC7A2D2CE8838C_OFFSET UNITYSDK_OFFSET(0x19E9AA10)
#define CLASS_1_D0A4FA661E224704_METHOD_1_7D4E62677977B6C8_OFFSET UNITYSDK_OFFSET(0x19E9A700)
#define CLASS_1_D0A4FA661E224704_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19E9AD10)
#define CLASS_1_D0A4FA661E224704_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19E9ADA0)
#define CLASS_1_D0A4FA661E224704_METHOD_1_B1B67A272017601D_OFFSET UNITYSDK_OFFSET(0x19E9AF30)
#define CLASS_1_D0A4FA661E224704_METHOD_1_BD0E8A41D7AE5D0D_OFFSET UNITYSDK_OFFSET(0x19E9AB40)
#define CLASS_1_D0A4FA661E224704_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19E9A9B0)
#define CLASS_1_D0A4FA661E224704_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19E9A780)
#define CLASS_1_D0A4FA661E224704_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19E9ACD0)
#define CLASS_1_D0A4FA661E224704_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19E9AE40)
#define CLASS_1_D0A4FA661E224704__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E9B250)

inline static constexpr unsigned int Class_1_D0A4FA661E224704_TypeDefinitionIndex = 13327;

class Class_1_D0A4FA661E224704 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A4FA661E224704_TypeDefinitionIndex)->GetStaticField(0x4DF90);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A4FA661E224704_TypeDefinitionIndex)->GetStaticField(0x4DF98);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A4FA661E224704_TypeDefinitionIndex)->GetStaticField(0x4DFA0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A4FA661E224704_TypeDefinitionIndex)->GetStaticField(0xF000);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0A4FA661E224704_TypeDefinitionIndex)->GetStaticField(0xF001);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>* Method_1_7D4E62677977B6C8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_7D4E62677977B6C8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*> Method_1_16CC7A2D2CE8838C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingStratageConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_16CC7A2D2CE8838C_OFFSET))();
	}

	static ::RPG::GameCore::LoadingStratageConfigRow* Method_1_BD0E8A41D7AE5D0D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LoadingStratageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_BD0E8A41D7AE5D0D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1B67A272017601D(::RPG::GameCore::LoadingStratageConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::LoadingStratageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D0A4FA661E224704_METHOD_1_B1B67A272017601D_OFFSET))(a1);
	}
};
