#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourCrossroadType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xAC2CCE0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xAC2CC40)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xAC2CC80)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAC2CCB0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STYLE_OFFSET UNITYSDK_OFFSET(0xAC2CC60)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xAC2CCF0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xAC2CC50)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xAC2CCA0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAC2CCD0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STYLE_OFFSET UNITYSDK_OFFSET(0xAC2CC70)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xAC2CD00)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAC2CDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameCrossroadInfo_TypeDefinitionIndex = 57038;

	class ParkourGameCrossroadInfo : public ::System::Object
	{
	public:
		::System::Single _Distance_k__BackingField; // 0x10
		::RPG::Client::ParkourCrossroadType _Style_k__BackingField; // 0x14
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x18
		::System::Boolean _IsVisible_k__BackingField; // 0x24
		::UnityEngine::Vector3 _StartPosition_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::RPG::Client::ParkourCrossroadType get_Style()
		{
			return ((::RPG::Client::ParkourCrossroadType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STYLE_OFFSET))(this);
		}

		::System::Void set_Style(::RPG::Client::ParkourCrossroadType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourCrossroadType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STYLE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_StartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_StartPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STARTPOSITION_OFFSET))(this, value);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_DISTANCE_OFFSET))(this, value);
		}

		::System::Void Update(::System::Boolean isVisible, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 position, ::RPG::Client::ParkourCrossroadType style, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::ParkourCrossroadType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_UPDATE_OFFSET))(this, isVisible, startPosition, position, style, distance);
		}
	};
}
