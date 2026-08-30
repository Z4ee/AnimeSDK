#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF3FEC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF3FF00)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__ISALLSLOTHASRECOM_B__5_0_OFFSET UNITYSDK_OFFSET(0xDF3FF10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamDataExt___c_TypeDefinitionIndex = 67535;

	class RogueTournBuildRefTeamDataExt___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamDataExt___c_TypeDefinitionIndex)->GetStaticField(0x108A0);
		}
		static ::RPG::Client::RogueTournBuildRefTeamDataExt___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournBuildRefTeamDataExt___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamDataExt___c_TypeDefinitionIndex)->GetStaticField(0x108A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAllSlotHasRecom_b__5_0(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT___C__ISALLSLOTHASRECOM_B__5_0_OFFSET))(this, a1);
		}
	};
}
