#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefTeamDisplayMember.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1088;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamRecomResult; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_CLEARANDRELEASETEAMS_OFFSET UNITYSDK_OFFSET(0xDF8F3E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMDISPLAYMEMBERS_OFFSET UNITYSDK_OFFSET(0xDF8FD10)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMMEMBERS_OFFSET UNITYSDK_OFFSET(0xDF89320)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMRESULT_OFFSET UNITYSDK_OFFSET(0xDF8F990)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISALLSLOTHASRECOM_OFFSET UNITYSDK_OFFSET(0xDF8FAB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISCONTAINAVATAR_OFFSET UNITYSDK_OFFSET(0xDF7F340)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF901C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamDataExt_TypeDefinitionIndex = 67536;

	class RogueTournBuildRefTeamDataExt : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_1088** StaticGet__RecomStrategy()
		{
			return (::Class_0_16E4307DCC419505_1088**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefTeamDataExt_TypeDefinitionIndex)->GetStaticField(0x6C480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsContainAvatar(::RPG::Client::RogueTournBuildRefTeamData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISCONTAINAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Void ClearAndReleaseTeams(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::ICollection_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_CLEARANDRELEASETEAMS_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefTeamRecomResult* GetRecomResult(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefTeamRecomResult*(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMRESULT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* GetRecomMembers(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMMEMBERS_OFFSET))(a1);
		}

		static ::System::Boolean IsAllSlotHasRecom(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_ISALLSLOTHASRECOM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamDisplayMember>* GetRecomDisplayMembers(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamDisplayMember>*(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATAEXT_GETRECOMDISPLAYMEMBERS_OFFSET))(a1);
		}
	};
}
