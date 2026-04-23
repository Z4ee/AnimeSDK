#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_046D7E7D73E44996;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FRIENDMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3DC300)
#define RPG_CLIENT_FRIENDMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DC340)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__121_0_OFFSET UNITYSDK_OFFSET(0xA3DC370)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__120_0_OFFSET UNITYSDK_OFFSET(0xA3DC350)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendModule___c_TypeDefinitionIndex = 59118;

	class FriendModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>** StaticGet___9__120_0()
		{
			return (::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x121C0);
		}
		static ::RPG::Client::FriendModule___c** StaticGet___9()
		{
			return (::RPG::Client::FriendModule___c**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x121C8);
		}
		static ::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>** StaticGet___9__121_0()
		{
			return (::System::Func_2<::Class_1_046D7E7D73E44996*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x121D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetPSUUIDFriendList_b__120_0(::Class_1_046D7E7D73E44996* info)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_046D7E7D73E44996*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__120_0_OFFSET))(this, info);
		}

		::System::String* _GetPSUUIDBlackList_b__121_0(::Class_1_046D7E7D73E44996* info)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_046D7E7D73E44996*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__121_0_OFFSET))(this, info);
		}
	};
}
