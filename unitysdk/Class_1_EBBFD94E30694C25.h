#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameModeGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EBBFD94E30694C25_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C7F7410)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_36447CBFB817C309_OFFSET UNITYSDK_OFFSET(0x1C7F6BF0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_3C6BA7C8E9C25CFF_OFFSET UNITYSDK_OFFSET(0x1C7F7460)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7F7240)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_8B08E2D54B73A142_OFFSET UNITYSDK_OFFSET(0x1C7F6F00)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7F72D0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7F6EA0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_D8C87020AA43C98C_OFFSET UNITYSDK_OFFSET(0x1C7F7070)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7F6C70)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7F7200)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7F7370)
#define CLASS_1_EBBFD94E30694C25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7F77D0)

inline static constexpr unsigned int Class_1_EBBFD94E30694C25_TypeDefinitionIndex = 12792;

class Class_1_EBBFD94E30694C25 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0xF100);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0xF108);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0xF110);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0x4850);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0x4851);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>* Method_1_36447CBFB817C309()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_36447CBFB817C309_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*> Method_1_8B08E2D54B73A142()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_8B08E2D54B73A142_OFFSET))();
	}

	static ::RPG::GameCore::GameModeGroupRow* Method_1_D8C87020AA43C98C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameModeGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_D8C87020AA43C98C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C6BA7C8E9C25CFF(::RPG::GameCore::GameModeGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameModeGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_3C6BA7C8E9C25CFF_OFFSET))(a1);
	}
};
