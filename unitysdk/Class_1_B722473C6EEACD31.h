#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivitySummonLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B722473C6EEACD31_METHOD_1_0831D3E156E83DA6_OFFSET UNITYSDK_OFFSET(0x18FC9A50)
#define CLASS_1_B722473C6EEACD31_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18FC9A00)
#define CLASS_1_B722473C6EEACD31_METHOD_1_1177D5723CF329D3_OFFSET UNITYSDK_OFFSET(0x18FC9650)
#define CLASS_1_B722473C6EEACD31_METHOD_1_3E8E1172C1733B76_OFFSET UNITYSDK_OFFSET(0x18FC94E0)
#define CLASS_1_B722473C6EEACD31_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FC9830)
#define CLASS_1_B722473C6EEACD31_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FC98C0)
#define CLASS_1_B722473C6EEACD31_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FC9480)
#define CLASS_1_B722473C6EEACD31_METHOD_1_D1FB85C3E293A9C1_OFFSET UNITYSDK_OFFSET(0x18FC91D0)
#define CLASS_1_B722473C6EEACD31_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FC9250)
#define CLASS_1_B722473C6EEACD31_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FC97F0)
#define CLASS_1_B722473C6EEACD31_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FC9960)
#define CLASS_1_B722473C6EEACD31__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FC9DB0)

inline static constexpr unsigned int Class_1_B722473C6EEACD31_TypeDefinitionIndex = 11834;

class Class_1_B722473C6EEACD31 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B722473C6EEACD31_TypeDefinitionIndex)->GetStaticField(0x354E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B722473C6EEACD31_TypeDefinitionIndex)->GetStaticField(0x354E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B722473C6EEACD31_TypeDefinitionIndex)->GetStaticField(0x354F0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B722473C6EEACD31_TypeDefinitionIndex)->GetStaticField(0xA860);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B722473C6EEACD31_TypeDefinitionIndex)->GetStaticField(0xA861);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>* Method_1_D1FB85C3E293A9C1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_D1FB85C3E293A9C1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*> Method_1_3E8E1172C1733B76()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_3E8E1172C1733B76_OFFSET))();
	}

	static ::RPG::GameCore::ActivitySummonLevelRow* Method_1_1177D5723CF329D3(::System::UInt32 a1, ::RPG::GameCore::ActivitySummonDifficulty a2)
	{
		return ((::RPG::GameCore::ActivitySummonLevelRow*(*)(::System::UInt32, ::RPG::GameCore::ActivitySummonDifficulty))((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_1177D5723CF329D3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0831D3E156E83DA6(::RPG::GameCore::ActivitySummonLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivitySummonLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_B722473C6EEACD31_METHOD_1_0831D3E156E83DA6_OFFSET))(a1);
	}
};
