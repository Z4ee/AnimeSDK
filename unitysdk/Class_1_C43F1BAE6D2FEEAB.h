#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournRoleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_0D73E67909DED49E_OFFSET UNITYSDK_OFFSET(0x1CC354A0)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CC35800)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_5651A2AF0119AFFB_OFFSET UNITYSDK_OFFSET(0x1CC35060)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC35630)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_A5D9560536FABEFD_OFFSET UNITYSDK_OFFSET(0x1CC35370)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC356C0)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_AD8424E3695D5610_OFFSET UNITYSDK_OFFSET(0x1CC35850)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC35310)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC350E0)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC355F0)
#define CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC35760)
#define CLASS_1_C43F1BAE6D2FEEAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC35B70)

inline static constexpr unsigned int Class_1_C43F1BAE6D2FEEAB_TypeDefinitionIndex = 14837;

class Class_1_C43F1BAE6D2FEEAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C43F1BAE6D2FEEAB_TypeDefinitionIndex)->GetStaticField(0x2EA20);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C43F1BAE6D2FEEAB_TypeDefinitionIndex)->GetStaticField(0x2EA28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C43F1BAE6D2FEEAB_TypeDefinitionIndex)->GetStaticField(0x2EA30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C43F1BAE6D2FEEAB_TypeDefinitionIndex)->GetStaticField(0xCF80);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C43F1BAE6D2FEEAB_TypeDefinitionIndex)->GetStaticField(0xCF81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>* Method_1_5651A2AF0119AFFB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_5651A2AF0119AFFB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*> Method_1_A5D9560536FABEFD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoleRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_A5D9560536FABEFD_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournRoleRow* Method_1_0D73E67909DED49E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournRoleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_0D73E67909DED49E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_AD8424E3695D5610(::RPG::GameCore::RogueTournRoleRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournRoleRow*))((::PBYTE)hIl2Cpp + CLASS_1_C43F1BAE6D2FEEAB_METHOD_1_AD8424E3695D5610_OFFSET))(a1);
	}
};
