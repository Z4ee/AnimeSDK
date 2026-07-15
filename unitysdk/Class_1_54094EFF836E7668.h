#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournTitanBlessRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_54094EFF836E7668_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x103E67A0)
#define CLASS_1_54094EFF836E7668_METHOD_1_55A5819004EF8FB1_OFFSET UNITYSDK_OFFSET(0x103E6400)
#define CLASS_1_54094EFF836E7668_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x103E65D0)
#define CLASS_1_54094EFF836E7668_METHOD_1_A5498151E07D7361_OFFSET UNITYSDK_OFFSET(0x103E6210)
#define CLASS_1_54094EFF836E7668_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x103E6660)
#define CLASS_1_54094EFF836E7668_METHOD_1_AD87843931322A2C_OFFSET UNITYSDK_OFFSET(0x103E5F00)
#define CLASS_1_54094EFF836E7668_METHOD_1_AEDD71E95740E810_OFFSET UNITYSDK_OFFSET(0x103E67F0)
#define CLASS_1_54094EFF836E7668_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x103E61B0)
#define CLASS_1_54094EFF836E7668_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x103E5F80)
#define CLASS_1_54094EFF836E7668_METHOD_1_E0289FB5AEE8D595_OFFSET UNITYSDK_OFFSET(0x103E6380)
#define CLASS_1_54094EFF836E7668_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x103E6590)
#define CLASS_1_54094EFF836E7668_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x103E6700)
#define CLASS_1_54094EFF836E7668__CCTOR_OFFSET UNITYSDK_OFFSET(0x103E6B60)

inline static constexpr unsigned int Class_1_54094EFF836E7668_TypeDefinitionIndex = 14484;

class Class_1_54094EFF836E7668 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54094EFF836E7668_TypeDefinitionIndex)->GetStaticField(0x419C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54094EFF836E7668_TypeDefinitionIndex)->GetStaticField(0x419C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54094EFF836E7668_TypeDefinitionIndex)->GetStaticField(0x419D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54094EFF836E7668_TypeDefinitionIndex)->GetStaticField(0xB230);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54094EFF836E7668_TypeDefinitionIndex)->GetStaticField(0xB231);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>* Method_1_AD87843931322A2C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_AD87843931322A2C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*> Method_1_A5498151E07D7361()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_A5498151E07D7361_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>, ::RPG::GameCore::RogueTournTitanBlessRow*> Method_1_E0289FB5AEE8D595()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournTitanBlessRow*>, ::RPG::GameCore::RogueTournTitanBlessRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_E0289FB5AEE8D595_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournTitanBlessRow* Method_1_55A5819004EF8FB1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournTitanBlessRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_55A5819004EF8FB1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_AEDD71E95740E810(::RPG::GameCore::RogueTournTitanBlessRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournTitanBlessRow*))((::PBYTE)hIl2Cpp + CLASS_1_54094EFF836E7668_METHOD_1_AEDD71E95740E810_OFFSET))(a1);
	}
};
