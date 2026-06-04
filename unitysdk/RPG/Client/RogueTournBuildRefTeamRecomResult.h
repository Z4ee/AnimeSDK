#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_895;
class Class_0_16E4307DCC419505_896;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xC805F60)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC805100)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET UNITYSDK_OFFSET(0xC8061E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET UNITYSDK_OFFSET(0xC806120)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET UNITYSDK_OFFSET(0xC806180)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC805F10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamRecomResult_TypeDefinitionIndex = 63177;

	class RogueTournBuildRefTeamRecomResult : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_895* _Strategy; // 0x10
		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* _RecomMembers_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_896* _Context; // 0x20

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

		::System::Void Init(::Class_0_16E4307DCC419505_895* a1, ::Class_0_16E4307DCC419505_896* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_895*, ::Class_0_16E4307DCC419505_896*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValidMember(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* get_RecomMembers()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET))(this);
		}
	};
}
