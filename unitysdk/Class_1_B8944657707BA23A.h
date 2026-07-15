#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumPhaseUpgradeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8944657707BA23A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B924020)
#define CLASS_1_B8944657707BA23A_METHOD_1_13F6EF8050F3B11F_OFFSET UNITYSDK_OFFSET(0x1B923B00)
#define CLASS_1_B8944657707BA23A_METHOD_1_4EC611664DE135C7_OFFSET UNITYSDK_OFFSET(0x1B924070)
#define CLASS_1_B8944657707BA23A_METHOD_1_5DAB00C206BB64E5_OFFSET UNITYSDK_OFFSET(0x1B923C70)
#define CLASS_1_B8944657707BA23A_METHOD_1_71FC261B3150077A_OFFSET UNITYSDK_OFFSET(0x1B9237F0)
#define CLASS_1_B8944657707BA23A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B923E50)
#define CLASS_1_B8944657707BA23A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B923EE0)
#define CLASS_1_B8944657707BA23A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B923AA0)
#define CLASS_1_B8944657707BA23A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B923870)
#define CLASS_1_B8944657707BA23A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B923E10)
#define CLASS_1_B8944657707BA23A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B923F80)
#define CLASS_1_B8944657707BA23A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9243D0)

inline static constexpr unsigned int Class_1_B8944657707BA23A_TypeDefinitionIndex = 13693;

class Class_1_B8944657707BA23A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8944657707BA23A_TypeDefinitionIndex)->GetStaticField(0x434A0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8944657707BA23A_TypeDefinitionIndex)->GetStaticField(0x434A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8944657707BA23A_TypeDefinitionIndex)->GetStaticField(0x434B0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8944657707BA23A_TypeDefinitionIndex)->GetStaticField(0xB820);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8944657707BA23A_TypeDefinitionIndex)->GetStaticField(0xB821);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>* Method_1_71FC261B3150077A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_71FC261B3150077A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*> Method_1_13F6EF8050F3B11F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumPhaseUpgradeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_13F6EF8050F3B11F_OFFSET))();
	}

	static ::RPG::GameCore::MuseumPhaseUpgradeRow* Method_1_5DAB00C206BB64E5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MuseumPhaseUpgradeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_5DAB00C206BB64E5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4EC611664DE135C7(::RPG::GameCore::MuseumPhaseUpgradeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MuseumPhaseUpgradeRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8944657707BA23A_METHOD_1_4EC611664DE135C7_OFFSET))(a1);
	}
};
