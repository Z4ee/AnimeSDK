#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleAchievementRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_764BB9C471926D56_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19D4A2E0)
#define CLASS_1_764BB9C471926D56_METHOD_1_1646137C4E9CBDC7_OFFSET UNITYSDK_OFFSET(0x19D4A330)
#define CLASS_1_764BB9C471926D56_METHOD_1_23B7F8DF1B230C31_OFFSET UNITYSDK_OFFSET(0x19D49E10)
#define CLASS_1_764BB9C471926D56_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19D4A110)
#define CLASS_1_764BB9C471926D56_METHOD_1_8A00ABE8F06FDB35_OFFSET UNITYSDK_OFFSET(0x19D49F80)
#define CLASS_1_764BB9C471926D56_METHOD_1_A4447006A5798BF0_OFFSET UNITYSDK_OFFSET(0x19D49B00)
#define CLASS_1_764BB9C471926D56_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19D4A1A0)
#define CLASS_1_764BB9C471926D56_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19D49DB0)
#define CLASS_1_764BB9C471926D56_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19D49B80)
#define CLASS_1_764BB9C471926D56_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19D4A0D0)
#define CLASS_1_764BB9C471926D56_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19D4A240)
#define CLASS_1_764BB9C471926D56__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D4A650)

inline static constexpr unsigned int Class_1_764BB9C471926D56_TypeDefinitionIndex = 12265;

class Class_1_764BB9C471926D56 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_764BB9C471926D56_TypeDefinitionIndex)->GetStaticField(0x4B3F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_764BB9C471926D56_TypeDefinitionIndex)->GetStaticField(0x4B3F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_764BB9C471926D56_TypeDefinitionIndex)->GetStaticField(0x4B400);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_764BB9C471926D56_TypeDefinitionIndex)->GetStaticField(0xE270);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_764BB9C471926D56_TypeDefinitionIndex)->GetStaticField(0xE271);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>* Method_1_A4447006A5798BF0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_A4447006A5798BF0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*> Method_1_23B7F8DF1B230C31()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAchievementRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_23B7F8DF1B230C31_OFFSET))();
	}

	static ::RPG::GameCore::BattleAchievementRow* Method_1_8A00ABE8F06FDB35(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattleAchievementRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_8A00ABE8F06FDB35_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1646137C4E9CBDC7(::RPG::GameCore::BattleAchievementRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleAchievementRow*))((::PBYTE)hIl2Cpp + CLASS_1_764BB9C471926D56_METHOD_1_1646137C4E9CBDC7_OFFSET))(a1);
	}
};
