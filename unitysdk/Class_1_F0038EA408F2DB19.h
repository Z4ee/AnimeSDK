#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyMapRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F0038EA408F2DB19_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18F91540)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F91370)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_8F9F8C7DACDDF526_OFFSET UNITYSDK_OFFSET(0x18F91030)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F91400)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_BC11D7E5FBF4677D_OFFSET UNITYSDK_OFFSET(0x18F91590)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F90FD0)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_CFF6EB3BD0B0E416_OFFSET UNITYSDK_OFFSET(0x18F911A0)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F90DA0)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_E47C79688370F691_OFFSET UNITYSDK_OFFSET(0x18F90D20)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F91330)
#define CLASS_1_F0038EA408F2DB19_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F914A0)
#define CLASS_1_F0038EA408F2DB19__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F91900)

inline static constexpr unsigned int Class_1_F0038EA408F2DB19_TypeDefinitionIndex = 12030;

class Class_1_F0038EA408F2DB19 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0038EA408F2DB19_TypeDefinitionIndex)->GetStaticField(0x388B0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0038EA408F2DB19_TypeDefinitionIndex)->GetStaticField(0x388B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0038EA408F2DB19_TypeDefinitionIndex)->GetStaticField(0x388C0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0038EA408F2DB19_TypeDefinitionIndex)->GetStaticField(0xB4B0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0038EA408F2DB19_TypeDefinitionIndex)->GetStaticField(0xB4B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapRewardRow*>* Method_1_E47C79688370F691()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_E47C79688370F691_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapRewardRow*> Method_1_8F9F8C7DACDDF526()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_8F9F8C7DACDDF526_OFFSET))();
	}

	static ::RPG::GameCore::AlleyMapRewardRow* Method_1_CFF6EB3BD0B0E416(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AlleyMapRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_CFF6EB3BD0B0E416_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC11D7E5FBF4677D(::RPG::GameCore::AlleyMapRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AlleyMapRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_F0038EA408F2DB19_METHOD_1_BC11D7E5FBF4677D_OFFSET))(a1);
	}
};
