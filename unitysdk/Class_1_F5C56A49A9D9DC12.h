#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D650980)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_24D00192238B8EFD_OFFSET UNITYSDK_OFFSET(0x1D650620)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_3E49724F824DBF3F_OFFSET UNITYSDK_OFFSET(0x1D6509D0)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D6507B0)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D650840)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_B88E7A51AAC060FA_OFFSET UNITYSDK_OFFSET(0x1D6501A0)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D650450)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_CEAD3AB105BA2AF7_OFFSET UNITYSDK_OFFSET(0x1D6504B0)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D650220)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D650770)
#define CLASS_1_F5C56A49A9D9DC12_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D6508E0)
#define CLASS_1_F5C56A49A9D9DC12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D650CF0)

inline static constexpr unsigned int Class_1_F5C56A49A9D9DC12_TypeDefinitionIndex = 14817;

class Class_1_F5C56A49A9D9DC12 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C56A49A9D9DC12_TypeDefinitionIndex)->GetStaticField(0x5B90);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C56A49A9D9DC12_TypeDefinitionIndex)->GetStaticField(0x5B98);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C56A49A9D9DC12_TypeDefinitionIndex)->GetStaticField(0x5BA0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C56A49A9D9DC12_TypeDefinitionIndex)->GetStaticField(0x1B00);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5C56A49A9D9DC12_TypeDefinitionIndex)->GetStaticField(0x1B01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>* Method_1_B88E7A51AAC060FA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_B88E7A51AAC060FA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*> Method_1_CEAD3AB105BA2AF7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWeeklyDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_CEAD3AB105BA2AF7_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournWeeklyDisplayRow* Method_1_24D00192238B8EFD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournWeeklyDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_24D00192238B8EFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E49724F824DBF3F(::RPG::GameCore::RogueTournWeeklyDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournWeeklyDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_F5C56A49A9D9DC12_METHOD_1_3E49724F824DBF3F_OFFSET))(a1);
	}
};
