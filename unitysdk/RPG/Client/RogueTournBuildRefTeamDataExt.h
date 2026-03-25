#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefTeamDisplayMember.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_744;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamRecomResult; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_CLEARANDRELEASETEAMS_OFFSET UNITYSDK_OFFSET(0xA37CC00)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMDISPLAYMEMBERS_OFFSET UNITYSDK_OFFSET(0xA37D2F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMMEMBERS_OFFSET UNITYSDK_OFFSET(0xA377430)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMRESULT_OFFSET UNITYSDK_OFFSET(0xA37CFA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISALLSLOTHASRECOM_OFFSET UNITYSDK_OFFSET(0xA37D0C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISCONTAINAVATAR_OFFSET UNITYSDK_OFFSET(0xA36DCA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA37D600)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamDataExt_TypeDefinitionIndex = 55050;

	class RogueTournBuildRefTeamDataExt : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_744** StaticGet__RecomStrategy()
		{
			return (::Class_0_16E4307DCC419505_744**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamDataExt_TypeDefinitionIndex)->GetStaticField(0x1D650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsContainAvatar(::RPG::Client::RogueTournBuildRefTeamData* data, ::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISCONTAINAVATAR_OFFSET))(data, avatarID);
		}

		static ::System::Void ClearAndReleaseTeams(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* teams)
		{
			return ((::System::Void(*)(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_CLEARANDRELEASETEAMS_OFFSET))(teams);
		}

		static ::RPG::Client::RogueTournBuildRefTeamRecomResult* GetRecomResult(::RPG::Client::RogueTournBuildRefTeamData* team)
		{
			return ((::RPG::Client::RogueTournBuildRefTeamRecomResult*(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMRESULT_OFFSET))(team);
		}

		static ::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* GetRecomMembers(::RPG::Client::RogueTournBuildRefTeamData* team)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMMEMBERS_OFFSET))(team);
		}

		static ::System::Boolean IsAllSlotHasRecom(::RPG::Client::RogueTournBuildRefTeamData* team)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISALLSLOTHASRECOM_OFFSET))(team);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamDisplayMember>* GetRecomDisplayMembers(::RPG::Client::RogueTournBuildRefTeamData* team)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamDisplayMember>*(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMDISPLAYMEMBERS_OFFSET))(team);
		}
	};
}
