#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournCollectionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8D38612002C1A1D_METHOD_1_1306BE317FD2A571_OFFSET UNITYSDK_OFFSET(0x1D013730)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D013F70)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D013DA0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_9DCD2EA8F09CEA23_OFFSET UNITYSDK_OFFSET(0x1D013A40)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D013E30)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_BB500C8609E669C4_OFFSET UNITYSDK_OFFSET(0x1D013BD0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0139E0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0137B0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_E5A4A9FD89617F4E_OFFSET UNITYSDK_OFFSET(0x1D013FC0)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_E89336DDB58D17B5_OFFSET UNITYSDK_OFFSET(0x1D013B70)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D013D60)
#define CLASS_1_B8D38612002C1A1D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D013ED0)
#define CLASS_1_B8D38612002C1A1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0142E0)

inline static constexpr unsigned int Class_1_B8D38612002C1A1D_TypeDefinitionIndex = 14829;

class Class_1_B8D38612002C1A1D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x37820);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x37828);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0x37830);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0xE8B0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8D38612002C1A1D_TypeDefinitionIndex)->GetStaticField(0xE8B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>* Method_1_1306BE317FD2A571()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_1306BE317FD2A571_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*> Method_1_9DCD2EA8F09CEA23()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_9DCD2EA8F09CEA23_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>, ::RPG::GameCore::RogueTournCollectionConfigRow*> Method_1_E89336DDB58D17B5()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournCollectionConfigRow*>, ::RPG::GameCore::RogueTournCollectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_E89336DDB58D17B5_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournCollectionConfigRow* Method_1_BB500C8609E669C4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournCollectionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_BB500C8609E669C4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_E5A4A9FD89617F4E(::RPG::GameCore::RogueTournCollectionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournCollectionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8D38612002C1A1D_METHOD_1_E5A4A9FD89617F4E_OFFSET))(a1);
	}
};
