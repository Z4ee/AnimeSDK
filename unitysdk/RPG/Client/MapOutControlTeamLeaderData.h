#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xA7FD8A0)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA7FD8D0)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA7FD9B0)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7FDA70)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA7FD890)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOutControlTeamLeaderData_TypeDefinitionIndex = 57955;

	class MapOutControlTeamLeaderData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_IconType()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MapOutControlTeamLeaderData_TypeDefinitionIndex)->GetStaticField(0x9360);
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
