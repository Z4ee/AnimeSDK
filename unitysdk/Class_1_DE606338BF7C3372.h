#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE606338BF7C3372_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B215600)
#define CLASS_1_DE606338BF7C3372_METHOD_1_213BD6A8B1690FA3_OFFSET UNITYSDK_OFFSET(0x1B215260)
#define CLASS_1_DE606338BF7C3372_METHOD_1_7021114C80E2D616_OFFSET UNITYSDK_OFFSET(0x1B215650)
#define CLASS_1_DE606338BF7C3372_METHOD_1_7CC188373EC7F7C7_OFFSET UNITYSDK_OFFSET(0x1B2150F0)
#define CLASS_1_DE606338BF7C3372_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B215430)
#define CLASS_1_DE606338BF7C3372_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B2154C0)
#define CLASS_1_DE606338BF7C3372_METHOD_1_B7393A00E73D218A_OFFSET UNITYSDK_OFFSET(0x1B214DE0)
#define CLASS_1_DE606338BF7C3372_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B215090)
#define CLASS_1_DE606338BF7C3372_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B214E60)
#define CLASS_1_DE606338BF7C3372_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B2153F0)
#define CLASS_1_DE606338BF7C3372_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B215560)
#define CLASS_1_DE606338BF7C3372__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2159C0)

inline static constexpr unsigned int Class_1_DE606338BF7C3372_TypeDefinitionIndex = 11724;

class Class_1_DE606338BF7C3372 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0x4C910);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0x4C918);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0x4C920);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0xD820);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE606338BF7C3372_TypeDefinitionIndex)->GetStaticField(0xD821);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>* Method_1_B7393A00E73D218A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_B7393A00E73D218A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*> Method_1_7CC188373EC7F7C7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_7CC188373EC7F7C7_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesAvatarLevelRow* Method_1_213BD6A8B1690FA3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesAvatarLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_213BD6A8B1690FA3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7021114C80E2D616(::RPG::GameCore::PlanetFesAvatarLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_DE606338BF7C3372_METHOD_1_7021114C80E2D616_OFFSET))(a1);
	}
};
