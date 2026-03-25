#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_046D7E7D73E44996;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FRIENDMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x971B740)
#define RPG_CLIENT_FRIENDMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x971B780)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__117_0_OFFSET UNITYSDK_OFFSET(0x971B7B0)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__116_0_OFFSET UNITYSDK_OFFSET(0x971B790)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendModule___c_TypeDefinitionIndex = 52167;

	class FriendModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>** StaticGet___9__117_0()
		{
			return (::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x89B0);
		}
		static ::RPG::Client::FriendModule___c** StaticGet___9()
		{
			return (::RPG::Client::FriendModule___c**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x89B8);
		}
		static ::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>** StaticGet___9__116_0()
		{
			return (::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x89C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetPSUUIDFriendList_b__116_0(::Class_1_046D7E7D73E44996* info)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_046D7E7D73E44996*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__116_0_OFFSET))(this, info);
		}

		::System::String* _GetPSUUIDBlackList_b__117_0(::Class_1_046D7E7D73E44996* info)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_046D7E7D73E44996*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__117_0_OFFSET))(this, info);
		}
	};
}
