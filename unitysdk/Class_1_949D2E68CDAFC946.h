#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesGameRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_949D2E68CDAFC946_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x199991A0)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_1EE3BA4E0D1A2957_OFFSET UNITYSDK_OFFSET(0x19998E00)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_3ED6372AC3D87FA2_OFFSET UNITYSDK_OFFSET(0x199991F0)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_84A3D30AE837923B_OFFSET UNITYSDK_OFFSET(0x19998C90)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19998FD0)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19999060)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19998C30)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_DA57AAF23AD3F536_OFFSET UNITYSDK_OFFSET(0x19998980)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19998A00)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19998F90)
#define CLASS_1_949D2E68CDAFC946_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19999100)
#define CLASS_1_949D2E68CDAFC946__CCTOR_OFFSET UNITYSDK_OFFSET(0x19999560)

inline static constexpr unsigned int Class_1_949D2E68CDAFC946_TypeDefinitionIndex = 11681;

class Class_1_949D2E68CDAFC946 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_949D2E68CDAFC946_TypeDefinitionIndex)->GetStaticField(0x480A0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_949D2E68CDAFC946_TypeDefinitionIndex)->GetStaticField(0x480A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_949D2E68CDAFC946_TypeDefinitionIndex)->GetStaticField(0x480B0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_949D2E68CDAFC946_TypeDefinitionIndex)->GetStaticField(0xD3F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_949D2E68CDAFC946_TypeDefinitionIndex)->GetStaticField(0xD3F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>* Method_1_DA57AAF23AD3F536()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_DA57AAF23AD3F536_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*> Method_1_84A3D30AE837923B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_84A3D30AE837923B_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesGameRewardRow* Method_1_1EE3BA4E0D1A2957(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesGameRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_1EE3BA4E0D1A2957_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3ED6372AC3D87FA2(::RPG::GameCore::PlanetFesGameRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_949D2E68CDAFC946_METHOD_1_3ED6372AC3D87FA2_OFFSET))(a1);
	}
};
