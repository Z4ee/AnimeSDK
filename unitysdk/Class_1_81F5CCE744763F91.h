#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengePeakConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_81F5CCE744763F91_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B591300)
#define CLASS_1_81F5CCE744763F91_METHOD_1_1618FD94E5A3095C_OFFSET UNITYSDK_OFFSET(0x1B590FA0)
#define CLASS_1_81F5CCE744763F91_METHOD_1_377EAD4DAF2D24C2_OFFSET UNITYSDK_OFFSET(0x1B590E30)
#define CLASS_1_81F5CCE744763F91_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B591130)
#define CLASS_1_81F5CCE744763F91_METHOD_1_8D03ACE63233183E_OFFSET UNITYSDK_OFFSET(0x1B591350)
#define CLASS_1_81F5CCE744763F91_METHOD_1_8FED14DD9C81530D_OFFSET UNITYSDK_OFFSET(0x1B590B20)
#define CLASS_1_81F5CCE744763F91_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5911C0)
#define CLASS_1_81F5CCE744763F91_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B590DD0)
#define CLASS_1_81F5CCE744763F91_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B590BA0)
#define CLASS_1_81F5CCE744763F91_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5910F0)
#define CLASS_1_81F5CCE744763F91_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B591260)
#define CLASS_1_81F5CCE744763F91__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B591670)

inline static constexpr unsigned int Class_1_81F5CCE744763F91_TypeDefinitionIndex = 12483;

class Class_1_81F5CCE744763F91 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81F5CCE744763F91_TypeDefinitionIndex)->GetStaticField(0x9BA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81F5CCE744763F91_TypeDefinitionIndex)->GetStaticField(0x9BA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81F5CCE744763F91_TypeDefinitionIndex)->GetStaticField(0x9BB0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81F5CCE744763F91_TypeDefinitionIndex)->GetStaticField(0x40F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81F5CCE744763F91_TypeDefinitionIndex)->GetStaticField(0x40F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>* Method_1_8FED14DD9C81530D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_8FED14DD9C81530D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*> Method_1_377EAD4DAF2D24C2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_377EAD4DAF2D24C2_OFFSET))();
	}

	static ::RPG::GameCore::ChallengePeakConfigRow* Method_1_1618FD94E5A3095C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengePeakConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_1618FD94E5A3095C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8D03ACE63233183E(::RPG::GameCore::ChallengePeakConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengePeakConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_81F5CCE744763F91_METHOD_1_8D03ACE63233183E_OFFSET))(a1);
	}
};
