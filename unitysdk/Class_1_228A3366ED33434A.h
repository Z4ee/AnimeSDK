#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_228A3366ED33434A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D42D210)
#define CLASS_1_228A3366ED33434A_METHOD_1_283944FA09985CEE_OFFSET UNITYSDK_OFFSET(0x1D42CD40)
#define CLASS_1_228A3366ED33434A_METHOD_1_82432112E361E0B2_OFFSET UNITYSDK_OFFSET(0x1D42CA30)
#define CLASS_1_228A3366ED33434A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D42D040)
#define CLASS_1_228A3366ED33434A_METHOD_1_8FDF2A1BD8A30797_OFFSET UNITYSDK_OFFSET(0x1D42D260)
#define CLASS_1_228A3366ED33434A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D42D0D0)
#define CLASS_1_228A3366ED33434A_METHOD_1_C6167EDAD71368BB_OFFSET UNITYSDK_OFFSET(0x1D42CE70)
#define CLASS_1_228A3366ED33434A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D42CCE0)
#define CLASS_1_228A3366ED33434A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D42CAB0)
#define CLASS_1_228A3366ED33434A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D42D000)
#define CLASS_1_228A3366ED33434A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D42D170)
#define CLASS_1_228A3366ED33434A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D42D580)

inline static constexpr unsigned int Class_1_228A3366ED33434A_TypeDefinitionIndex = 12109;

class Class_1_228A3366ED33434A : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_228A3366ED33434A_TypeDefinitionIndex)->GetStaticField(0x407E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_228A3366ED33434A_TypeDefinitionIndex)->GetStaticField(0x407E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_228A3366ED33434A_TypeDefinitionIndex)->GetStaticField(0x407F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_228A3366ED33434A_TypeDefinitionIndex)->GetStaticField(0xF720);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_228A3366ED33434A_TypeDefinitionIndex)->GetStaticField(0xF721);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>* Method_1_82432112E361E0B2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_82432112E361E0B2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*> Method_1_283944FA09985CEE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_283944FA09985CEE_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesAvatarRow* Method_1_C6167EDAD71368BB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_C6167EDAD71368BB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8FDF2A1BD8A30797(::RPG::GameCore::PlanetFesAvatarRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_228A3366ED33434A_METHOD_1_8FDF2A1BD8A30797_OFFSET))(a1);
	}
};
