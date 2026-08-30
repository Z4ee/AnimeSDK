#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendDifficulty.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityLocalLegendStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B3588537A5E76752_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CC85EA0)
#define CLASS_1_B3588537A5E76752_METHOD_1_3FA6BADC7BF4ECD4_OFFSET UNITYSDK_OFFSET(0x1CC85670)
#define CLASS_1_B3588537A5E76752_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC85CD0)
#define CLASS_1_B3588537A5E76752_METHOD_1_A418D6012CE17875_OFFSET UNITYSDK_OFFSET(0x1CC85AF0)
#define CLASS_1_B3588537A5E76752_METHOD_1_A7F642CE024F4A25_OFFSET UNITYSDK_OFFSET(0x1CC85980)
#define CLASS_1_B3588537A5E76752_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC85D60)
#define CLASS_1_B3588537A5E76752_METHOD_1_C556B5DC1C5CED85_OFFSET UNITYSDK_OFFSET(0x1CC85EF0)
#define CLASS_1_B3588537A5E76752_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC85920)
#define CLASS_1_B3588537A5E76752_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC856F0)
#define CLASS_1_B3588537A5E76752_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC85C90)
#define CLASS_1_B3588537A5E76752_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC85E00)
#define CLASS_1_B3588537A5E76752__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC86250)

inline static constexpr unsigned int Class_1_B3588537A5E76752_TypeDefinitionIndex = 11818;

class Class_1_B3588537A5E76752 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3588537A5E76752_TypeDefinitionIndex)->GetStaticField(0x373D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3588537A5E76752_TypeDefinitionIndex)->GetStaticField(0x373D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3588537A5E76752_TypeDefinitionIndex)->GetStaticField(0x373E0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3588537A5E76752_TypeDefinitionIndex)->GetStaticField(0xE530);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3588537A5E76752_TypeDefinitionIndex)->GetStaticField(0xE531);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>* Method_1_3FA6BADC7BF4ECD4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_3FA6BADC7BF4ECD4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*> Method_1_A7F642CE024F4A25()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityLocalLegendStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_A7F642CE024F4A25_OFFSET))();
	}

	static ::RPG::GameCore::ActivityLocalLegendStageConfigRow* Method_1_A418D6012CE17875(::System::UInt32 a1, ::RPG::GameCore::ActivityLocalLegendDifficulty a2)
	{
		return ((::RPG::GameCore::ActivityLocalLegendStageConfigRow*(*)(::System::UInt32, ::RPG::GameCore::ActivityLocalLegendDifficulty))((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_A418D6012CE17875_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C556B5DC1C5CED85(::RPG::GameCore::ActivityLocalLegendStageConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityLocalLegendStageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B3588537A5E76752_METHOD_1_C556B5DC1C5CED85_OFFSET))(a1);
	}
};
