#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HealPoolConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F576A4CA056BA263_METHOD_1_03739A953649DAF1_OFFSET UNITYSDK_OFFSET(0x19B97280)
#define CLASS_1_F576A4CA056BA263_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19B97230)
#define CLASS_1_F576A4CA056BA263_METHOD_1_2F52E206BC102283_OFFSET UNITYSDK_OFFSET(0x19B96A10)
#define CLASS_1_F576A4CA056BA263_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19B97060)
#define CLASS_1_F576A4CA056BA263_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19B970F0)
#define CLASS_1_F576A4CA056BA263_METHOD_1_B8813D7688F2FDE2_OFFSET UNITYSDK_OFFSET(0x19B96E90)
#define CLASS_1_F576A4CA056BA263_METHOD_1_C4B5A0BB9AB80980_OFFSET UNITYSDK_OFFSET(0x19B96D20)
#define CLASS_1_F576A4CA056BA263_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19B96CC0)
#define CLASS_1_F576A4CA056BA263_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19B96A90)
#define CLASS_1_F576A4CA056BA263_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19B97020)
#define CLASS_1_F576A4CA056BA263_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19B97190)
#define CLASS_1_F576A4CA056BA263__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B975F0)

inline static constexpr unsigned int Class_1_F576A4CA056BA263_TypeDefinitionIndex = 13068;

class Class_1_F576A4CA056BA263 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F576A4CA056BA263_TypeDefinitionIndex)->GetStaticField(0x4A050);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F576A4CA056BA263_TypeDefinitionIndex)->GetStaticField(0x4A058);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F576A4CA056BA263_TypeDefinitionIndex)->GetStaticField(0x4A060);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F576A4CA056BA263_TypeDefinitionIndex)->GetStaticField(0xDE30);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F576A4CA056BA263_TypeDefinitionIndex)->GetStaticField(0xDE31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>* Method_1_2F52E206BC102283()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_2F52E206BC102283_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*> Method_1_C4B5A0BB9AB80980()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HealPoolConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_C4B5A0BB9AB80980_OFFSET))();
	}

	static ::RPG::GameCore::HealPoolConfigRow* Method_1_B8813D7688F2FDE2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HealPoolConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_B8813D7688F2FDE2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_03739A953649DAF1(::RPG::GameCore::HealPoolConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HealPoolConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F576A4CA056BA263_METHOD_1_03739A953649DAF1_OFFSET))(a1);
	}
};
