#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournHexRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A71796ABAE03A648_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D05FE20)
#define CLASS_1_A71796ABAE03A648_METHOD_1_1844B881EC0153DD_OFFSET UNITYSDK_OFFSET(0x1D05FA40)
#define CLASS_1_A71796ABAE03A648_METHOD_1_7B06FF92CBEAA8C4_OFFSET UNITYSDK_OFFSET(0x1D05F600)
#define CLASS_1_A71796ABAE03A648_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D05FC50)
#define CLASS_1_A71796ABAE03A648_METHOD_1_925CE2DEFAE4BD9C_OFFSET UNITYSDK_OFFSET(0x1D05F910)
#define CLASS_1_A71796ABAE03A648_METHOD_1_9576C8D22212EA67_OFFSET UNITYSDK_OFFSET(0x1D05FAC0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D05FCE0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D05F8B0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_D4A9DE4369656419_OFFSET UNITYSDK_OFFSET(0x1D05FE70)
#define CLASS_1_A71796ABAE03A648_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D05F680)
#define CLASS_1_A71796ABAE03A648_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D05FC10)
#define CLASS_1_A71796ABAE03A648_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D05FD80)
#define CLASS_1_A71796ABAE03A648__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D060190)

inline static constexpr unsigned int Class_1_A71796ABAE03A648_TypeDefinitionIndex = 14861;

class Class_1_A71796ABAE03A648 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x1DA30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x1DA38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x1DA40);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x9F50);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x9F51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>* Method_1_7B06FF92CBEAA8C4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_7B06FF92CBEAA8C4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*> Method_1_925CE2DEFAE4BD9C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_925CE2DEFAE4BD9C_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>, ::RPG::GameCore::RogueTournHexRow*> Method_1_1844B881EC0153DD()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>, ::RPG::GameCore::RogueTournHexRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_1844B881EC0153DD_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournHexRow* Method_1_9576C8D22212EA67(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournHexRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_9576C8D22212EA67_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4A9DE4369656419(::RPG::GameCore::RogueTournHexRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournHexRow*))((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_D4A9DE4369656419_OFFSET))(a1);
	}
};
