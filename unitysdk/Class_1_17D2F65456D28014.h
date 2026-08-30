#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesGameRewardPoolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_17D2F65456D28014_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CF4A9F0)
#define CLASS_1_17D2F65456D28014_METHOD_1_3CB1A23865017921_OFFSET UNITYSDK_OFFSET(0x1CF4A610)
#define CLASS_1_17D2F65456D28014_METHOD_1_69F9E806A2D831D8_OFFSET UNITYSDK_OFFSET(0x1CF4A1D0)
#define CLASS_1_17D2F65456D28014_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF4A820)
#define CLASS_1_17D2F65456D28014_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CF4A8B0)
#define CLASS_1_17D2F65456D28014_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF4A480)
#define CLASS_1_17D2F65456D28014_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF4A250)
#define CLASS_1_17D2F65456D28014_METHOD_1_EA6400C6A9F9867D_OFFSET UNITYSDK_OFFSET(0x1CF4AA40)
#define CLASS_1_17D2F65456D28014_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF4A7E0)
#define CLASS_1_17D2F65456D28014_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CF4A950)
#define CLASS_1_17D2F65456D28014_METHOD_1_FFB3E61B08327334_OFFSET UNITYSDK_OFFSET(0x1CF4A4E0)
#define CLASS_1_17D2F65456D28014__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF4ADA0)

inline static constexpr unsigned int Class_1_17D2F65456D28014_TypeDefinitionIndex = 12164;

class Class_1_17D2F65456D28014 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D2F65456D28014_TypeDefinitionIndex)->GetStaticField(0x5EC90);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D2F65456D28014_TypeDefinitionIndex)->GetStaticField(0x5EC98);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D2F65456D28014_TypeDefinitionIndex)->GetStaticField(0x5ECA0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D2F65456D28014_TypeDefinitionIndex)->GetStaticField(0x13250);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D2F65456D28014_TypeDefinitionIndex)->GetStaticField(0x13251);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>* Method_1_69F9E806A2D831D8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_69F9E806A2D831D8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*> Method_1_FFB3E61B08327334()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameRewardPoolRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_FFB3E61B08327334_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesGameRewardPoolRow* Method_1_3CB1A23865017921(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::PlanetFesGameRewardPoolRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_3CB1A23865017921_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_EA6400C6A9F9867D(::RPG::GameCore::PlanetFesGameRewardPoolRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameRewardPoolRow*))((::PBYTE)hIl2Cpp + CLASS_1_17D2F65456D28014_METHOD_1_EA6400C6A9F9867D_OFFSET))(a1);
	}
};
