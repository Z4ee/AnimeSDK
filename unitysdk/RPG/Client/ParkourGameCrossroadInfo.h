#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourCrossroadType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1C4E3D20)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C4E3C80)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C4E3CC0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4E3CF0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STYLE_OFFSET UNITYSDK_OFFSET(0x1C4E3CA0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1C4E3D30)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C4E3C90)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C4E3CE0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4E3D10)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STYLE_OFFSET UNITYSDK_OFFSET(0x1C4E3CB0)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4E3D40)
#define RPG_CLIENT_PARKOURGAMECROSSROADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E3E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameCrossroadInfo_TypeDefinitionIndex = 61926;

	class ParkourGameCrossroadInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsVisible_k__BackingField; // 0x10
		::RPG::Client::ParkourCrossroadType _Style_k__BackingField; // 0x14
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x18
		::System::Single _Distance_k__BackingField; // 0x24
		::UnityEngine::Vector3 _StartPosition_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourCrossroadType get_Style()
		{
			return ((::RPG::Client::ParkourCrossroadType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STYLE_OFFSET))(this);
		}

		::System::Void set_Style(::RPG::Client::ParkourCrossroadType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourCrossroadType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STYLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_StartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_StartPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_STARTPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::ParkourCrossroadType a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::ParkourCrossroadType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAMECROSSROADINFO_UPDATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
