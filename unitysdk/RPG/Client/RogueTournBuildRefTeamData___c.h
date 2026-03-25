#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA37C830)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA37C870)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_0_OFFSET UNITYSDK_OFFSET(0xA37C880)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_1_OFFSET UNITYSDK_OFFSET(0xA37CBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamData___c_TypeDefinitionIndex = 55048;

	class RogueTournBuildRefTeamData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamData___c_TypeDefinitionIndex)->GetStaticField(0x1D600);
		}
		static ::RPG::Client::RogueTournBuildRefTeamData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournBuildRefTeamData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamData___c_TypeDefinitionIndex)->GetStaticField(0x1D608);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::String*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamData___c_TypeDefinitionIndex)->GetStaticField(0x1D610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__1_0(::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* candidates)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_0_OFFSET))(this, candidates);
		}

		::System::String* _ToString_b__1_1(::RPG::Client::IRogueTournBuildRefTeamMemberData* c)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_1_OFFSET))(this, c);
		}
	};
}
