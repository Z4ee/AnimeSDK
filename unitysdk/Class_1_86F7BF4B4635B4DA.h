#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CC62890)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_3FDA7911B5B90567_OFFSET UNITYSDK_OFFSET(0x1CC628E0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_819386A03A73F9DF_OFFSET UNITYSDK_OFFSET(0x1CC620E0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC626C0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_97A7C726AB9CA346_OFFSET UNITYSDK_OFFSET(0x1CC62420)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_AACED299761FF9F2_OFFSET UNITYSDK_OFFSET(0x1CC61DD0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC62750)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC62080)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_CE5B30854EB99A65_OFFSET UNITYSDK_OFFSET(0x1CC622D0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC61E50)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_EBD1C7EC44F70CDB_OFFSET UNITYSDK_OFFSET(0x1CC62250)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC62680)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC627F0)
#define CLASS_1_86F7BF4B4635B4DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC62C00)

inline static constexpr unsigned int Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex = 14808;

class Class_1_86F7BF4B4635B4DA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x34F30);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x34F38);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x34F40);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0xDE00);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0xDE01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>* Method_1_AACED299761FF9F2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_AACED299761FF9F2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*> Method_1_819386A03A73F9DF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_819386A03A73F9DF_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>, ::RPG::GameCore::RogueTournExpScoreRow*> Method_1_EBD1C7EC44F70CDB()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>, ::RPG::GameCore::RogueTournExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_EBD1C7EC44F70CDB_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournExpScoreRow* Method_1_CE5B30854EB99A65(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournExpScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_CE5B30854EB99A65_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IList_1<::RPG::GameCore::RogueTournExpScoreRow*>* Method_1_97A7C726AB9CA346(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::RPG::GameCore::RogueTournExpScoreRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_97A7C726AB9CA346_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_3FDA7911B5B90567(::RPG::GameCore::RogueTournExpScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_3FDA7911B5B90567_OFFSET))(a1);
	}
};
