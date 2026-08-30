#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionGroupType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnniversaryCollectionGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4C4C42F04A13E656_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1DADB9F0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_53128541A268B95E_OFFSET UNITYSDK_OFFSET(0x1DADB650)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_88F3615AE341D158_OFFSET UNITYSDK_OFFSET(0x1DADBA40)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DADB820)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1DADB8B0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_C2025A3DE21E9A58_OFFSET UNITYSDK_OFFSET(0x1DADB210)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_C3CF7B3F5C94D230_OFFSET UNITYSDK_OFFSET(0x1DADB520)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1DADB4C0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1DADB290)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1DADB7E0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1DADB950)
#define CLASS_1_4C4C42F04A13E656__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DADBDB0)

inline static constexpr unsigned int Class_1_4C4C42F04A13E656_TypeDefinitionIndex = 12579;

class Class_1_4C4C42F04A13E656 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x490E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x490E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x490F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x10CA0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x10CA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>* Method_1_C2025A3DE21E9A58()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_C2025A3DE21E9A58_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*> Method_1_C3CF7B3F5C94D230()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_C3CF7B3F5C94D230_OFFSET))();
	}

	static ::RPG::GameCore::AnniversaryCollectionGroupConfigRow* Method_1_53128541A268B95E(::RPG::GameCore::AnniversaryCollectionGroupType a1)
	{
		return ((::RPG::GameCore::AnniversaryCollectionGroupConfigRow*(*)(::RPG::GameCore::AnniversaryCollectionGroupType))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_53128541A268B95E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_88F3615AE341D158(::RPG::GameCore::AnniversaryCollectionGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AnniversaryCollectionGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_88F3615AE341D158_OFFSET))(a1);
	}
};
