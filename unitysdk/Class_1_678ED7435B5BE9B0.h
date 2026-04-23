#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAchievementRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_678ED7435B5BE9B0_METHOD_1_031E7AD7C74A6F12_OFFSET UNITYSDK_OFFSET(0x19059730)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_0350FF44C200DF91_OFFSET UNITYSDK_OFFSET(0x19059C50)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19059C00)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19021740)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FD8C70)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19059AC0)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_AEB52093349D7EE4_OFFSET UNITYSDK_OFFSET(0x19059650)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_C7AB2FB52BF35662_OFFSET UNITYSDK_OFFSET(0x190598B0)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x190596D0)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19059A80)
#define CLASS_1_678ED7435B5BE9B0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19059B60)
#define CLASS_1_678ED7435B5BE9B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x19059F60)

inline static constexpr unsigned int Class_1_678ED7435B5BE9B0_TypeDefinitionIndex = 11555;

class Class_1_678ED7435B5BE9B0 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_678ED7435B5BE9B0_TypeDefinitionIndex)->GetStaticField(0x3D560);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_678ED7435B5BE9B0_TypeDefinitionIndex)->GetStaticField(0x3D568);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_678ED7435B5BE9B0_TypeDefinitionIndex)->GetStaticField(0x3D570);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_678ED7435B5BE9B0_TypeDefinitionIndex)->GetStaticField(0xDA00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_678ED7435B5BE9B0_TypeDefinitionIndex)->GetStaticField(0xDA01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>* Method_1_AEB52093349D7EE4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_AEB52093349D7EE4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*> Method_1_031E7AD7C74A6F12()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAchievementRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_031E7AD7C74A6F12_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesAchievementRow* Method_1_C7AB2FB52BF35662(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesAchievementRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_C7AB2FB52BF35662_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_0350FF44C200DF91(::RPG::GameCore::PlanetFesAchievementRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesAchievementRow*))((::PBYTE)hIl2Cpp + CLASS_1_678ED7435B5BE9B0_METHOD_1_0350FF44C200DF91_OFFSET))(a1);
	}
};
