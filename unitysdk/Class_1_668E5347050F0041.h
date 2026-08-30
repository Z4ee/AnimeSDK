#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_668E5347050F0041_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D1FA890)
#define CLASS_1_668E5347050F0041_METHOD_1_4B51CE09DB857F78_OFFSET UNITYSDK_OFFSET(0x1D1FA4F0)
#define CLASS_1_668E5347050F0041_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D1FA6C0)
#define CLASS_1_668E5347050F0041_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D1FA750)
#define CLASS_1_668E5347050F0041_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D1FA320)
#define CLASS_1_668E5347050F0041_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D1FA0F0)
#define CLASS_1_668E5347050F0041_METHOD_1_E12B5ABC484B663D_OFFSET UNITYSDK_OFFSET(0x1D1FA070)
#define CLASS_1_668E5347050F0041_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D1FA680)
#define CLASS_1_668E5347050F0041_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D1FA7F0)
#define CLASS_1_668E5347050F0041_METHOD_1_F584B32A18FBE612_OFFSET UNITYSDK_OFFSET(0x1D1FA380)
#define CLASS_1_668E5347050F0041_METHOD_1_F8A83204A2BDB233_OFFSET UNITYSDK_OFFSET(0x1D1FA8E0)
#define CLASS_1_668E5347050F0041__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1FAC50)

inline static constexpr unsigned int Class_1_668E5347050F0041_TypeDefinitionIndex = 11413;

class Class_1_668E5347050F0041 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668E5347050F0041_TypeDefinitionIndex)->GetStaticField(0x3CB10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668E5347050F0041_TypeDefinitionIndex)->GetStaticField(0x3CB18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_668E5347050F0041_TypeDefinitionIndex)->GetStaticField(0x3CB20);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_668E5347050F0041_TypeDefinitionIndex)->GetStaticField(0xF7C0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_668E5347050F0041_TypeDefinitionIndex)->GetStaticField(0xF7C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardRow*>* Method_1_E12B5ABC484B663D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_E12B5ABC484B663D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardRow*> Method_1_F584B32A18FBE612()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_F584B32A18FBE612_OFFSET))();
	}

	static ::RPG::GameCore::EvolveBuildRewardRow* Method_1_4B51CE09DB857F78(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::EvolveBuildRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_4B51CE09DB857F78_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8A83204A2BDB233(::RPG::GameCore::EvolveBuildRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::EvolveBuildRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_668E5347050F0041_METHOD_1_F8A83204A2BDB233_OFFSET))(a1);
	}
};
