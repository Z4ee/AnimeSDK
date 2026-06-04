#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeBadgeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A8E9181418D32DF1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F854D0)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_7973464F0762485D_OFFSET UNITYSDK_OFFSET(0x18F84CF0)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_803DF81AB5A120BA_OFFSET UNITYSDK_OFFSET(0x18F85170)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F85300)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F85390)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_C91DC080E718B972_OFFSET UNITYSDK_OFFSET(0x18F85000)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F84FA0)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F84D70)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F852C0)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F85430)
#define CLASS_1_A8E9181418D32DF1_METHOD_1_FB691C845C1941EC_OFFSET UNITYSDK_OFFSET(0x18F85520)
#define CLASS_1_A8E9181418D32DF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F85840)

inline static constexpr unsigned int Class_1_A8E9181418D32DF1_TypeDefinitionIndex = 12326;

class Class_1_A8E9181418D32DF1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8E9181418D32DF1_TypeDefinitionIndex)->GetStaticField(0x38420);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8E9181418D32DF1_TypeDefinitionIndex)->GetStaticField(0x38428);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8E9181418D32DF1_TypeDefinitionIndex)->GetStaticField(0x38430);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8E9181418D32DF1_TypeDefinitionIndex)->GetStaticField(0xB3D0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8E9181418D32DF1_TypeDefinitionIndex)->GetStaticField(0xB3D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>* Method_1_7973464F0762485D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_7973464F0762485D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*> Method_1_C91DC080E718B972()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBadgeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_C91DC080E718B972_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeBadgeConfigRow* Method_1_803DF81AB5A120BA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeBadgeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_803DF81AB5A120BA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FB691C845C1941EC(::RPG::GameCore::ChallengeBadgeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeBadgeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A8E9181418D32DF1_METHOD_1_FB691C845C1941EC_OFFSET))(a1);
	}
};
