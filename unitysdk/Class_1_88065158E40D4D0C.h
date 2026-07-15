#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePassConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88065158E40D4D0C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1BB960E0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_0D206ADF14FB58CF_OFFSET UNITYSDK_OFFSET(0x1BB96130)
#define CLASS_1_88065158E40D4D0C_METHOD_1_2F3EA56E7B16C086_OFFSET UNITYSDK_OFFSET(0x1BB95900)
#define CLASS_1_88065158E40D4D0C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BB95F10)
#define CLASS_1_88065158E40D4D0C_METHOD_1_A0875E3EB485B40F_OFFSET UNITYSDK_OFFSET(0x1BB95C10)
#define CLASS_1_88065158E40D4D0C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BB95FA0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_BA71E1012F26F34D_OFFSET UNITYSDK_OFFSET(0x1BB95D80)
#define CLASS_1_88065158E40D4D0C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BB95BB0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BB95980)
#define CLASS_1_88065158E40D4D0C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BB95ED0)
#define CLASS_1_88065158E40D4D0C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BB96040)
#define CLASS_1_88065158E40D4D0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB96450)

inline static constexpr unsigned int Class_1_88065158E40D4D0C_TypeDefinitionIndex = 12385;

class Class_1_88065158E40D4D0C : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0xDBD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0xDBD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0xDBE0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0x4CE0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88065158E40D4D0C_TypeDefinitionIndex)->GetStaticField(0x4CE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>* Method_1_2F3EA56E7B16C086()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_2F3EA56E7B16C086_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*> Method_1_A0875E3EB485B40F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_A0875E3EB485B40F_OFFSET))();
	}

	static ::RPG::GameCore::BattlePassConfigRow* Method_1_BA71E1012F26F34D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattlePassConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_BA71E1012F26F34D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D206ADF14FB58CF(::RPG::GameCore::BattlePassConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattlePassConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_88065158E40D4D0C_METHOD_1_0D206ADF14FB58CF_OFFSET))(a1);
	}
};
