#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C983E197791729E9_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16E13930)
#define CLASS_1_C983E197791729E9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16E13750)
#define CLASS_1_C983E197791729E9_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16E130A0)
#define CLASS_1_C983E197791729E9_METHOD_1_A806D431D198F3EC_OFFSET UNITYSDK_OFFSET(0x16E13500)
#define CLASS_1_C983E197791729E9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16E137F0)
#define CLASS_1_C983E197791729E9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16E132F0)
#define CLASS_1_C983E197791729E9_METHOD_1_CF591895BE97699E_OFFSET UNITYSDK_OFFSET(0x16E13350)
#define CLASS_1_C983E197791729E9_METHOD_1_D0E8EE7F989CCC25_OFFSET UNITYSDK_OFFSET(0x16E13020)
#define CLASS_1_C983E197791729E9_METHOD_1_DE260880AB2EE76B_OFFSET UNITYSDK_OFFSET(0x16E13980)
#define CLASS_1_C983E197791729E9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E13710)
#define CLASS_1_C983E197791729E9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16E13890)
#define CLASS_1_C983E197791729E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E13D30)

inline static constexpr unsigned int Class_1_C983E197791729E9_TypeDefinitionIndex = 13507;

class Class_1_C983E197791729E9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x18710);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x18718);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x18720);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x6FB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x6FB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>* Method_1_D0E8EE7F989CCC25()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_D0E8EE7F989CCC25_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*> Method_1_CF591895BE97699E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_CF591895BE97699E_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCRoomRow* Method_1_A806D431D198F3EC(::System::UInt32 a1, ::RPG::GameCore::RogueSubMode a2)
	{
		return ((::RPG::GameCore::RogueDLCRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_A806D431D198F3EC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_DE260880AB2EE76B(::RPG::GameCore::RogueDLCRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_DE260880AB2EE76B_OFFSET))(a1);
	}
};
