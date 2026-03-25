#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9B04660)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9B04690)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9B04770)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B04830)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B04650)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOutControlTeamLeaderData_TypeDefinitionIndex = 51072;

	class MapOutControlTeamLeaderData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_IconType()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MapOutControlTeamLeaderData_TypeDefinitionIndex)->GetStaticField(0x7920);
		}
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* playerStub)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA__CTOR_OFFSET))(this, playerStub);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA__CCTOR_OFFSET))();
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_ROTATION_OFFSET))(this);
		}
	};
}
