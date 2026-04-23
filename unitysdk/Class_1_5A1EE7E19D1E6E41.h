#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesGameConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18479670)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18479490)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_59889621F20B72DD_OFFSET UNITYSDK_OFFSET(0x18479140)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_692B1760D942120A_OFFSET UNITYSDK_OFFSET(0x184796C0)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18478E90)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_79F61DA0C46C0A15_OFFSET UNITYSDK_OFFSET(0x18478E10)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18479530)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x184790E0)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_D60A3A843C4E62B2_OFFSET UNITYSDK_OFFSET(0x184792C0)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18479450)
#define CLASS_1_5A1EE7E19D1E6E41_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x184795D0)
#define CLASS_1_5A1EE7E19D1E6E41__CCTOR_OFFSET UNITYSDK_OFFSET(0x184799D0)

inline static constexpr unsigned int Class_1_5A1EE7E19D1E6E41_TypeDefinitionIndex = 11574;

class Class_1_5A1EE7E19D1E6E41 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A1EE7E19D1E6E41_TypeDefinitionIndex)->GetStaticField(0x2F850);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A1EE7E19D1E6E41_TypeDefinitionIndex)->GetStaticField(0x2F858);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A1EE7E19D1E6E41_TypeDefinitionIndex)->GetStaticField(0x2F860);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A1EE7E19D1E6E41_TypeDefinitionIndex)->GetStaticField(0xBE60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A1EE7E19D1E6E41_TypeDefinitionIndex)->GetStaticField(0xBE61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>* Method_1_79F61DA0C46C0A15()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_79F61DA0C46C0A15_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*> Method_1_59889621F20B72DD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGameConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_59889621F20B72DD_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesGameConfigRow* Method_1_D60A3A843C4E62B2(::RPG::GameCore::PlanetFesGameType a1)
	{
		return ((::RPG::GameCore::PlanetFesGameConfigRow*(*)(::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_D60A3A843C4E62B2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_692B1760D942120A(::RPG::GameCore::PlanetFesGameConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesGameConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A1EE7E19D1E6E41_METHOD_1_692B1760D942120A_OFFSET))(a1);
	}
};
