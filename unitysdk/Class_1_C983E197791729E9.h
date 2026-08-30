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

#define CLASS_1_C983E197791729E9_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CC25460)
#define CLASS_1_C983E197791729E9_METHOD_1_51E1C8B54282AFB5_OFFSET UNITYSDK_OFFSET(0x1CC25070)
#define CLASS_1_C983E197791729E9_METHOD_1_82F37A7F3337D02A_OFFSET UNITYSDK_OFFSET(0x1CC24F00)
#define CLASS_1_C983E197791729E9_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC25290)
#define CLASS_1_C983E197791729E9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC25320)
#define CLASS_1_C983E197791729E9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC24EA0)
#define CLASS_1_C983E197791729E9_METHOD_1_D0E8EE7F989CCC25_OFFSET UNITYSDK_OFFSET(0x1CC24BF0)
#define CLASS_1_C983E197791729E9_METHOD_1_DE260880AB2EE76B_OFFSET UNITYSDK_OFFSET(0x1CC254B0)
#define CLASS_1_C983E197791729E9_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC24C70)
#define CLASS_1_C983E197791729E9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC25250)
#define CLASS_1_C983E197791729E9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC253C0)
#define CLASS_1_C983E197791729E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC25850)

inline static constexpr unsigned int Class_1_C983E197791729E9_TypeDefinitionIndex = 14613;

class Class_1_C983E197791729E9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x2F980);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x2F988);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0x2F990);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0xD400);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C983E197791729E9_TypeDefinitionIndex)->GetStaticField(0xD401);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*> Method_1_82F37A7F3337D02A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_82F37A7F3337D02A_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCRoomRow* Method_1_51E1C8B54282AFB5(::System::UInt32 a1, ::RPG::GameCore::RogueSubMode a2)
	{
		return ((::RPG::GameCore::RogueDLCRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_51E1C8B54282AFB5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C983E197791729E9_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
