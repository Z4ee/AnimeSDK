#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x19C12E40)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C12EC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x19C13420)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_ISVALIDFORRECOM_OFFSET UNITYSDK_OFFSET(0x19C12F30)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C12DB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C12D70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamPathMemberData_TypeDefinitionIndex = 64541;

	class RogueTournBuildRefTeamPathMemberData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>* _Paths_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsValidForRecom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_ISVALIDFORRECOM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>* get_Paths()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_GET_PATHS_OFFSET))(this);
		}
	};
}
