#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_844;
class Class_0_16E4307DCC419505_845;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0B6AC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0B44C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET UNITYSDK_OFFSET(0xB0B6D30)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET UNITYSDK_OFFSET(0xB0B6C70)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET UNITYSDK_OFFSET(0xB0B6CD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B6A70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamRecomResult_TypeDefinitionIndex = 62244;

	class RogueTournBuildRefTeamRecomResult : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_845* _Context; // 0x10
		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* _RecomMembers_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_844* _Strategy; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::Class_0_16E4307DCC419505_844* strategy, ::Class_0_16E4307DCC419505_845* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_844*, ::Class_0_16E4307DCC419505_845*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET))(this, strategy, context);
		}

		::System::Boolean IsValidMember(::RPG::Client::IRogueTournBuildRefTeamMemberData* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET))(this, member);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* get_RecomMembers()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET))(this);
		}
	};
}
