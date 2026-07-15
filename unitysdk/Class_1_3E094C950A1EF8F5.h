#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RaidPerformanceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E094C950A1EF8F5_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x103D2D20)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x103D2B50)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x103D2BE0)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x103D27A0)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_D7DA8BB3489271E1_OFFSET UNITYSDK_OFFSET(0x103D24F0)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x103D2570)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_EA3E53B92C065FB6_OFFSET UNITYSDK_OFFSET(0x103D2D70)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x103D2B10)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_F25A3DCD45AFF2E6_OFFSET UNITYSDK_OFFSET(0x103D2800)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x103D2C80)
#define CLASS_1_3E094C950A1EF8F5_METHOD_1_F47EE8CB7D7BE9B2_OFFSET UNITYSDK_OFFSET(0x103D2970)
#define CLASS_1_3E094C950A1EF8F5__CCTOR_OFFSET UNITYSDK_OFFSET(0x103D30D0)

inline static constexpr unsigned int Class_1_3E094C950A1EF8F5_TypeDefinitionIndex = 14019;

class Class_1_3E094C950A1EF8F5 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E094C950A1EF8F5_TypeDefinitionIndex)->GetStaticField(0x40ED0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E094C950A1EF8F5_TypeDefinitionIndex)->GetStaticField(0x40ED8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E094C950A1EF8F5_TypeDefinitionIndex)->GetStaticField(0x40EE0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E094C950A1EF8F5_TypeDefinitionIndex)->GetStaticField(0xAED0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E094C950A1EF8F5_TypeDefinitionIndex)->GetStaticField(0xAED1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>* Method_1_D7DA8BB3489271E1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_D7DA8BB3489271E1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*> Method_1_F25A3DCD45AFF2E6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidPerformanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_F25A3DCD45AFF2E6_OFFSET))();
	}

	static ::RPG::GameCore::RaidPerformanceConfigRow* Method_1_F47EE8CB7D7BE9B2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RaidPerformanceConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_F47EE8CB7D7BE9B2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_EA3E53B92C065FB6(::RPG::GameCore::RaidPerformanceConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RaidPerformanceConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3E094C950A1EF8F5_METHOD_1_EA3E53B92C065FB6_OFFSET))(a1);
	}
};
