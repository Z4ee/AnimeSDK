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

#define CLASS_1_A71796ABAE03A648_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19064AE0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_17F9C0B47C096764_OFFSET UNITYSDK_OFFSET(0x19064720)
#define CLASS_1_A71796ABAE03A648_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19022BE0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_40ED00EEE5A6A1C6_OFFSET UNITYSDK_OFFSET(0x190645A0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_6A4A5445C925EDC3_OFFSET UNITYSDK_OFFSET(0x190647E0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FDD8C0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_7B06FF92CBEAA8C4_OFFSET UNITYSDK_OFFSET(0x190644C0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x190649A0)
#define CLASS_1_A71796ABAE03A648_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19064540)
#define CLASS_1_A71796ABAE03A648_METHOD_1_D4A9DE4369656419_OFFSET UNITYSDK_OFFSET(0x19064B30)
#define CLASS_1_A71796ABAE03A648_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19064960)
#define CLASS_1_A71796ABAE03A648_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19064A40)
#define CLASS_1_A71796ABAE03A648__CCTOR_OFFSET UNITYSDK_OFFSET(0x19064E40)

inline static constexpr unsigned int Class_1_A71796ABAE03A648_TypeDefinitionIndex = 14235;

class Class_1_A71796ABAE03A648 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x3DBD0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x3DBD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0x3DBE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0xDC30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A71796ABAE03A648_TypeDefinitionIndex)->GetStaticField(0xDC31);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*> Method_1_40ED00EEE5A6A1C6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_40ED00EEE5A6A1C6_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>, ::RPG::GameCore::RogueTournHexRow*> Method_1_17F9C0B47C096764()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexRow*>, ::RPG::GameCore::RogueTournHexRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_17F9C0B47C096764_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournHexRow* Method_1_6A4A5445C925EDC3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournHexRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_6A4A5445C925EDC3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A71796ABAE03A648_METHOD_1_30D1209326FA87FC_OFFSET))();
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
