#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerCheersTypeTextmapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_484E1189A6F14D94_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19116450)
#define CLASS_1_484E1189A6F14D94_METHOD_1_50485917A20EAC11_OFFSET UNITYSDK_OFFSET(0x19115EF0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_799168CC21CA9F90_OFFSET UNITYSDK_OFFSET(0x19115BE0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_8865BD5E25D4CFE4_OFFSET UNITYSDK_OFFSET(0x191164A0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19116280)
#define CLASS_1_484E1189A6F14D94_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19116310)
#define CLASS_1_484E1189A6F14D94_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19115E90)
#define CLASS_1_484E1189A6F14D94_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19115C60)
#define CLASS_1_484E1189A6F14D94_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19116240)
#define CLASS_1_484E1189A6F14D94_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191163B0)
#define CLASS_1_484E1189A6F14D94_METHOD_1_FB88F5561D280A50_OFFSET UNITYSDK_OFFSET(0x19116060)
#define CLASS_1_484E1189A6F14D94__CCTOR_OFFSET UNITYSDK_OFFSET(0x19116850)

inline static constexpr unsigned int Class_1_484E1189A6F14D94_TypeDefinitionIndex = 12572;

class Class_1_484E1189A6F14D94 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x535F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x535F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x53600);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x10800);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_484E1189A6F14D94_TypeDefinitionIndex)->GetStaticField(0x10801);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>* Method_1_799168CC21CA9F90()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_799168CC21CA9F90_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*> Method_1_50485917A20EAC11()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_50485917A20EAC11_OFFSET))();
	}

	static ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* Method_1_FB88F5561D280A50(::System::UInt32 a1, ::RPG::GameCore::DrinkMakerQuantifyTagType a2)
	{
		return ((::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*(*)(::System::UInt32, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_FB88F5561D280A50_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8865BD5E25D4CFE4(::RPG::GameCore::DrinkMakerCheersTypeTextmapRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*))((::PBYTE)hIl2Cpp + CLASS_1_484E1189A6F14D94_METHOD_1_8865BD5E25D4CFE4_OFFSET))(a1);
	}
};
