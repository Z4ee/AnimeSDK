#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournContentExhibitionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0374C0CC6D89C7D0_OFFSET UNITYSDK_OFFSET(0x1D0176A0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D017650)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_366D29A159FAEFB5_OFFSET UNITYSDK_OFFSET(0x1D017160)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_718A3B14DCC34FBB_OFFSET UNITYSDK_OFFSET(0x1D017290)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D017480)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_9183AAFF282E32EB_OFFSET UNITYSDK_OFFSET(0x1D016E50)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D017510)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_C0C72F0AE395410E_OFFSET UNITYSDK_OFFSET(0x1D0172F0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D017100)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D016ED0)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D017440)
#define CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0175B0)
#define CLASS_1_00E5ABCF7CE97C1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0179C0)

inline static constexpr unsigned int Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex = 14871;

class Class_1_00E5ABCF7CE97C1B : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x37DF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x37DF8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0x37E00);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_00E5ABCF7CE97C1B_TypeDefinitionIndex)->GetStaticField(0xE9C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>* Method_1_9183AAFF282E32EB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_9183AAFF282E32EB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*> Method_1_366D29A159FAEFB5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_366D29A159FAEFB5_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>, ::RPG::GameCore::RogueTournContentExhibitionRow*> Method_1_718A3B14DCC34FBB()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentExhibitionRow*>, ::RPG::GameCore::RogueTournContentExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_718A3B14DCC34FBB_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournContentExhibitionRow* Method_1_C0C72F0AE395410E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournContentExhibitionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_C0C72F0AE395410E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0374C0CC6D89C7D0(::RPG::GameCore::RogueTournContentExhibitionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournContentExhibitionRow*))((::PBYTE)hIl2Cpp + CLASS_1_00E5ABCF7CE97C1B_METHOD_1_0374C0CC6D89C7D0_OFFSET))(a1);
	}
};
