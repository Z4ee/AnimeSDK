#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xAC2CAF0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xAC2CA60)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ISOVERTAKING_OFFSET UNITYSDK_OFFSET(0xAC2CAD0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xAC2CAB0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xAC2CA90)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0xAC2CA70)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_ISOVERTAKING_OFFSET UNITYSDK_OFFSET(0xAC2CAE0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_MINIMAPPOSITION_OFFSET UNITYSDK_OFFSET(0xAC2CAC0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xAC2CAA0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_RANK_OFFSET UNITYSDK_OFFSET(0xAC2CA80)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATEMINIMAP_OFFSET UNITYSDK_OFFSET(0xAC2CBF0)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xAC2CB90)
#define RPG_CLIENT_PARKOURGAMECHARACTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2CB50)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameCharacterInfo_TypeDefinitionIndex = 57036;

	class ParkourGameCharacterInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityParkourAIConfigRow* _Meta; // 0x10
		::System::Int32 _Rank_k__BackingField; // 0x18
		::UnityEngine::Vector2 _Position_k__BackingField; // 0x1C
		::System::Boolean _IsOvertaking_k__BackingField; // 0x24
		::UnityEngine::Vector2 _MiniMapPosition_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO__CTOR_OFFSET))(this, id);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_RANK_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MiniMapPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_MINIMAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MiniMapPosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_MINIMAPPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_IsOvertaking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ISOVERTAKING_OFFSET))(this);
		}

		::System::Void set_IsOvertaking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_SET_ISOVERTAKING_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 rank, ::UnityEngine::Vector2 position, ::System::Boolean isOvertaking)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATE_OFFSET))(this, rank, position, isOvertaking);
		}

		::System::Void UpdateMinimap(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECHARACTERINFO_UPDATEMINIMAP_OFFSET))(this, position);
		}
	};
}
