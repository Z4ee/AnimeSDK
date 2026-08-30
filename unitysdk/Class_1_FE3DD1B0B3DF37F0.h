#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class B51RacingTrackRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D42BFB0)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_1E1DB0E6F2E4BEAA_OFFSET UNITYSDK_OFFSET(0x1D42B790)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_3BB70D7328098C02_OFFSET UNITYSDK_OFFSET(0x1D42C000)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_3F2EAD367EB12147_OFFSET UNITYSDK_OFFSET(0x1D42BC10)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_5A0FAC6C7AC9D973_OFFSET UNITYSDK_OFFSET(0x1D42BAA0)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D42BDE0)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D42BE70)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D42BA40)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D42B810)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D42BDA0)
#define CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D42BF10)
#define CLASS_1_FE3DD1B0B3DF37F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D42C370)

inline static constexpr unsigned int Class_1_FE3DD1B0B3DF37F0_TypeDefinitionIndex = 10945;

class Class_1_FE3DD1B0B3DF37F0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE3DD1B0B3DF37F0_TypeDefinitionIndex)->GetStaticField(0x40160);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE3DD1B0B3DF37F0_TypeDefinitionIndex)->GetStaticField(0x40168);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE3DD1B0B3DF37F0_TypeDefinitionIndex)->GetStaticField(0x40170);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE3DD1B0B3DF37F0_TypeDefinitionIndex)->GetStaticField(0xF640);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE3DD1B0B3DF37F0_TypeDefinitionIndex)->GetStaticField(0xF641);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>* Method_1_1E1DB0E6F2E4BEAA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_1E1DB0E6F2E4BEAA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*> Method_1_5A0FAC6C7AC9D973()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_5A0FAC6C7AC9D973_OFFSET))();
	}

	static ::RPG::GameCore::B51RacingTrackRow* Method_1_3F2EAD367EB12147(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::B51RacingTrackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_3F2EAD367EB12147_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3BB70D7328098C02(::RPG::GameCore::B51RacingTrackRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::B51RacingTrackRow*))((::PBYTE)hIl2Cpp + CLASS_1_FE3DD1B0B3DF37F0_METHOD_1_3BB70D7328098C02_OFFSET))(a1);
	}
};
