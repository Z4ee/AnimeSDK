#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenOutfitTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6DAF691E43BF73CF_METHOD_1_07B206F16280922D_OFFSET UNITYSDK_OFFSET(0x1C9562C0)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C956270)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_08F9578B62E2DEA7_OFFSET UNITYSDK_OFFSET(0x1C955A50)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_0B4B2CC48F01F234_OFFSET UNITYSDK_OFFSET(0x1C955D60)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C9560A0)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C956130)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_B4B63CCCA28B7EAF_OFFSET UNITYSDK_OFFSET(0x1C955ED0)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C955D00)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C955AD0)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C956060)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C9561D0)
#define CLASS_1_6DAF691E43BF73CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C956630)

inline static constexpr unsigned int Class_1_6DAF691E43BF73CF_TypeDefinitionIndex = 11649;

class Class_1_6DAF691E43BF73CF : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x28D70);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x28D78);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x28D80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0xC000);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0xC001);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>* Method_1_08F9578B62E2DEA7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_08F9578B62E2DEA7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*> Method_1_0B4B2CC48F01F234()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_0B4B2CC48F01F234_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenOutfitTypeRow* Method_1_B4B63CCCA28B7EAF(::RPG::GameCore::HipplenOutfitType a1)
	{
		return ((::RPG::GameCore::ActivityHipplenOutfitTypeRow*(*)(::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_B4B63CCCA28B7EAF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_07B206F16280922D(::RPG::GameCore::ActivityHipplenOutfitTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenOutfitTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_07B206F16280922D_OFFSET))(a1);
	}
};
