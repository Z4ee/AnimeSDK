#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumStuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7A780F6A635812AB_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19123A30)
#define CLASS_1_7A780F6A635812AB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19123850)
#define CLASS_1_7A780F6A635812AB_METHOD_1_5088D7479A3408D3_OFFSET UNITYSDK_OFFSET(0x191231E0)
#define CLASS_1_7A780F6A635812AB_METHOD_1_5E9DB90DB5F0E70B_OFFSET UNITYSDK_OFFSET(0x19123510)
#define CLASS_1_7A780F6A635812AB_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19123260)
#define CLASS_1_7A780F6A635812AB_METHOD_1_AB92FE764D98DA30_OFFSET UNITYSDK_OFFSET(0x19123A80)
#define CLASS_1_7A780F6A635812AB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191238F0)
#define CLASS_1_7A780F6A635812AB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x191234B0)
#define CLASS_1_7A780F6A635812AB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19123810)
#define CLASS_1_7A780F6A635812AB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19123990)
#define CLASS_1_7A780F6A635812AB_METHOD_1_F948C7263A184FB4_OFFSET UNITYSDK_OFFSET(0x19123690)
#define CLASS_1_7A780F6A635812AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x19123D90)

inline static constexpr unsigned int Class_1_7A780F6A635812AB_TypeDefinitionIndex = 13483;

class Class_1_7A780F6A635812AB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A780F6A635812AB_TypeDefinitionIndex)->GetStaticField(0x3FA30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A780F6A635812AB_TypeDefinitionIndex)->GetStaticField(0x3FA38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A780F6A635812AB_TypeDefinitionIndex)->GetStaticField(0x3FA40);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A780F6A635812AB_TypeDefinitionIndex)->GetStaticField(0xE4A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A780F6A635812AB_TypeDefinitionIndex)->GetStaticField(0xE4A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>* Method_1_5088D7479A3408D3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_5088D7479A3408D3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*> Method_1_5E9DB90DB5F0E70B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_5E9DB90DB5F0E70B_OFFSET))();
	}

	static ::RPG::GameCore::MuseumStuffRow* Method_1_F948C7263A184FB4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MuseumStuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_F948C7263A184FB4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_AB92FE764D98DA30(::RPG::GameCore::MuseumStuffRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MuseumStuffRow*))((::PBYTE)hIl2Cpp + CLASS_1_7A780F6A635812AB_METHOD_1_AB92FE764D98DA30_OFFSET))(a1);
	}
};
