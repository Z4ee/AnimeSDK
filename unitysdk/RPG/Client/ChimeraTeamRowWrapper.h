#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTeamRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x93D7380)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_ROUNDTALKMAP_OFFSET UNITYSDK_OFFSET(0x93D7BA0)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMAVATARICON_OFFSET UNITYSDK_OFFSET(0x93D7590)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMCONFIGJSON_OFFSET UNITYSDK_OFFSET(0x93D7DA0)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMICON_OFFSET UNITYSDK_OFFSET(0x93D7520)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x93D7D20)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x93D7440)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93D7D40)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x93D7D30)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x93D7D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRowWrapper_TypeDefinitionIndex = 51517;

	class ChimeraTeamRowWrapper : public ::System::Object
	{
	public:
		::System::UInt32 _TeamID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraTeamRowWrapper* Create(::System::UInt32 teamID)
		{
			return ((::RPG::Client::ChimeraTeamRowWrapper*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_CREATE_OFFSET))(teamID);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_SET_TEAMID_OFFSET))(this, value);
		}

		::System::String* get_TeamIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMICON_OFFSET))(this);
		}

		::System::String* get_TeamAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMAVATARICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMNAME_OFFSET))(this);
		}

		::System::String* get_TeamConfigJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMCONFIGJSON_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_RoundTalkMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_ROUNDTALKMAP_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTeamRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraTeamRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET__ROW_OFFSET))(this);
		}
	};
}
