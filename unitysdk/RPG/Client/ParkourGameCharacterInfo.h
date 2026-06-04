#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC33C8C0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xC33C830)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ISOVERTAKING_OFFSET UNITYSDK_OFFSET(0xC33C8A0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xC33C880)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC33C860)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0xC33C840)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_ISOVERTAKING_OFFSET UNITYSDK_OFFSET(0xC33C8B0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xC33C890)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC33C870)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0xC33C850)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATEMINIMAP_OFFSET UNITYSDK_OFFSET(0xC33C9C0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xC33C960)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC33C920)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameCharacterInfo_TypeDefinitionIndex = 57823;

	class ParkourGameCharacterInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityParkourAIConfigRow* _Meta; // 0x10
		::System::Boolean _IsOvertaking_k__BackingField; // 0x18
		::System::Int32 _Rank_k__BackingField; // 0x1C
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::UnityEngine::Vector2 _MiniMapPosition_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_RANK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_MiniMapPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_MINIMAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MiniMapPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_MINIMAPPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOvertaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ISOVERTAKING_OFFSET))(this);
		}

		::System::Void set_IsOvertaking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_ISOVERTAKING_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateMinimap(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATEMINIMAP_OFFSET))(this, a1);
		}
	};
}
