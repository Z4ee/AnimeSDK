#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ParkourRankingListConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D0F8F50)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_0C22E4DACFDE2589_OFFSET UNITYSDK_OFFSET(0x1D0F8FA0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_796DFE65127BFEBA_OFFSET UNITYSDK_OFFSET(0x1D0F8BB0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0F8D80)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_9FAB767432D7D56B_OFFSET UNITYSDK_OFFSET(0x1D0F8730)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0F8E10)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0F89E0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_D132A639CADCAA08_OFFSET UNITYSDK_OFFSET(0x1D0F8A40)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0F87B0)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0F8D40)
#define CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0F8EB0)
#define CLASS_1_3742C7CFC0CD2A3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9310)

inline static constexpr unsigned int Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex = 12026;

class Class_1_3742C7CFC0CD2A3B : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x18470);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x18478);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x18480);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x8E10);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3742C7CFC0CD2A3B_TypeDefinitionIndex)->GetStaticField(0x8E11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>* Method_1_9FAB767432D7D56B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_9FAB767432D7D56B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*> Method_1_D132A639CADCAA08()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRankingListConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_D132A639CADCAA08_OFFSET))();
	}

	static ::RPG::GameCore::ParkourRankingListConfigRow* Method_1_796DFE65127BFEBA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ParkourRankingListConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_796DFE65127BFEBA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C22E4DACFDE2589(::RPG::GameCore::ParkourRankingListConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ParkourRankingListConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3742C7CFC0CD2A3B_METHOD_1_0C22E4DACFDE2589_OFFSET))(a1);
	}
};
